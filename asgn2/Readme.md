# Assignment 2 Group 28
# Group Members: Shashank Shekhar (150662), Meet Kumar Jigar Sanghvi (150400), Piyush Bansal (150488)
_____________________________________________________________

To build and run our assignment, please follow the following steps :
1. cd asgn2               (If not already in asgn2, otherwise ignore this step.)
2. make
3. bin/codegen test/test1.csv             (To run test1, similarly change test1 to the desired file you want to run)

About the Code Generator build:
1. The current build of the code generator supports minimal library implementations like reading input from the user and printing output to the console.
2. It also supports array implementations and recursive functions implementations.
3. 


Note :
While implementing recursion, we have added return addresses ($ra) to the stack, and not the return values. However, the return values can also be added by changing the stack pointer by 8 bytes.
We do not know of temporaries as of now (it was said that all variables are permanent), so we have not used the temporary registers as of now. However, it can be implemented when we know how to differentiate between temporary and permanent variables.
