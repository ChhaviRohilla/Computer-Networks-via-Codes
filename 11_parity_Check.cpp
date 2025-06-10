#include<iostream>
// #include<cmath>;
using namespace std;

int main(){
    int arr[5][5]={{1,1,0,1,0},{1,0,0,1,0},{1,1,0,0,0},{1,1,1,1,0},{0,0,0,0,0}};
    int n=4;
    int p=0;
    //LRC
    for (int i=0;i<4;i++){
        p=0;
        for(int j=0;j<4;j++){
            p=p^arr[i][j];
        }
        arr[i][n]=p;
    }

    //VRC
    for (int i=0;i<4;i++){
        p=0;
        for(int j=0;j<4;j++){
            p=p^arr[j][i];
        }
        arr[n][i]=p;
    }
    p=0;
    //BLock parity
    for (int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            p=p^arr[i][j];
        }
    }
    arr[n][n]=p;
    //print
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }

    //error generated
    arr[2][2]=1-arr[2][2];

    //LRC receiver side
    for (int i=0;i<5;i++){
        p=0;
        for(int j=0;j<5;j++){
            p=p^arr[i][j];
        }
        arr[i][4]=p;
    }

    //VRC receiver side
    for (int i=0;i<5;i++){
        p=0;
        for(int j=0;j<5;j++){
            p=p^arr[j][i];
        }
        arr[4][i]=p;
    }
    p=0;
    //BLock parity receiver side
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            p=p^arr[i][j];
        }
    }
    arr[4][4]=p;
    //print
    cout<<"receiver "<<"\n";
    for (int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}