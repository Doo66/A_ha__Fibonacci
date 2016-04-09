/*************************************************************************
	> File Name: Fib.cpp
	> Author:    xjf
	> Mail:      doo_magic@126.com
	> Created Time: 2016年04月09日 星期六 05时00分17秒
 ************************************************************************/

#include<iostream>
using namespace std;

unsigned long long  Fib(size_t n)
{
	if(n<2)
		return n;
	return Fib(n-1)+Fib(n-2);
}

int main()
{
	cout<<Fib(10)<<endl;
	return 0;
}
