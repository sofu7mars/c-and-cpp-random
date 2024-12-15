#include <iostream>

using namespace std;

int main(){
    int rows, columns;
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    rows = sizeof(arr) / sizeof(arr[0]);
    columns = sizeof(arr[0]) / sizeof(arr[0][0]);
    int arr1[3][3];

    if(rows != columns){
        cout << "Matrix should be a square matrix" << endl;
    } else {
        cout << "Upper right triangle: " << endl;
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                if(i < j){
                    arr1[i][j] = 0;
                } else {
                    arr1[i][j] = arr[i][j];
                }
                cout << arr1[i][j] << " ";
            }
            cout << endl; 
        }
        cout << "Botton left triangle: " << endl;
        int arr2[3][3];
        for(int i = 0; i < rows; i++){
            for(int j = 0; j < columns; j++){
                if(i > j){
                    arr2[i][j] = 0;
                } else {
                    arr2[i][j] = arr[i][j];
                }
                cout << arr2[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

return 0;
}