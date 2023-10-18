#include <iostream>
#include <string>
#include <iomanip>

#include "Matrix.h"

Matrix::Matrix(int l1)
{
    length = l1;
    data = new float[length];
}

Matrix::Matrix()
{
    length = 0;
    data = NULL;
}

void Matrix::readMatrix(string fileName)
{
    ifstream input;
    input.open(fileName);

    for (int i = 0; i < length; i++)
    {
        input >> data[i];
    }
    input.close();
}

/*******************************************************************************
 * void print(Matrix& A){
 *
 * Output:
 *   Prints A to the screen
 ********************************************************************************/

void Matrix::print()
{

    // print values to screen
    for (int i = 0; i < length; i++)
    {
        cout << std::setw(8) << data[i];
    }
    printf("\n");
}

/*******************************************************************************
 * Matrix::~Matrix()
 *
 * Deconstructor for Matrix object
 ********************************************************************************/
Matrix::~Matrix()
{
    delete data;
}

int Matrix::getLength()
{
    return length;
}

float *Matrix::getData()
{
    return data;
}

Matrix Matrix::operator+(Matrix &B)
{
    Matrix C(length);
    for (int i = 0; i < length; i++)
    {
        C.data[i] = data[i] + B.data[i];
    }
    return C;
}

/*******************************************************************************
 * Matrix Matrix::operator+(float)
 *      Takes in a float
 *      Goes through a for-loop of list of lenghts and stores the data in the new matrix
 *
 *      Returns: a new Matrix C
 *
 ********************************************************************************/

Matrix Matrix::operator+(float scalar)
{                                    // Counter + float
    Matrix C(length);                // declares Matrix C as length
    for (int i = 0; i < length; i++) // for loop for going through the list of lengths
    {
        C.data[i] = data[i] + scalar; // sets the data of Matrix C to the data plus scaler which is a float value
    }
    return C; // returns Matrix C
}

/*******************************************************************************
 * Matrix Matrix::operator+(float, const)
 *      Takes in a float and const Matrix&A
 *      Goes through a for-loop of list of lenghts of Matrix A and
 *      stores the data in the new matrix
 *
 *      Returns: a new Matrix C
 *
 ********************************************************************************/

Matrix operator+(float scalar, const Matrix &A)
{                       // Counter + float + const
    Matrix C(A.length); // declares Matrix C as length
    for (int i = 0; i < A.length; i++)
    {
        C.data[i] = A.data[i] + scalar; // calcualtion of adding the data in Matrix A and float
    }
    return C; // returns the new Matrix
}

/*******************************************************************************
 * Matrix Matrix::operator+(ostream, const)
 *      Takes in a ostream and const Matrix&A
 *      
 *      Task: 
 *      Goes through a for-loop of list of lenghts of Matrix A and
 *      stores the data from Matrix A in the output stream (os)
 *
 *      Returns: the output with the new data 
 *
 ********************************************************************************/
ostream &operator<<(ostream &os, const Matrix &A)
{
    for (int i = 0; i < A.length; i++)
    {
        os << std::setw(8) << A.data[i]; // stores the data of the Matrix A into the output stream
    }
    os << endl; // ends the output stream
    return os;  // returns the output stream
}
