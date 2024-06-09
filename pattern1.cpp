//111
//222
//333
//444

#include<iostream>
using namespace std;

int main(){
	int n,i=1,j;
	cout<<"Enter the number: ";
	cin>>n;
	while(i<=n)
	{
		j=1;
		while(j<=n)
		{
			cout<<i<<" ";
			j++;
		}
		cout<<"\n";
		i++;
	}
}
