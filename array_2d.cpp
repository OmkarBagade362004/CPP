#include <iostream>
using namespace std;

int main(){

	int a[5][5], row, col, i, j;

	cout << "Enter rows: "<< endl;
	cin >> row;
	cout << "Enter columns: "<< endl;
        cin >> col;

	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			cout << "array ["<<i<<"]"<<"["<<j<<"]"<<endl;
			cin >> a[i][j];
		}
	}

	cout << "===============Matrix=================\n";

	for(i = 0; i < row; i++){
               for(j = 0; j < col; j++){
                       cout << "\t" << a[i][j];
               }
		cout << endl;
        }


	return 0;
}
