#include<iostream>
using namespace std;
int factorialN(int n){
    int fact=1;
    for (int i=1;i<=n;i++){
    fact*=i;}
    return fact;
}
int main(){
    cout <<factorialN(3)<<endl;
    cout <<factorialN(6)<<endl;
}