#!/bin/bash

find . -name "*.cpp" -exec wc -l {} \; | sort -n | awk '{t+=$1; print $0} END{print t}'
