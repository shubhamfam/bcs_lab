@echo off

    mkdir backup
    cd backup
        mkdir txt
        mkdir bat
        cd ../
copy *.bat backup\bat\
echo .bat files copied 
copy *.txt backup\txt\
echo .txt files copied

pause waiting for user to enter to delete the bat files

del *.bat

@REM >backup
@REM backup.bat
@REM filecopy.bat
@REM makedir.bat
@REM         3 file(s) copied.
@REM .bat files copied
@REM commands.txt
@REM text2.txt
@REM         2 file(s) copied.
@REM .txt files copied
@REM Press any key to continue . . .
@REM The batch file cannot be found.