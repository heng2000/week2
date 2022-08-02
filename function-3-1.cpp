#include<iostream>
using namespace std;
void capture1 (int*array,int number);
void capture1 (int*array,int number)
{
    for (int i =0;i<number;i++)
    {
        cout<<array[i]<<endl;
    }
}