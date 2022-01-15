
// program to reverse a string.

#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	// your code goes here
/*	cout << fixed << setprecision(10);*/
 
  
 string s = "pratham";
 
 // length of string 
 int n = s.length();
 
 
 // making two pointers start and end to keep track of starting and ending of the string respectively
  
 int start = 0;
 int end = n-1;
  
  
  
 // running while loop till start < end , and swapping first character of string with last.
  
while(start<end){
     swap(s[start] , s[end]);
     start++;
     end--;
 }
 
  
  //printing
 cout<<s<<endl;
 
 

	return 0;
}
