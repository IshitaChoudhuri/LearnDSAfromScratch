/*
1234
1234
1234
1234
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
		while(j<=n)
		{
			cout<<j<<" ";
			j++;			
		}
		cout<<"\n";
		i++;
	}
}
