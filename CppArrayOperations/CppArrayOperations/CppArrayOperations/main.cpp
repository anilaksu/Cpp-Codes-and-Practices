#define _USE_MATH_DEFINES
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include<cmath>

using namespace std;
float topla(float[],  const int);

double determinant(double **A, int N) {
	// this function computes the determinant of square matrices
	int counter;                         // Counter to be used to calculate the determinant
	//const int N_r = (N - 1);           // submatrice to be used to calculate a determinant
	double **A_s;
	double det=0.;

	A_s = new double* [N-1];

	for (int i = 0; i < N; i++) {
		counter = 0;
		for (int j = 0; j < N; j++) {
			if (j == i)
				continue;
			else{
				//A_s[counter] = A[1:(N-1)][j];
				counter++;
			}
				
		}
		det += pow(-1, i )*A[i][1] ;
	}

	return det;
}

void swapUsingAddress(int* m, int* n) {
	int temp = *m;
	// temp *= temp;
	*m = *n;
	*n = temp;
}

void ArrayOperationUsingAddress(float x[], const int N_size) {
	
	for (int i=0; i < N_size; i++)
		x[i] = x[i] * x[i];
}

int main()
{   

	int a, b;
	int* x;                                            // pointer variable
	const int N_size = 4;                                        // size of the sample array
	double **K;                                      // dynamic array for element wise summation
	float SampleArray[4] = { 2.7, 56, 7.8, 9.1 };      // Sample array
	string line;                                        // Sample string 
	cout << "Dizi elemanlari: ";                      

	// let's declare the matris A
	K = new double* [3];
	for (int i = 0; i < 3; i++)
		K[i] = new double[3];

	// let's fill up the matrix
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
		{
			K[i][j] = i + j;
		}
	}

	ArrayOperationUsingAddress(SampleArray, 4);

	for (int i = 0; i <= 3; i++)
		cout << SampleArray[i] << " ";
	cout << endl;
	cout << "Sum of the elements of the arary =" << topla(SampleArray, N_size) << endl;

	cout << "Enter two numbers A & B" << endl; cin >> a;
	cin >> b;
	cout << "Value of A before swapping: " << a << endl;
	cout << "Value of B before swapping: " << b << endl;

	x = &a;                        // store address of var in pointer variable

	swapUsingAddress(x, &b); // Passing address of a and b

	cout << "---------------------Swapping--------------------------" << endl;
	cout << "Value of A after swapping: " << a << endl;
	cout << "Value of B after swapping: " << b << endl;

	

	// print the address storted in x pointer varibale
	cout << "Address stored in x variable: ";
	cout << x << endl;

	// print the value stored in x pointer varibale
	cout << "Value stored in x variable: ";
	cout << *x << endl;


	ifstream myfile("205.obj");

	getline(myfile, line);

	cout << line << endl;

	// print the matrix A
	cout << "A matrix: ";
	cout << K[2][2] << endl;

	// print the matrix A
	cout << "the result of K matrix operation:";
	cout << determinant(K, 3) << endl;

	return 0;

}

float topla(float par[], const int N_size)
{   
	//float Sum[N_size];
	float toplam = 0.0;
	for (int i = 0; i < N_size; i++)
		toplam += par[i];                            // Summation of all elements in the array
	return toplam;
}

