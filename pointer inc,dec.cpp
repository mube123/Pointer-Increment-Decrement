#include<iostream>
using namespace std;
int main()
{
	
	int a=20;
	int *p=&a;
	cout<<"value of pointer: "<<*p<<endl;
	cout<<"Increment= "<<++(*p)<<endl;
	cout<<"Decrement= "<<--(*p)<<endl;
}
