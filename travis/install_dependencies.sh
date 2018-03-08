#!/bin/bash

echo INSTALL_DEPENDENCIES

cd /
cd /home

sudo mkdir tmp
cd tmp

sudo apt-get install --reinstall cmake
sudo apt-get install --reinstall make

ls

# GCC installation

sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test
sudo apt-get update -qq
sudo apt-get install -qq g++-5
sudo update-alternatives --install /usr/bin/g++ g++ /usr/bin/g++-5 90

gcc --version

# GTest installation

sudo apt-get -qq update
sudo wget https://github.com/google/googletest/archive/release-1.8.0.tar.gz
sudo tar xf release-1.8.0.tar.gz
cd googletest-release-1.8.0/googletest
ls
cmake -DBUILD_SHARED_LIBS=ON .
make
sudo cp -a include/gtest /usr/include
sudo cp -a libgtest_main.so libgtest.so /usr/lib/
sudo ldconfig -v | grep gtest

cd "${TRAVIS_BUILD_DIR}"
ls
