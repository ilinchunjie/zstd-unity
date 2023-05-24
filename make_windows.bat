mkdir build-x64 & pushd build-x64
cmake -G "Visual Studio 17 2022" ..
popd
cmake --build build-x64 --config Release
md Plugins\Win\x64
copy /Y build-x64\Release\zstd.dll Plugins\Win\x64\zstd.dll
pause