
#include<bits/stdc++.h>
using namespace std;
 

bool LinearSearch(int arr[], int n , int req)
{
 for(int i=0;i<n;i++)
 {
 	if(arr[i]==req)
 	{
 		return true;
 	}
 }
 return false;
}
int main()
{
	 
	int requiredElement,arraySize ;
	cout<< "Enter the element you want to search for : ";
    cin>>requiredElement;
    cout<< "Enter the size of the array : ";
	cin>>arraySize;
     cout<< "Enter the elements : ";
	int array[arraySize];
	for(int i=0;i<arraySize;i++)
	{
		cin>>array[i];
	}
     
     bool res=LinearSearch(array,arraySize,requiredElement);
	 if(res==true)
	 {
	 	cout<<"We have FOUND the number you are searching for !!";
	 }
	 else cout<<"We have NOT FOUND the number you are searching for .";
	 

	return 0;
}

