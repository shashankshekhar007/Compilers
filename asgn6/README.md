# Assignment 2 Group 28
# Group Members: Shashank Shekhar (150662), Meet Kumar Jigar Sanghvi (150400), Piyush Bansal (150488)
_____________________________________________________________

To build and run our assignment, please follow the following steps :
1. cd asgn6               (If not already in asgn4, otherwise ignore this step.)
2. make
3. ./output.sh test/test1.go ( To run the test file test1.go . The output file is contained in assignment2.asm ).

Limitations of the compiler we have implemented :

1. Since b is already a command in MIPS, and so is j, therefore we have to provide test cases in which b and j are not declared as variables.
2. We tried to implement class, but were unable to implement the stack associated with it.
3. We have implemented integers, however, the compiler can be extended to other data types.
4. The code is written in C, hence for large programs, we can get a malloc error.
5. Switch-case could not be implemented as it was giving a large number of reduce-reduce conflicts in the parser.
6. Since in go, print and scan commands are part of a library, hence, there was no support for grammar to input or output. However, we have implemented input and output in our code generator. This can be checked by manually adding input and output lines to the output file of the parser.


Problems we faced in our project :
1. C (seems like chosing this as the implementation language was not a very wise decision). Dealing with pointers and structures was difficult, and not having support of classes increased the difficulty exponentially.
2. Vectors are not supported in C. Hence, we had to allocate a huge chunk of memory. This was a great difficulty we faced, and gave quite many errors.
3. The grammar for GO was not available in the LALR format - nowhere on the Internet. We had to make several changes in the grammar - which was huge - to remove the conflicts. This was a tiresome task. Moreover, we had to remove some of the advanced features due to the conflicts they were causing.

Some things we are proud of:

1. This was the first time we wrote this big a code base from scratch, and which was working.
2. Despite facing the difficulty with C, we implemented our entire codegenerator in C.
3. The graph created by YACC was too big to be rendered, hence, we had to manually work out the states and solve the conflicts. However, we managed to do the same.

