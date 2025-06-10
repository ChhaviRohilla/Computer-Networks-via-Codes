#include <iostream>
// #include <cmath>  
using namespace std;

int main(){
    int A[5][5]={{0, 1, 1, 0, 0},
    {1, 0, 0, 0, 1},
    {1, 0, 0, 1, 0},
    {0, 0, 1, 0, 1},
   {0, 1, 0, 1, 0}};

    int i,j,k=0;
    int path[5][5];

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            path[i][j]=A[i][j];
        }
    }

    for(k=0;k<5;k++){
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                path[i][j]=(path[i][j]||(path[i][k]&&path[k][j]));
            }
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<path[i][j]<<" ";
        }
        cout<<"\n";
    }
}