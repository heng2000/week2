#include<iostream>
using namespace std;
extern void print_summed(int array1[3][3],int array2[3][3]);

int main ()
{
    int array1[3][3] ={0};
    int array2[3][3] ={0};
    for(int i =0;i<3;i++)
    {
        for(int j =0;j<3;j++)
        {
            array1[i][j] =1;
            array2[i][j] =2;
        }
    }
    print_summed(array1,array2);
    return 0;

}