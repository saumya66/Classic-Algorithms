
#include<bits/stdc++.h>
using namespace std;

vector<int> creatingDifferenceArray(vector<int>& A) //Called once at start to create and return the Difference array
{
 int n= A.size();
 std::vector<int> D(n+1);
 D[0]=A[0];
 for(int i=1;i<n;i++)
 {
 	D[i]= A[i]-A[i-1];
 }
 return D;
}

void update(std::vector<int>& D, int l ,int r, int x) //Called for each query
{
	D[l]= D[l]+x;          
	D[r+1]= D[r+1]-x;
}

void printArray(vector<int>& A,vector<int>& D)//Called to print the updated array 
{
	 
	for (int i = 0; i < A.size(); ++i)
	{
		if(i==0)
			A[0]= D[0];
		else A[i]= A[i-1]+D[i];
		cout<<A[i]<<" ";
	}
	cout<<endl;

}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<int> A{ 10, 5, 20, 40 }; // The original array 
    vector<int> D = creatingDifferenceArray(A);  
    update(D, 2, 4 , 5);  // The array must become {10,5,25,45} 
    printArray(A, D); 
    update(D, 1, 3, 20);  //The array must become {10,25,45,65} 
    update(D, 2, 2, 30);  //The array must become {10,25,75,65}   
    printArray(A, D); 

	return 0;
}
