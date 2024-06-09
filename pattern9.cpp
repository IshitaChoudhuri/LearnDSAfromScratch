/*
1
23
345
4567
*/


#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int j,i=1,t;
	while(i<=n)
	{
		j=1;
		t=i;
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
