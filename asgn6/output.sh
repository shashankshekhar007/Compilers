#!/bin/bash

../asgn5/bin/irgen $1 > $1.txt
../asgn2/bin/codegen $1.txt > $1.output
