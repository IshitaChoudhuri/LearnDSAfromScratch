#include<iostream>
using namespace std;

//ADULT
int main(){
	int age;
	cout<<"Enter your age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"You're an adult"<<endl;
	}
	else
	{
		cout<<"You're not an adult"<<endl;
	}
}


//GRADE
int main() {
	int marks;
	cout<<"Enter your marks: ";
    cin>>marks;
    if (marks < 25) {
        cout << "Grade: F" << endl;
    } else if (marks >= 25 && marks <= 44) {
        cout << "Grade: E" << endl;
    } else if (marks >= 45 && marks <= 49) {
        cout << "Grade: D" << endl;
    } else if (marks >= 50 && marks <= 59) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60 && marks <= 69) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70 && marks <=100) {
        cout << "Grade: A" << endl;
    } else {
        cout << "Invalid marks entered." << endl;
    }

    return 0;
}


//Range of numbers from 1-n
int main(){
	int n;
	cout<<"Enter the range (1-n) n: "
	cin>>n;
	int i=1;
	while(i<=5){
		cout<<i<<endl;
		i++;
	}
}



//Sum of all numbers from 1 to n
int main(){
	cout<<"Enter the range: "<<endl;
	int n;
	cin>>n;
	int sum=0;
	int i=1;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"Sum of the numbers is "<<sum<<endl;
}



//Factorial of a number
int main(){
	cout<<"Enter the number: "<<endl;
	int n;
	cin>>n;
	int f=1;
	int i=1;
	while(i<=n){
		f=f*i;
		i++;
	}
	cout<<"Factorial of the number is "<<f<<endl;
}
