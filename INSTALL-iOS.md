# Compile and install instructions on MacOSX

mkdir build-ios
cmake .. -G XCode -DCMAKE_TOOLCHAIN_FILE=../toolchain/iOS.cmake
