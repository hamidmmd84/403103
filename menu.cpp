#include<iostream>
using namespace std;
int main(){
    int choice;
    int num1,num2;

    while(true){
        cout<<"menu:\n";
        cout<<"1. add two numbers\n";
        cout<<"2. subtract two numbers\n";
        cout<<"3. multiply two numbers\n";
        cout<<"4. divide two numbers\n";
        cout<<"5. exit\n";

        cout<<"enter your choice (1-5): ";
        cin>>choice;

        if (choice==5){
            cout<<"exiting the program\n";
            break;
        }

        cout<<"enter two numbers:\n";
        cin>>num1>>num2;

        for(int i=1; i<=1; i++){
            if (choice==1){
                cout<<"result: "<<num1+num2;
            }else if (choice==2){
                cout<<"result: "<<num1-num2;
            }else if (choice==3){
                cout<<"result: "<<num1*num2;
            }else if (choice==4){
                if (num2 !=0){
                    cout<<"result: "<<num1/num2;
                }else{
                    cout<<"error";
                    }

                }

            }
    return 0;
}
}
