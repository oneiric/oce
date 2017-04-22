#!/bin/bash
cd build

flags=""
flags="$flags -DOCE_INSTALL_PREFIX:PATH=$HOME/oce"
flags="$flags -DOCE_TESTING:BOOL=ON"
cmake $flags ..

make -j 8
make install/strip
