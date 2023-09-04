#include<bits/stdc++.h>
using namespace std;

int getMain(int val1, int val2){
    return val1<val2?val1:val2;
}


int getMinimumSum(int arr[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==0 && j==0){
                continue;
            }
            else if(i==0){
                arr[i][j]=arr[i][j]+arr[i][j];
            }
            else if(j==0){
                arr[i][j]=arr[i][j]+arr[i][j];
            }
            else{
                arr[i][j]=getMain(arr[i-1][j]+arr[i][j], arr[i][j-1]+arr[i][j]);
            }
        }
    }
    return arr[2][2];
}

int main()
{
    int rows, cols;
    cout << "Enter The Row & Cols: ";
    cin >> rows >> cols;
    int inputArry[3][3];
    cout << "Enter the elements for the matrix" << endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << "inputArry["<< i <<"]["<< j <<"]=";
            cin >> inputArry[i][j];
        }
        cout << endl;
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << inputArry[i][j]<< " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Length of the Minimum path Sum:" << getMinimumSum(inputArry);
    return 0;
}
