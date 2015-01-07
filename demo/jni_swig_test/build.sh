#!/bin/bash
swig  -java -package com.test.jnitest -outdir ./  example.i 
gcc example.c example_wrap.c -I/usr/lib/jvm/java-6-oracle/include/ -I/usr/lib/jvm/java-6-oracle/include/linux/  -fPIC -shared -o libexample.so
