//1111
//222
//33
//4



#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the number: ";
	cin>>n;
	int j,i=1;
	while(i<=n)
	{
		j=n;
		while(j>=i)
		{
			cout<<i<<" ";
			j--;			
		}
		cout<<"\n";
		i++;
	}
}
