#include<iostream>
using namespace std;
int main()
{
	cout<<"Student ID   : S170116\n";
	cout<<"Student Name : B.Laxmanarao\n";
	char *name="Laxmana rao";
	cout<<*&name<<endl;
	cout<<*(&name)<<endl;
	cout<<&(*name);
}
