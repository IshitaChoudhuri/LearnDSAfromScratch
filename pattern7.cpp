/*
1
22
333
4444
*/


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int j,i=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<i<<" ";
			j++;		}
		cout<<"\n";
		i++;
	}
}
