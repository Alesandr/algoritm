#include <iostream>
#include <fstream>

#include <string>
#include <cstring>
using namespace std;

int main()
{
	ifstream Read;
	Read.open("D:\\1\\INPUT.txt", ios::in);
	int count=0, n=0, i=0;
	int one[50];
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
		//masiv[i]=str[i];	
		if(str[i]=='1')
			count++;
		else 
		{
			one[n]=count;
			count=0;
			n++;
		}
		
	}

	int max=one[0];
	for(i=0;i<n;i++)
	{
		if (one[i]>max)
			max=one[i];
	}
	
	ofstream Write;
	Write.open("D:\\1\\OUTPUT.txt", ios::out);
	Write<<max;
	system("pause");
	return 0;
}