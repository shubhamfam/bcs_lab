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

