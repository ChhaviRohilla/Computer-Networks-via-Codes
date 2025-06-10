#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={{0,3,4,8},{1,3,5,8},{0,2,5,8},{1,4,6,9}};
    int t[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i=0;i<4;i++){
        for(int j=0; j<4;j++){
            for(int k=0;k<10;k++){
                if(arr[i][j]==k){
                    t[k]++;
                }
            }
        }
    }
    float hit=0;

    for (int i=0;i<10;i++){
        if(t[i]==1){
            hit++;
        }
    }
    cout<<"hit - "<<hit;
    cout<<"\n";
    cout<<"eff is ";
    cout<< hit/10;



    return 0;
}