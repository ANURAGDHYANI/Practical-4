#include<iostream>
using namespace std;
namespace std1
{
	int sum(int a,int b)
	{
		return(a+b);
	}
}

namespace std2
{
	float sum(float a,float b)
	{
		return(a+b);
	}
}

using namespace std1;
using namespace std2;
int main()
{	
	cout<<"Sum of 2 and 3 is "<<sum(2,3)<<"\n";
	cout<<"Sum is 2.1 and 3.2 is "<<sum(2.1,3.2)<<"\n";
	cout<<"Sum of 2 and 3.2 is "<<sum(2,3.2)<<"\n";
}

