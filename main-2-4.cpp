#include<iostream>
using namespace std;
extern int sum_min_max(int integers[], int length);
int main ()
{
    int array[6] ={1,2,3,4,5,6};
    int result =sum_min_max(array,6);
    cout<<result<<endl;
    return 0;
}