wc –lw names.txt    |   displays no of lines and words      |    10  42 names.txt

mkdir ass1 ass2     |   creates two directories ass 1       |       
                    |   and ass 2                           |   no output

cp names.txt ass2   |   copy names.txt to /ass2/            |   no output

cp names.txt list   |   copy names.txt to new dir list as   |
                    |   it doesnt exist                     |   no output

tail -3 list        |   displays last three lines from list |   Paul McCartney, Liverpool, UK
                    |                                       |   Ashton Irwin, Syndey, Australia,
                    |                                       |   George Harrison, Liverpool, UK

rmdir ass2          |   delete ass2                         |   rmdir: failed to remove 'ass2': Directory not empty

cd ass2             |   change current dir to ass2          |   no output

rm names.txt        |   delete names.txt                    |   no output

cd                  |   change current dir to home          |   no output

pwd                 |   displays path of current working    |
                    |   Directory                           |   /home/ray

ls -l               |   displays all the files in the       |
                    |   working directory with perms        |   total 4
                    |                                       |   drwxr-xr-x 2 ray ray 4096 Aug 27 22:10 test
            
mv list list.txt    |                                       |   mv: cannot stat 'list': No such file or directory

grep Luke names.txt |   displays the lines in which the     |
                    |   pattern is found                    |   Luke Hemmings, Syndey, Australia

SET B

mkdir s1 s2 s3 s4   |   create dirs s1, s2, s3, s4          |   no output

cp college.txt coll |   copy college.txt to file coll       |   not output


                