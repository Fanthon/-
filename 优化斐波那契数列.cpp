#include <iostream>
using namespace std;

int memo [41];	//�������ڴ洢�������쳲������������У��Ӷ������ظ����� 

int fib(int n)
{
	if(n<=1) return n;
	if(memo[n]!=0) return memo[n];
	return memo[n] = fib(n-1)+fib(n-2);
} 
 
int main()
{
	int n;
	cin>>n;
	cout<<fib(n);
	return 0; 
} 
