@echo off
setlocal

call build.bat "%*"

for /f %%S in ('mabu -q --print-spec') do set BUILD_SPEC=%%S
.out\%BUILD_SPEC%\%g3logMagicLeap

