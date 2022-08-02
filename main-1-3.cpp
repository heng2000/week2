#include<iostream>
#include<ctime>
using namespace std;
extern void count_digits(int array[4][4]);

int main ()
{
    int array[4][4] ={0};
    srand(time(0));
    for(int i =0;i<4;i++)
    {
        for(int j =0;j<4;j++)
        {
            array[i][j] =1;
        }
    }
    count_digits(array);
    return 0;
}