/*
Ques 2. Print all odd numbers between 1 and n, inclusive. Odd numbers are
integers that are not divisible by 2. These numbers should be printed in
ascending order, separated by spaces.
This problem is a simple introduction to loops and conditional checks. The
goal is to use a loop to iterate over the numbers and check if they are odd
using the condition i%2≠0.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
int n;
cout << "Enter a positive integer n: ";
cin >> n;
if (n > 0) {
cout << "Odd numbers between 1 and " << n << " are: ";
for (int i = 1; i <= n; i += 2) {
cout << i << " ";
}
} else {
cout << endl;
cout << "Please enter a positive integer." << endl;
}
return 0;
}
