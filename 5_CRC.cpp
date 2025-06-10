#include <iostream>
using namespace std;
#include <math.h>

int main(){
    int data[6]={1,0,0,1,0,0};
    int div[4]={1,1,0,1};
    int k= (sizeof(div)/sizeof(div[0]))-1;
    int n= (sizeof(data)/sizeof(data[0]));
    int code[n+k]={0};
    // int r[k]={0};

    
    for(int i=0;i<n;i++){
        code[i]=data[i];
    }

    int start=0;
    int end=k;
    for (int i = 0; i < n; i++) {
        if (code[i] == 1) {  // Only perform division if the current bit is 1
            for (int j = 0; j <= k; j++) {
                code[i + j] ^= div[j];  // XOR the divisor with the current data bit
            }
        }
    }
    cout<<"data bist to be added -> ";
    for (int i = n; i < n + k; i++) {
        cout << code[i] << " "; 
    }
    cout << endl;

    cout<<"code to be shared -> ";
    for (int i = 0; i < n; i++) {
        cout << data[i] << " "; 
    }
    for (int i = n; i < n + k; i++) {
        cout << code[i] << " "; 
    }
    cout << endl;
    

    // for(int i=0;i<k;i++){
    //     cout<<r[i];
    // }

}