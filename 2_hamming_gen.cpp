#include <iostream>
using namespace std;
#include <math.h>

int parity_no(int m){
    int r=0;
    while (pow(2,r) < m+r+1){
        r++;
    }
    return r;
}
int main(){
    int m = 4;
    int msg[4] = {1,0,1,1};
    int r = parity_no(m);

    int code[m+r]={0};
    int m_pointer=0;
    int r_pointer=0;
    for (int i=1;i<=(m+r);i++){
        if(i==pow(2,r_pointer)){
            code[i-1]=0; 
            r_pointer++;

        }else{
            code[i-1]=msg[m_pointer];
            m_pointer++;
        }
    }

    for(int j=0;j<r;j++){
        int par_pos = pow(2,j);
        int par_value=0;
        
        for(int d=1; d<=(m+r); d++){
            if(d & par_pos){
                par_value = par_value^code[d-1]; 
            }
        }
        code[par_pos-1]= par_value;
    } 

    for (int i=0;i<(m+r);i++){
        cout<<code[i]<<" ";
    }

    return 0;
}