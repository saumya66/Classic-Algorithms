
#include<bits/stdc++.h>
using namespace std;
typedef  long long ll;

void sieveOfEratosthenes()
{
 int n;
 cin>>n;
 std::vector<bool> isPrime  (n+1,true);
 isPrime[0]=false;
 isPrime[1]=false;
 for(int i=2;i<=n;i++)
 {
 	if(isPrime[i] && i*i<=n)
 	{
 		for(int j=i*i;j<=n;j=i+j)
 		{
 			isPrime[j]=false;

 		}
 	}
 }
 for(int i=0;i<=n;i++)
 {
 	if(isPrime[i])cout<<i<<" ";
 }
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	
		sieveOfEratosthenes();
		cout << "\n";
	 

	return 0;
}
