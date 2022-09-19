#include<iostream>
using namespace std;
int main()
{
	int X[10];
	for( int i=0; i<10; i++)
	{
		cout<<"Enter data\n";
		cin>>X[i];
	}
	for( int i=0; i<10; i++)
	{
		cout<<X[i]<<" ";
	}
	
	return 0;
}
