// code for bash



/* Special Directories -----------------------------------------
 
 .            current directory
 ..           current directory parent
 ~            home directory
 ~userid      home directory
 -------------------------------------------------------------*/





/* tab ---------------------------------------------------------
   - auto complete
 -------------------------------------------------------------*/





/* man----------------------------------------------------------
 man [command]
 - this will yield the manual of [command]
 ------------------------------------------------------------ */


/* Pipe
 [command1] [file1] | [command2]
 - this will use the result of [command1] [file1] as the input for [command2]
 */


/* Paths
    Absolute Path: Starting from the root. 
                   A path start with / is an abosulte path.
    Relative Path: Not starting from the root
 */



// --------------------------------------------------------------
// echo $0
// check which Unix Shell we are using now
// print [bash] if we are using bash
//       [-bash] if we aren't using bash

// bash
// set the command prompt to bash
// --------------------------------------------------------------



/* vim ----------------------------------------------------------
 vim [file.extension]
 -opens [file.extension] with vim.
 
 Exc
 -Return to Normal Mode
 
 hkjl
 
 
 u
 -undo (in Normal Mode)
 
 i
 -enter Insert Mode
 
 
 
 
 
 
 
 */








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


/* cat ---------------------------------------------------------------------
 cat [file]
 -display the contents in a
 
 cat -n [file]
 -display the content of [file] and number the lines
 -cat can open multiple files at a time, redirect method cannot
 
 cat < [file]
 -redirect the content of [file] to cat. cat will display the content of [file]
 
 cat [src] > [dest]
 -equivalent as cp [src] [dest]
 -even if [src] does not exist, [dest] would also be created.
 
 cat [src] > [dest] 2> [err]
 -2> will redirect the error message
 -even if no errors generated, [err] would also be created. 
 ------------------------------------------------------------------------ */


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
// [anything generates output] > textfile.txt
// this will redirect the contents of output stream to textfile.txt
// this will create [textfile.txt] if not existed.


// nano [filename]
// This command will create a new file [filename] and open it in nano text editor
// [control + 0] - save the file
// [control + x] - exit the editor


/* head ---------------------------------------------------------
 head -n [file]
 -this will print the first n lines of [file]

 tail -n [file]
 -this will print the last n lines of [file]
 
 gshuf -n [number] [file]
 -this will randomly take [number] lines from [file] and print it.
 --------------------------------------------------------------*/




/* head ---------------------------------------------------------
 head -n [file]
 this will print the first n lines of [file]
 
 tail -n [file]
 -this will print the last n lines of [file]
 --------------------------------------------------------------*/



/* egrep ---------------------------------------------------------
 egrep [pattern] [file]
 -prints every line in [file] which contains the [pattern]
 -egrap is the abbr. for [Extended Global Regular Expression Print]
 -the [pattern] is a regular expression
 
 egrep "pattern1|pattern2" [file]
 -prints every line in [file] which contains [pattern1] or [pattern2]
 -quotation needed when special characters present
 --------------------------------------------------------------*/





/* uniq ---------------------------------------------------------
 uniq [file]
 -eliminates all adjacent characters in [file] and print it in [stdout]
 -does not modify [file]
 --------------------------------------------------------------*/



/* sort ---------------------------------------------------------
 sort [file]
 -sorts [file] line by line
 
 --------------------------------------------------------------*/



// This command will print the first ten lines of [filename]


// more [filename]
// This command will display the first part of [filename]


// diff [filename1] [filename2]
// This command will compare the contents of [filename1] and [filename2]


/* wc --------------------------------------------------------
 
 wc [file]
 print [count_lines count_words count_bytes filename]
 
 wc -c [file]
 print the characters counts
 
 wc -l [file]
 print the newline counts
 
 wc -w [file]
 print the word counts
 -------------------------------------------------------------*/





// ------------------------------------------------------------
// gzip [file]
// This command will compress [file]


// gunzip [file.zip]
// This command unzips [file.zip]


// gzcat [file.zip]
// This command shows the content of [file.zip] without unziping it.
// ------------------------------------------------------------




// jupyter notebook
// This command opens jupyter notebook (it needs to be installed).



// clear
// This command will clear the screen


// exit
// This command will terminate current bash session


