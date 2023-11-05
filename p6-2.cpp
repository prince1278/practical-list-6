#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	string srg;
	ifstream filestream("test.txt");
	if(filestream.is_open())
	{
		while(getline(filestream,srg))
		{
			cout<<srg<<endl;
		}
		filestream.close();
	}
	else
	{
		cout<<"File opening is fail"<<endl;
	}
	return 0;
}
