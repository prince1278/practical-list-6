#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;

	ofstream filestream("test.txt");
	if(filestream.is_open())
	{
		filestream<<"Welcome to Dr. Subhash University";
		filestream<<"This is C++ Subject.";
		filestream.close();
	}
	else
	{
		cout<<"File Opening is fail";
	}
	return 0;
	
	
}
