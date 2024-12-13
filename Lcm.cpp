#include<iostream>
using namespace std;

int gcd(int a,int b){
    return (b==0) ? a : gcd(b,a%b);
}


int lcm(int a,int b){
    return (a * b) / gcd(a,b);
}


int main(){
    int num1,num2;
    cout<<"enter two numbers: ";
    cin>>num1>>num2;

    int result= lcm(num1,num2);
    cout<<"LCM of"<<" "<<num1<<" and"<<" "<< num2<<" is"<<" "<< result<<endl;


return 0;

}
