#include<iostream>
using namespace std;
extern void print_scaled(int array[3][3],int scale);

int main ()
{
    int array[3][3] ={0};
    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            array[i][j] =1;
        }
    }
    print_scaled(array,100);
    return 0;

}