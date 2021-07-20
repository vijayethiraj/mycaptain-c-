#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int age;
	cout<<"Please Enter your age:";
	cin>>age;
	if(age>=18)
	{
	cout<<"\n Congratulations! You are eligible to vote:";
	}
	else 
	{
	cout<<"\n Sorry! You did't meet the eligible criteria, so you are not allowed to vote";
	cout<<"\n You should wait for "<<18-age<<" more year(s)";
	}
	return 0;
}
