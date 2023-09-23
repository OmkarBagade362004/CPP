#include <iostream>
using namespace std;

int main(){
	int row1,col1;
	
	cout << "Enter the number of rows and columns for the First matrix: "; 
	cin >> row1 >> col1;
	
	//initialise matrices
	int m1[row1][col1];	
	int i,j;
	
	//matrix 1
	cout << "Enter elements of the first matrix: " << endl;
	for(i = 0; i < row1; i++){
		for(j = 0; j < col1; j++){
			cout << "Enter the element at [" << i << "][" << j << "]: ";
			cin >> m1[i][j];
		}
	}
	
	int countNonZeroes = 0;
	int countZeroes = 0;
	
	//non zeroes elements 
	for(i = 0; i < row1; i++){
		for(j = 0; j < col1; j++){
			if(m1[i][j] != 0){
				countNonZeroes++;
			}
		}
	}
	//zeroes elements 
	for(i = 0; i < row1; i++){
		for(j = 0; j < col1; j++){
			if(m1[i][j] == 0){
				countZeroes++;
			}
		}
	}
	cout << "Total number of non-zero elements: " << countNonZeroes << endl;
	cout << "Total number of zero elements: " << countZeroes << endl;		
	return 0;
}
