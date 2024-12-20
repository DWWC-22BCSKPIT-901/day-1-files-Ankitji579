/* 
Ques 1. Calculate the sum of all natural numbers from 1 to n, where n is a
positive integer. Use the formula:
Sum=n×(n+1)/2.
Take n as input and output the sum of natural numbers from 1 to n.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int a;
cin>>a;
cout<<"Sum of n natural number: ";
cout<< a*(a+1)/2<<endl;
return 0;
}
