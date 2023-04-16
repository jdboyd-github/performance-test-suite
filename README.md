-- echo

(Measure-Command { echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." | Out-Default }).ToString()
time echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."

-- ls

(Measure-Command { ls | Out-Default }).ToString()
time ls

-- cp

(Measure-Command { cp file* .\cp\ | Out-Default }).ToString()
time cp file* cp/

-- mv

(Measure-Command { mv file* .\mv\ | Out-Default }).ToString()
time mv file* mv/

-- clear

(Measure-Command { clear | Out-Default }).ToString()
time clear

-- rm

(Measure-Command { rm file* | Out-Default }).ToString()
time rm file*

-- fc

(Measure-Command { fc.exe file1.txt file2.txt | Out-Default }).ToString()
time diff file1.txt file2.txt

-- find

(Measure-Command { find "`"Execute`"" * | Out-Default }).ToString()
time grep “Execute” *

-- man

(Measure-Command { man echo | Out-Default }).ToString()
time man echo

-- pwd

(Measure-Command { pwd | Out-Default }).ToString()
time pwd

-- date

(Measure-Command { date | Out-Default }).ToString()
time date

-- cd

(Measure-Command { cd folder1 | Out-Default }).ToString()
time cd folder1

-- mkdir

(Measure-Command { mkdir folder1 | Out-Default }).ToString()
time mkdir folder1

-- rmdir

(Measure-Command { rmdir folder1 | Out-Default }).ToString()
time rmdir folder1

-- kill

(Measure-Command { kill 5160 | Out-Default }).ToString()
time kill 5160

-- ps

(Measure-Command { ps | Out-Default }).ToString()
time ps

-- cat

(Measure-Command { cat .\file1.txt | Out-Default }).ToString()
time cat file1.txt

-- tree

(Measure-Command { tree | Out-Default }).ToString()
time ls -R

-- >

(Measure-Command { echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." > file2.txt | Out-Default }).ToString()
time echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." > file2.txt

-- >>

(Measure-Command { echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." >> file2.txt | Out-Default }).ToString()
time echo "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum." >> file2.txt
