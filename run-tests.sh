#!/bin/bash

g++ main.cpp && for t in test*txt; do echo -e "\n\nTEST: $t\n"; ./a.out < $t; done; rm ./a.out


