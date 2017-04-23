//
//  main.cpp
//  Fibonacci
//
//  Created by 刘子轩 on 2017/4/23.
//  Copyright © 2017年 刘子轩. All rights reserved.
//


#include <iostream>
using namespace std;
int fib(int n);
int main()
{
    int i;
    for(i=1;i<=12;i++)
        cout<<fib(i)<<'\t';
    cout<<endl;
    return 0;
}
int fib(int n)
{
    if (n==1||n==2)
        return 1;
    else return fib(n-1)+fib(n-2);
}

