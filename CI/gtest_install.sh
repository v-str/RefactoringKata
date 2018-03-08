#!/bin/bash

#gtest installation

sudo wget https://github.com/google/googletest/archive/release-1.8.0.tar.gz
sudo tar xf release-1.8.0.tar.gz
cd googletest-release-1.8.0
sudo cmake -DBUILD_SHARED_LIBS=ON .
sudo make
sudo cp -a include/gtest /usr/include
sudo cp -a libgtest_main.so libgtest.so /usr/lib/
g++ -v


