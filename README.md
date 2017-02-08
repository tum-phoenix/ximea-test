# ximea-test

[![Build Status](https://travis-ci.org/tum-phoenix/ximea-test.svg?branch=master)](https://travis-ci.org/tum-phoenix/ximea-test)

This tool tries to open and get an image from a XIMEA camera.
The Program returns 0 if successful, 1 otherwise.

This tool was used for the autostart functionality at CC2017.

## Installation

```
mkdir build
cd build
cmake ..
make
sudo make install
```

## Usage

```
ximea-test
```

Wait until XIMEA camera is ready:

```
until ximea-test
do
  sleep 1
done
```
