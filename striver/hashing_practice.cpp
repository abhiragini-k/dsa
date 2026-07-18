/*
Find the highest/lowest frequency element


24

Problem Statement: Problem Statement: Given an array of size N. Find the highest and lowest frequency element.

Examples
Example 1:
Input: array[] = {10,5,10,15,10,5};
Output: 10 15
Explanation: The frequency of 10 is 3, i.e. the highest and the frequency of 15 is 1 i.e. the lowest.


Example 2:
Input: array[] = {2,2,3,4,4,2};
Output: 2 3
Explanation: The frequency of 2 is 3, i.e. the highest and the frequency of 3 is 1 i.e. the lowest.
*/

#include<bits/stdc++.h>
using namespace std;



int main(){
     int n;
    cout<<"Enter no of elements in the array :";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    int max=-1,min=INT_MAX;
    int maxele,minele;
    for(auto it:mpp){
        if(it.second>max){
            max=it.second;
            maxele=it.first;
        }
        if(it.second<min){
            min=it.second;
            minele=it.first;
        }
    }
    cout<<"maxele="<<maxele<<" minele="<<minele;
    return 0;

}