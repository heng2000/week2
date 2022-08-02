#include<iostream>
#include<ctime>
using namespace std;
extern void capture1 (int*array,int number);
int main ()
{
    srand(time(0));
    int array[10];
    for (int i =0;i<10;i++)
    {
        array[i] =rand()%100;
    }
    capture1(array,10);
    return 0;
}