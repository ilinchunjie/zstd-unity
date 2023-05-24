mkdir build-x86 & pushd build-x86
cmake -G "Visual Studio 17 2022" -A "Win32" ..
popd
cmake --build build-x86 --config Release
md Plugins\Win\x86
copy /Y build-x86\Release\zstd.dll Plugins\Win\x86\zstd.dll
pause