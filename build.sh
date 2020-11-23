#!/bin/bash

#build deps : libalut0-dev

echo Building h-craft championchip please wait a while ....

cd build/
./make-libs-linux.sh

cd ../libs/irrlicht/source/Irrlicht
make

cd ../../../../src
make linux64_release

echo finished
