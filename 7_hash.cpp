#include <iostream>
using namespace std;
#include <math.h>

int hash_fn(string user, string pass){
    int hash=0;
    for (int i=0;i<user.length();i++){
        hash=hash*31 + user[i] +pass[i];
    }
    return hash;
}

int main(){
    string user_name;
    string pass_hash;

    cout<<"ENTER USERNAME"<<"- ";
    cin>>user_name;
    cout<<"ENTER PASSWORD"<<"- ";
    cin>>pass_hash;
    int hash=hash_fn(user_name,pass_hash);
    cout<<hash<<endl;

    cout<<"ENTER USERNAME"<<"- ";
    cin>>user_name;
    cout<<"ENTER PASSWORD"<<"- ";
    cin>>pass_hash;
    int hash_digest=hash_fn(user_name,pass_hash);

    if(hash==hash_digest){
        cout<<"USER IS VALID";
    }else{
        cout<<"INVALID USER";
    }

}