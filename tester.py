#!/usr/bin/env python3

import sys
import subprocess
import resource
import os
import shutil
import datetime

from termcolor import colored

targets = [
	{"name": "ac/c2/daffodil"},
	{"name": "ac/c2/hanxin"},
	{"name": "ac/c2/triangle"},
	{"name": "ac/c2/subsequence"},
	{"name": "ac/c2/decimal"},
	{"name": "ac/c2/permutation"},
]

root = "/tmp/algo-tests/"

#NE: Not Exist, -1
#CE: Compile Error, -2
#RE: Runtime Error (e.g., segfault), -3
#TLE: Time Limit Exceeded, -4
#MLE: Memory Limit Exceeded, -5
#WA: Wrong Answer, -6
#AC: Accepted

def get_inout_files(name):
	pref = "data_" + name
	return ([pref + "/in/" + str(_+1) for _ in range(10)], [pref + "/out/" + str(_+1) for _ in range(10)])

def compile(path):
	base_name = os.path.basename(path)
	body_name = '.'.join(base_name.split('.')[:-1])
	ret = subprocess.call(["g++", path, "-o", root + body_name], stderr=subprocess.DEVNULL, stdout=subprocess.DEVNULL)
	return (ret, root + body_name)

def read_file(path):
	s = ''
	if not os.path.isfile(path):
		return s

	with open(path) as fd:
		s = fd.read().strip()
	return s

def test_program(path, name, mem, timeout):
	base_name = os.path.basename(path)
	ins, outs = get_inout_files(name)
	shutil.copyfile(ins[0], root + base_name + ".in")
	ret = -1
	tle = False
	dur = None
	resource.setrlimit(resource.RLIMIT_AS, (mem*(1<<20), resource.RLIM_INFINITY))
	try:
		start = datetime.datetime.now()
		ret = subprocess.call(path, cwd=root, timeout=timeout, stderr=subprocess.DEVNULL, stdout=subprocess.DEVNULL)
		dur = datetime.datetime.now() - start
	except Exception as ex:
		print(colored("timeout executing {0}: {1}".format(name, ex), "red"), file = sys.stderr)
		tle = True
	resource.setrlimit(resource.RLIMIT_AS, (resource.RLIM_INFINITY, resource.RLIM_INFINITY))
	
	std_answer = read_file(outs[0])
	chk_answer = read_file(root + base_name + ".out")
	dur = int(dur.total_seconds()*1000) if dur is not None else -1
	mark = 100 if std_answer == chk_answer else 0
	return (ret, tle, dur, mark)

if __name__ == '__main__':
	for tgt in targets:
		fn = tgt["name"] + ".cpp"
		if not os.path.isfile(fn):
			print(colored("{0} doesn't exist".format(fn), "red"), file = sys.stderr)
			tgt["code"] = -1
			continue

		base_name = os.path.basename(fn)
		shutil.rmtree(root, ignore_errors=True)
		os.mkdir(root)
		shutil.copyfile(fn, root + base_name)
		ret, exe_path = compile(root + base_name)
		if ret != 0:
			print(colored("{0} doesn't compile: {1}".format(fn, ret), "red"), file = sys.stderr)
			tgt["code"] = -2
			continue
		mem = tgt["mem"] if "mem" in tgt else 64
		timeout = tgt["timeout"] if "timeout" in tgt else 1
		ret, tle, dur, mark = test_program(exe_path, tgt["name"], mem, timeout)
		if ret != 0:
			tgt["code"] = -3
		elif tle:
			tgt["code"] = -4
		else:
			tgt["code"] = mark
			color = "green" if mark == 100 else "yellow"
			print(colored("{0} done [{1} ms] with mark of {2} ;)".format(fn, dur, mark), color))
