#include <iostream>
using namespace std;
#include <math.h>

void find_class_bin(int arr[32]){
    if (arr[0]==0){cout<<"Class A";}else{
        if (arr[1]==0){cout<<"Class B";}else{
            if(arr[2]==0){cout<<"Class C";}else{
                if(arr[3]==0){cout<<"Class D";}else{
                    cout<<"Class E";
                }
            }
        }
    }cout<<endl;  
}
void find_class_dec(int arr[4]){
    cout<<endl;
    if (arr[0]<128){cout<<"Class A";}else{
        if (arr[0]<192){cout<<"Class B";}else{
            if(arr[0]<224){cout<<"Class C";}else{
                if(arr[0]<240){cout<<"Class D";}else{
                    cout<<"Class E";
                }
            }
        }
    }cout<<endl; 
}
void bin_2_dec(int arr[32]){
    int dec[4]={0};
    int start=0;
    int end=8;
    for(int i=0;i<4;i++){
        int sum=0;
        int count=7;
        for (int i=start;i<end;i++){
            sum= sum + (arr[i]* pow(2,count));
            count--;
        }
        dec[i]= sum;
        start= start+8; //0-8 8-16 16-24 24-32
        end= end+8;
    }
    for (int k=0; k<4;k++){
        cout<<dec[k]<<".";
    }
    
}

int main(){
    //already given
    int IP[32]={0,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    //enter by user
    // int ip[32];
    // cout<<"enter 32 bit ip address";
    // for (int i=0; i<32;i++){
    //     cin>>ip[i];
    // }

    find_class_bin(IP);
    bin_2_dec(IP);
    
    int IP_dec[4]= {233,255,255,255};
    find_class_dec(IP_dec);
}