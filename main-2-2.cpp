#include<iostream>
using namespace std;
extern int binary_to_int(int binary_digits[], int number_of_digits);
int main ()
{
    int array[8]={0,0,1,0,1,0,1,0};
    int result =0;
    result =binary_to_int(array,8);
    cout<<result<<endl;
    return 0;
}