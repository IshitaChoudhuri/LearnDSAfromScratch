//sum of number from 1 to n

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the range: ";
	cin>>n;
	int i,sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	cout<<"Sum of the numbers: "<<sum<<endl;
}
