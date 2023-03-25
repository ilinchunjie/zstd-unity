mkdir build_windows & pushd build_windows
cmake -G "Visual Studio 17 2022" ..
popd
cmake --build build_windows --config Release
pause