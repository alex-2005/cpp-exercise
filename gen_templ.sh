#!/bin/bash

fn=$1

echo "#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen(\"${fn}.in\", \"r\", stdin);
	freopen(\"${fn}.out\", \"w\", stdout);
#endif
	return 0;
}" >> ${fn}.cpp
