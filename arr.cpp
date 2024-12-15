#include<iostream>
#include<stdlib.h>
#include<stdio.h>

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

    int t1[columns][rows];

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            t1[j][i] = arr[i][j];
        }
    }

    for(int j = 0;j < columns; j++){
        for(int i = 0; i < rows; i++){
            cout << t1[j][i] << " ";
        }
        cout << endl;
    }



    return 0;
}