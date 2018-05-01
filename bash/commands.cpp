// code for bash

/* Special Directories
 
 .            current directory
 ..           current directory parent
 ~            home directory
 ~userid      home directory
 */


/* Paths
    Absolute Path: Starting from the root
    Relative Path: Not starting from the root
 */




// echo $0
// check which Unix Shell we are using now
// print [bash] if we are using bash
//       [-bash] if we aren't using bash


// echo [string]
// This command will display the contents of [string]


// echo CS[!1]*


// echo [abc]*.txt


// echo cs{246, 1}


// lpr [file]
// This command will print [file]


// export
// This command will list all the environmental variables


// pwd - (print working directory)
// This command yields current directory


// cd - (change directory)
// This command changes directory


// cd[space]
// This command changes directory up by one level


// cd[space]/
// This command changes directory to the top level


// cd ~
// This command changes directory to the top level


// ls - list contents
// This command lists the contents in current directory


// ls -a
// Lists all files (include hidden files)
// (Hidden files' name starts with a dot(.)


// ls -l
// This command lists contents with permissions


// ls *.txt
// Wildcard matching
// Lists all files of the form [whatever].txt


// mkdir [folder_name]
// This command makes a new directory and name it [folder_name]


// rmdir dirname
// Removes an empty directory. An error occurs if attempt to remove a non-empty folder.
// This is safer.


// rmdir -r [folder_name]
// Removes the contents [folder_name] and removes [folder_name]
// This can be dangerous since we're able to delete multiple files at once.


// cp file1 file2 - make a copy of file1 and name it file2
// rm file - remove file
// cat a - display the contents in a


// rm [file]
// This will delete [file]
// This will not permanently remove the file, it is ACTUALLY REMOVED when we reuse the memory
// So it is technically possible to restore the files with special methods.


// rm *.txt
// Remove all files of the form [whatever].txt
// It is clearly extremely dangerous.


// gcc filename.c
// This command compliles a .c file with gcc compiler and name the output "a.out"


// gcc a.c -o b
// compile a.c with gcc and name the output b
// b can have any extension


// g++ a.cpp
// This command compiles a .cpp file with g++ compilier


// direct output to a file
// ./file > textfile.txt
// this will redirect the contents of output stream to textfile.txt


// nano [filename]
// This command will create a new file [filename] and open it in nano text editor
// [control + 0] - save the file
// [control + x] - exit the editor


// head [filename]
// This command will print the first ten lines of [filename]


// more [filename]
// This command will display the first part of [filename]


// diff [filename1] [filename2]
// This command will compare the contents of [filename1] and [filename2]





// gzip [file]
// This command will compress [file]


// gunzip [file.zip]
// This command unzips [file.zip]


// gzcat [file.zip]
// This command shows the content of [file.zip] without unziping it.





// jupyter notebook
// This command opens jupyter notebook (it needs to installed). 



// clear
// This command will clear the screen


// exit
// This command will terminate current bash session


