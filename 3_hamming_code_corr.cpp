#include <iostream>
using namespace std;
#include <math.h>

int parity_no(int n){
    int r=0;
    while (pow(2,r) < n+1){
        r++;
    }
    return r;
}

int main(){
    int code[7]={0,1,1,0,1,1,1};
    int n=sizeof(code) / sizeof(code[0]);
    int r=parity_no(n);
    int err[r];
    int err1;

    for(int j=0;j<r;j++){
        int par_pos = pow(2,j);
        int par_value= code[par_pos -1];
        err[j]=0;

        for(int d=1; d<=n; d++){
            if(d & par_pos){
                err[j] = err[j]^code[d-1];
            }
        }
        
        
    } 
    for (int i=r-1;i>=0;i--){
        cout<<err[i]<<" ";
    }
    int sum=0;
    for (int i=r-1;i>=0;i--){
        sum+= (err[i]*pow(2,i));
    }
    cout<<endl<<"error position- "<<sum;
    

}