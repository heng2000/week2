#include<iostream>
using namespace std;
extern int sum_if_palindrome(int integers[], int length);

int main ()
{
    int array[3]={1,0,1};
    int result  =0;
    result =sum_if_palindrome(array,3);
    cout<<result<<endl;
    return 0;
}