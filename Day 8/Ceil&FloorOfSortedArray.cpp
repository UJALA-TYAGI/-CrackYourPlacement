#include <bits/stdc++.h>
using namespace std;

int ceilSearch(int arr[], int low, int high, int x, int n)
{
    if(n == 0){
        return -1;
      }

     while(low <= high){
        int mid = low + (high - low)/2;
         
        if(x == arr[mid]){
           return mid;
        }
        if( x < arr[mid]){
          high = mid -1;
        }
         
        else{
          low = mid + 1;
        }
      }
      return low;
}

int floorSearch(int arr[], int low, int high, int x, int n)
{
    if(n == 0){
        return -1;
      }

     while(low <= high){
        int mid = low + (high - low)/2;
         
        if(x == arr[mid]){
           return mid;
        }
        if( x < arr[mid]){
          high = mid -1;
        }
         
        else{
          low = mid + 1;
        }
      }
      return high;
}


int main()
{
    int arr[] = {1, 2, 8, 10, 10, 12, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 9;
    int index1 = ceilSearch(arr, 0, n-1, x, n);
    int index2 = floorSearch(arr, 0, n-1, x, n);
    if(index1 == -1)
        cout << "Ceiling of " << x
             << " doesn't exist in array ";
    else
        cout << "ceiling of " << x
             << " is " << arr[index1];
    
    if(index2 == -1)
        cout << "Floor of " << x
             << " doesn't exist in array ";
    else
        cout << "Floor of " << x
             << " is " << arr[index2];
     
    return 0;
}
