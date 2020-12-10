#include<bits/stdc++.h>
using namespace std;

bool BinarySearch(int arr[], int left , int right , int x)
{
	while (left <= right )               //terminates when elemenet not present
	{
		int	mid = left + (right - left ) / 2 ;  //Finding the middle index
		if (arr[mid] == x) {                    //Return true if equal
			return true;
		}
		else if (x < arr[mid])
		{
			right = mid - 1;					//Discards the Right side
		}
		else if (x > arr[mid])
		{
			left = mid + 1;						//Discards the Left side
		}
	}
	return false ;					//Here loop is terminated so element is not present so return false

}
int main()
{
	int n;
	cout << "Enter the size of array :";
	cin >> n;							//Taking input size of the array
	int arr[n];
	cout << "Enter the array :";
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];					//Taking input the array
	}
	int x;
	cout << "Enter the element you are searching for :";
	cin >> x;
	sort(arr, arr + n);					//Sorting the array
	bool ans = BinarySearch(arr, 0, n - 1, x);  //Calling the function and passing the array,left,right,searchelement value
	if (ans == false) {
		cout << "The element is not present ";
	}
	else	cout << "Yeah the element is present !";


	return 0;
}

