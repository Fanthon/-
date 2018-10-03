#include <iostream>
using namespace std;

int memo [41];	//定义用于存储计算出的斐波那契数列数列，从而避免重复计算 

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
