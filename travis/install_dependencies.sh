#!/bin/bash

echo INSTALL_DEPENDENCIES

cd /

# CMake installation

CMAKE_VERSION=3.5.1
CMAKE_VERSION_DIR=v3.5

CMAKE_OS=Linux-x86_64
CMAKE_TAR=cmake-$CMAKE_VERSION-$CMAKE_OS.tar.gz
CMAKE_URL=http://www.cmake.org/files/$CMAKE_VERSION_DIR/$CMAKE_TAR
CMAKE_DIR=$(pwd)/cmake-$CMAKE_VERSION

wget --quiet $CMAKE_URL
mkdir -p $CMAKE_DIR
tar --strip-components=1 -xzf $CMAKE_TAR -C $CMAKE_DIR
export PATH=$CMAKE_DIR/bin:$PATH

cmake --version

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
sudo cmake -DBUILD_SHARED_LIBS=ON .
sudo make
sudo cp -a include/gtest /usr/include
sudo cp -a libgtest_main.so libgtest.so /usr/lib/
sudo ldconfig -v | grep gtest

cd "${TRAVIS_BUILD_DIR}"
