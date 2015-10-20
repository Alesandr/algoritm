#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
	int n;
	
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	cout <<"Dilivers of "<<n<<"are "<< endl;
	cout<<"1"<<endl;
	for(int i=2;i<n/2+1;i++)
	{
		
		if (n%i==0)
		{
			cout<<i<<endl;
		}
		
	}
	cout<<n<<endl;
	
	
	
	system("pause");
	return 0;
}