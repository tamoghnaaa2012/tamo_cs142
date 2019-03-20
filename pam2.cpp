//sorry sir actually my basic is not clear that's why i am practicing rucursion and which i am uploading in this repository as this is also my work in this week


#include<iostream>
using namespace std;

int factorial(int n);
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    cout<<"the factorial of the given number is"<<factorial(n);
    return 0;
    }
int factorial(int n){
        if(n>1)
            return (n*factorial(n-1));
            else
                return 1;
        }
