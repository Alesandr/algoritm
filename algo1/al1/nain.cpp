#include <iostream>
#include <fstream>

#include <string>
#include <cstring>
using namespace std;

int main()
{
	ifstream Read;
	Read.open("D:\\1\\INPUT.txt", ios::in);
	int quantityofsymbol=0, count=0, n=0, i=0;
	
	cout<<"Enter the quantity of symbol '1' that you want to find"<<endl;
	cin>>quantityofsymbol;

	string str;
	
	if (Read)
		{
			while (!Read.eof())
			{
				Read>>str;
			}
						Read.close();

			if (str.length()>100) 
				{
					cout<<"file has more than 100 symbols"<<endl;
					system("pause");
					exit(1);
				}
			
		}
	else cout<<"no file"<<endl;
	
	
	for(i=0;i<str.length();i++)
	{
		if(str[i]=='1')
			count++;
		else 
		{
			if (count==quantityofsymbol)
			{
				ofstream Write;
				Write.open("D:\\1\\OUTPUT.txt", ios::out);
				Write<<quantityofsymbol;
				system("pause");
				exit(1);
			
			}
			
			
			count=0;
			
		}
		
	}

	
	
	
	
	system("pause");
	return 0;
}