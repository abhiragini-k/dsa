#include<bits/stdc++.h>
using namespace std;

/*
Problem Description: Given an integer N, write a program to print your name N times.

Examples
Input: N = 3
Output: Ashish Ashish Ashish 
Explanation: Name is printed 3 times.
Input: N = 1
Output: Ashish 
Explanation: Name is printed once.
*/
void printname(int n, char name[]){
    if(n==0) return;
    cout<<name<<endl;
    printname(n-1,name);
}
/*
Problem Description: Given an integer N, write a program to print numbers from 1 to N.

Examples
Input: N = 4
Output: 1, 2, 3, 4
Explanation: All the numbers from 1 to 4 are printed.
Input: N = 1
Output: 1 
Explanation: This is the base case.
*/
void printnumber(int n,int current){
    if(n<current) return;
    cout<<current<<" ";
    printnumber(n,current+1);
}
/*
Problem Description: Given an integer N, write a program to print numbers from N to 1.

Examples
Input: N = 4
Output: 4, 3, 2, 1
Explanation: All the numbers from 4 to 1 are printed.
Input: N = 1
Output: 1 
Explanation: This is the base case.
*/

void printnumberreverse(int n){
    if(n==0) return;
    cout<<n<<" ";
    printnumberreverse(n-1);
}
/*
Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

Examples
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15
*/
int sumofnaturalnumbers(int n){
    if(n==1) return 1;
    return n+sumofnaturalnumbers(n-1);
}
/*
Problem Statement: Given a number X,  print its factorial.

To obtain the factorial of a number, it has to be multiplied by all the whole numbers preceding it. More precisely X! = X*(X-1)*(X-2) … 1.

Note: X  is always a positive number. 

Examples
Example 1:
Input:
 X = 5
Output:
 120
Explanation:
 5! = 5*4*3*2*1

Example 2:
Input:
 X = 3
Output:
 6
Explanation:
 3!=3*2*1
*/
int factorial(int n){
    if(n==0||n==1) return 1;
    return n*factorial(n-1);
}
/*
Problem Statement: You are given an array. The task is to reverse the array and print it.

Examples
Input: N = 5, arr[] = {5,4,3,2,1}
Output: {1,2,3,4,5}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.

Input: N=6 arr[] = {10,20,30,40}
Output: {40,30,20,10}
Explanation: Since the order of elements gets reversed the first element will occupy the fifth position, the second element occupies the fourth position and so on.
*/
vector<int> reversearray(vector<int>& arr,int n){
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        ans[i]=arr[n-1-i];
    }
    return ans;
}
int main(){
    int choice,n;
    /*char name[10];
    cout<<"Enter value of n";
    cin>>n;
    cout<<"Enter name";
    cin>>name;
    printname(n,name);
    cout<<"Enter value of n";
    cin>>n;
    printnumber(n,1);
    cout<<"Enter value of n";
    cin>>n;
    printnumberreverse(n);
    cout<<"Enter value of n";
    cin>>n;
    cout<<"Sum="<<sumofnaturalnumbers(n);
    cout<<"Enter value of n";
    cin>>n;
    cout<<factorial(n);*/

    
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout<<"Enter array ele";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    char s[5]="Cat";
    s.to_lowercase();
    vector<int> ans=reversearray(arr,n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}