#include <iostream>
using namespace std;
#include <math.h>

int main(){
    string msg="hello farmer";
    int n= msg.length();
    string stuf="";

    for(int i=0;i<n;i++){
        if( msg[i]=='e'|| msg[i]=='f'){
            stuf+="e";
            stuf+=msg[i];
        }else{
            stuf+=msg[i];
        }
    }

    cout<<stuf;
    string unstuf="";
    for(int i=0;i<stuf.length();i++){
        if((stuf[i]=='e')){    
            // stuf+="e";
            unstuf+=stuf[i+1];
            i++;
        }else{
            unstuf+=stuf[i];
        }
    }
    cout<<endl<<unstuf;
    return 0;
}
