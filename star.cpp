#include<iostream>
using namespace std;

int main(){
	int r,c,i=1,j;
	cout<<"Enter the number of rows: ";
	cin>>r;
	cout<<"\nEnter the number of columns: ";
	cin>>c;
	while(i<=r)
	{
		j=1;
		while(j<=c)
		{
			cout<<"*";
			j++;
		}
		cout<<"\n";
		i++;
	}
}
