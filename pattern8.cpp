/*
1
23
456
78910
*/


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int j,i=1,t=1;
	while(i<=n)
	{
		j=1;
		while(j<=i)
		{
			cout<<t<<" ";
			j++;
			t++;			
		}
		cout<<"\n";
		i++;
	}
}
