#include <iostream>
#include <cmath>  
using namespace std;

int main(){
    const int INF=1000;
    int dist_mat[5][5]={{0, 4, 9, INF, 10},
    {4, 0, INF, 8, 6},
    {9, INF, 0, 5, 3},
    {INF, 8, 5, 0, INF},
   {10, 6, 8, INF, 0}};

    int i,j,k=0;
    
    
    // for(i=0;i<5;i++){
    //     for(j=0;j<5;j++){
    //         cout<<dist_mat[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    for(k=0;k<5;k++){
        for(i=0;i<5;i++){
            for(j=0;j<5;j++){
                if(dist_mat[i][j]>dist_mat[i][k]+dist_mat[k][j]){
                    dist_mat[i][j]=dist_mat[i][k]+dist_mat[k][j];
                    // cout<<"matrix is changing with this node- "<<k<<"\n";
                }
                
            }
        }
        
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cout<<dist_mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}