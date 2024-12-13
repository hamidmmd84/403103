#include<iostream>
using namespace std;

int inversenumber(int number){
    int inversenumber = 0;

    while( number != 0){
        inversenumber = inversenumber * 10 + number%10;
        number /= 10;
    }
    return inversenumber;
}

int main(){
    int num;
    cout<<"enter a number:";
    cin>>num;

    cout<<"inverse number: "<< inversenumber(num)<<endl;

return 0;
}
