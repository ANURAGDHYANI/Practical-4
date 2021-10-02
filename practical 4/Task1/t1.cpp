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
int main()
{	
	cout<<"Sum of 5 and 10 is "<<std1::sum(5,10)<<"\n";
	cout<<"Sum is 4.1 and 2.7 is "<<std2::sum(4.1,2.7)<<"\n";
	cout<<"Sum of 3 and 5.6 is "<<std2::sum(3,5.6)<<"\n";
}
