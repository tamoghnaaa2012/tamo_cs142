#include<iostream>
using namespace std;

int sum(int num);

int main(){
        int num;
        cout<< "enter the number till which you want to sum of natural number";
        cin>>num;
        cout << "the sum is" <<sum(num);
        return 0;
        }
int sum(int num)
{
    if(num!= 0)
        return (num + sum(num-1));
        return 0;
}
