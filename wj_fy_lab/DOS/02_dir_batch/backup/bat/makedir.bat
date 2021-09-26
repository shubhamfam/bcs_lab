@echo off

mkdir dir2
cd dir2
    mkdir fol1, fol2
    cd fol1
        mkdir fol3,fol4
        cd fol3
            type nul > file1.txt
            cd../
        cd../
    cd fol2
        mkdir fol5,fol6,fol7
        cd fol5
            type nul > file2.txt
            cd../
        cd fol7
            type nul > file3.txt
            cd../
        cd../
    cd../