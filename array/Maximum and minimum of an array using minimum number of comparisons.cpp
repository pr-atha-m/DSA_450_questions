//Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
   ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	// your code goes here
/*	cout << fixed << setprecision(10);*/
    
    
    // size of the array 
    int n;
    cin>>n;
    
    
    // taking input of the array
    
    int arr[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    
    int i;
    int max1;
    int min1;
         
    
    // if n is even
    
     if(n%2 == 0){
      
         // comparing first two elements of the array 
         // and assinging greater element to max1 and smaller element to min1.
         
         
         if(arr[0]>arr[1]){
             max1 = arr[0];
             min1 = arr[1];
         }
         
         else{
             max1 = arr[1];
             min1 = arr[0];
         }
         
        // setting i
        
        i = 2;
         
         
         
     }
     
     // if n is odd
     else{
         // assigning first element of the array to both max1 and min1
         max1 = arr[0];
         min1 = arr[0];
         
         // setting i
         
         i = 1;
         
     }
    
    
    // now we will take elements from array in pairs
    // we will compare max1 with greater element of the pair and smaller with min1
    
    while(i<n){
        
        if(arr[i]>arr[i+1]){
            max1 = max(max1 , arr[i]);
            min1 = min(min1 , arr[i+1]);
            
        }
        else{
            max1 = max(max1 , arr[i+1]);
            min1 = min(min1 , arr[i]);
            
        }
        
        
        // incrementing i with 2
        i+=2;
        
        
        
        
    }
    
    
    // printing max1 and min1
    
    cout<<max1<<" "<<min1<<endl;
    




	return 0;
}
