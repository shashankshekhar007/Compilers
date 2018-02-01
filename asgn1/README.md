 # Assignment 1 Group 28
# Group Members: Shashank Shekhar (150662), Meet Kumar Jigar Sanghvi (150400), Piyush Bansal (150488)
_____________________________________________________________

To build and run our assignment, please follow the following steps :
1. cd asgn1               (If not already in asgn1, otherwise ignore this step.)
2. make
3. bin/lexer test/test1.go             (To run test1, similarly change test1 to the desired file you want to run)

Limitations with the Lexer Implementation :
1. We have chosen the array sizes to store the Identifiers, Int_constant, Float_constants etc. as 2000. Thus the max constants or identifiers or number of variables are limited to 2000 only. This is because vectors are not supported in C. Moreover, we would not face this problem in future because yacc can directly refer to all the tokens using put_in_tabl().
2. In floating point representation of numbers, we have not added representations of the form {float}E{float} because E can be declared as a variable too in the program. Thus we are not including this representation. 


Note :
In some cases gcc -lfl works in the make file, and in others it needs to be changed to gcc -ll works depending upon the versions of lex installed. Please make the changes accordingly as required by you. 