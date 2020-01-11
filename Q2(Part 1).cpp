//Big O is T(n)=O(logn)

#include <iostream>
using namespace std;
  
int binarySearch(int arr[], int size, int key, int low, int high)  
{  
	int mid;  
	if(low <= high)  
	{  
		mid = (low + high)/2;  
		if(arr[mid] == key)  
		{  
			return mid;  
		}  
		else if(key < arr[mid])  
		{  
			return binarySearch(arr, size, key, low, mid-1);  
		}  
		else if(key > arr[mid])  
		{  
			return binarySearch(arr, size, key, mid+1, high);  
		}  
	}  
	else  
	{  
		return -1;  
	}  
}  
bool findElement(int arr[], int size, int key)
{
	int low=0, high=size-1, index;
	index = binarySearch(arr, size, key, low, high); 
	if(index == -1)
	{
		return false;
	}
	else 
	{
		return true;
	}
}
int main()  
{ 
	cout<<"**********IMPLEMENTATION OF BINARY SEARCH THROUGH RECURSION************"<<endl;
	int arr[100], size, key;
	bool ifFound;
	cout<<"Enter size of array: ";  
	cin>>size; 
	cout<<endl;
	cout<<"Enter elements of array in sorted order:\n";  
	for(int i=0;i<size;i++)  
	{  
		cin>>arr[i]; 
	}  
	cout<<"Enter the key element to be searched: "; 
	cout<<endl;
	cin>>key;   
	ifFound = findElement(arr,size,key); 
	if(!ifFound)  
	{  
		cout<<"Element is not found."<<endl;  
	}  
	else  
	{  
		cout<<"Element is found."<<endl;  
	}  
	system("pause");
	return 0;
}  
