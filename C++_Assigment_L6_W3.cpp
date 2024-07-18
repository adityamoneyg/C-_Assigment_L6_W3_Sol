#include <bits/stdc++.h>
using namespace std;
int main() {
while ('1' < '2')
cout << "In while loop" << endl;
}                                       // OutPut is :-  Infinite Times it run

//                   2 Solution

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int t = 10;
while (t /= 2) {
cout << "Hello" << endl;
}
}                                          // Output is Three Times Hello Hello Hello

//                         3 Solution

#include <bits/stdc++.h>
using namespace std;
int main( ) {
for (int x = 1; x * x <= 10; x++)
cout << "In for loop" << endl;
}                                           // Output is Three Times In for loop

//                         4 Solution

#include <bits/stdc++.h>
using namespace std;
int main( ) {
int x = 10, y = 0 ;
while ( x >= y ) {
x-- ;
y++ ;
cout << x << " " << y << endl ;
}
}     
// output is :=                              
// 9 1
// 8 2
// 7 3
// 6 4
// 5 5
// 4 6

//                           5 Solution

#include<iostream>
using namespace std;
int main(){
    int num, sum = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            sum += digit;
        num /= 10;
    }
    cout << "The sum of all the even digits is : " << sum << endl;
}
 
//                           6 Solution

#include<iostream>
using namespace std;
int main(){
    int num, reverse = 0;
    cout << "Enter the number : ";
    cin >> num;
    while (num != 0) {
        reverse = reverse * 10 + num % 10;
        num /= 10;
    }
    int sum = num + reverse;
    cout << "The sum of the given number and its reverse is : " << sum << endl;
}

//                           7 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        cout << factorial <<endl;
    }
    cout << endl;
}

//                           8 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int a = 0, b = 1;
    cout << a << endl;
    cout << b << endl;
    for (int i = 2; i <= n; i++) {
        int c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
    cout << endl;
}

//                           9 Solution

#include<iostream>
using namespace std;
int main(){
    int n;
    for(int i=1; i<=500; i++){
        int temp = i, sum = 0;
        while(temp!=0){
            int digit = temp%10;
            sum += digit*digit*digit;
            temp /= 10;
        }
        if(sum==i){
            cout << i << endl;
        }
    }
    cout << endl;
}
