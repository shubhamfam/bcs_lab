@echo off

set /p file1=file 1 name\n
set /p file2=file 2 name\n

if exist %file1% (
    type %file1%
) else (
    copy con %file1%
)

if exist %file2% (
    copy %file1% %file2%
) else (
    ren %file1% %file2%
)
