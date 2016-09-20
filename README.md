# gethubb

## task
create a program that takes the users input 10 times, adds input to an array

of strings using the strarr API, and then prints back all the inputs at the

end

## files
 - README.md : this file
 - hello.c : hello world test; independent file
 - name.c : test input/output; independent file
 - strarr.c/.h : defines a quick mini-API for string arrays
 - main.c : main file

## compiling
###### independents:
`gcc -o hello.exe hello.c`

`gcc -o name.exe name.c`

###### main

```
gcc -c strarr.c

gcc -c main.c

gcc -o main.exe strarr.o main.o
```


