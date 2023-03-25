mkdir build_windows & pushd build_windows
cmake -G "Visual Studio 17 2022" ..
popd
cmake --build build_windows --config Release
md Plugins\Win\x86_64
copy /Y build_windows\Release\zstd.dll Plugins\Win\x86_64\zstd.dll
pause