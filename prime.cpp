#include<iostream>
using namespace std;
int main(){
    int num;
    bool isprime=true;

    cout<<"enter a number:";
    cin>>num;
    if(num<=1){
        isprime=false;
    } else {
        for(int i=2; i<num; i++){
            if(num%i==0){
                isprime=false;
                break;
            }
        }
    }
    if(isprime){
        cout<<num <<" is a prime number"<<"\n";
    }else{
        cout<<num <<" is not a prime number"<<"\n";
    }

    return 0;
}
