#include<bits/stdc++.h>
using namespace std;

/*
Problem Statement: Given an integer N, return the number of digits in N.
Example 1:
Input:N = 12345
Output:5
Explanation:  The number 12345 has 5 digits.
                        
Example 2:
Input:N = 7789              
Output: 4
Explanation: The number 7789 has 4 digits.  
*/

int digitcount(int n){
    int temp=n;
    int count=0;
    do{

        temp=temp/10;
        count++;
    }while(temp>0);
    return count;
}
/*
Problem Statement: Given two integers N1 and N2, find their greatest common divisor.
Example 1:
Input: N1 = 9, N2 = 12

Output: 3
Explanation:
Factors of 9: 1, 3, 9
Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3
Greatest common factor: 3 (GCD)

Example 2:
Input: N1 = 20, N2 = 15

Output: 5
Explanation:
Factors of 20: 1, 2, 4, 5, 10, 20
Factors of 15: 1, 3, 5, 15
Common Factors: 1, 5
Greatest common factor: 5 (GCD)
*/
int gcdofnumber(int n1, int n2){
    int maxgcd=0;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            maxgcd=i;
        }
    }
    return maxgcd;
}
/*
Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
Examples
Example 1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
Example 2:
Input:N = 371                
Output: True
Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371
*/
bool armstrong(int n){
    int temp=n;
    int k=to_string(n).length();
    int arm=0;
    while(n>0){
        int digit = n%10;
        arm= arm + pow(digit,k);
        n=n/10;
    }
    return arm==temp;
}
/*
Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.

Examples
Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.
Input: N = 12
Output: [1, 2, 3, 4, 6, 12]
Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.
*/
vector<int> a;
void printdivisors(int n){
    
    for(int i=1;i<=n;i++){
        if(n%i==0){
            a.push_back(i);
        }
    }
}
/*
Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2..

Examples

Example 1:
Input:N = 2
               
Output:True
                
Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).
                                        
Example 2:
Input:N =10                
                
Output: False
                
Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.                          

*/
bool prime(int n){
    if(n<=1) return false;
    for(int i=2;i<n;i++){
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n,n1,n2;
    int choice;
    while(true){
        cout<<"\n1.Digit Count\n2.GCD\n3.Armstrong\n4.Print divisors\n5.Prime Number\n6.Exit\nEnter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:
                    cout<<"Enter the digit: "<<endl;
                    cin>>n;
                    cout<<digitcount(n);
                    break;
            case 2:
                    cout<<"Enter 2 numbers: ";
                    cin>>n1>>n2;
                    cout<<gcdofnumber(n1,n2);
                    break;
            case 3:
                    cout<<"Enter the digit: "<<endl;
                    cin>>n;
                    cout<<boolalpha<<armstrong(n);//boolalpha is used to convert 1->true 0->false
                    break;
            case 4:
                    cout<<"Enter the digit: "<<endl;
                    cin>>n;
                    printdivisors(n);
                    for(int i=0;i<a.size();i++){
                        cout<<a[i]<<" ";
                    }
                    break;
            case 5:
                    cout<<"Enter the digit: "<<endl;
                    cin>>n;
                    cout<<boolalpha<<prime(n);
                    break;
            case 6:exit(0);
            default:cout<<"Invalid Option";
        }
    }
    return 0;
}