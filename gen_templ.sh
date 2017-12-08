#!/bin/bash

name=$1

echo "#include <cstdio>

int main()
{
#ifndef CON_IO
	freopen(\"${name}.in\", \"r\", stdin);
	freopen(\"${name}.out\", \"w\", stdout);
#endif
	return 0;
}" > ${name}.cpp
