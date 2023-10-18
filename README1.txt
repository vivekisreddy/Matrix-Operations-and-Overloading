Vivek Reddy Kasireddy 
2/27/2023
Homework 6 - Part 1 

Summary: The main purpose of the program is to use the various operator to do calculation of Matrixes. 
The Matrix.h, Matrix.cpp and run_matrix.cpp was all provided by the professor but we had to modify the code
to use overload the operator functions. The three new functions I had to add to the Matrix.cpp included  
Matrix operator+(float) which overloaded the Matrix operator+ to take in a float and returned the new Matrix C. 
The second function friend Matrix operator+(float, const Matrix& A) overloaded with taking a float and Matrix A 
and returned the new Matrix C. The third function was friend ostream& operator<<(ostream& os, const Matrix& A)
which overloaded with the output stream in which it takes the current data from Matrix A and uses it to write 
sequences of characters and represent other kinds of data. 


To compile: 
g++ -Wall run_matrix.cpp Matrix.cpp -lm –o runM

To run: 
./a.exe 

Sources: 
I have done this code comepltely by myself without any help from outside sources. 
