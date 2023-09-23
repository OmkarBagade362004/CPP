#include <iostream>
using namespace std;

int main(){
	int row1,col1,row2,col2;
	
	cout << "Enter the number of rows and columns for the First matrix: "; 
	cin >> row1 >> col1;
	
	cout << "Enter the number of rows and columns for the Second matrix: "; 
	cin >> row2 >> col2;
	 
	if(col1 != row2){
		cout << "Matrix multiplication is not possible." << endl;
		return 1;
	}
	
	//initialise matrices
	int m1[row1][col1];
	int m2[row2][col2];
	int result[row1][col2];
	
	int i,j,k;
	//matrix 1
	cout << "Enter elements of the first matrix: " << endl;
	for(i = 0; i < row1; i++){
		for(j = 0; j < col1; j++){
			cin >> m1[i][j];
		}
	}
	
	//matrix 2
	cout << "Enter elements of the second matrix: " << endl;
	for(i = 0; i < row2; i++){
		for(j = 0; j < col2; j++){
			cin >> m2[i][j];
		}
	}
	
	//matrix multiplication
	for(i = 0; i < row1; i++){
		for(j = 0; j < col2; j++){
			result[i][j] = 0;
			for(k = 0; k < col1; k++){
				result[i][j] += m1[i][k] * m2[k][j];
			}
		}
	}	
	
	//result
	cout << "Resultant matrix after multiplication" << endl;
	for(i = 0; i < row1; i++){
		for(j = 0; j < col2; j++){
			cout << result[i][j] << " ";
		}
		cout << endl;
	}
			
	return 0;
}
