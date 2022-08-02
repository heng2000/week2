#include<iostream>
using namespace std;
extern int is_identity(int array[10][10]);
int main ()
{
    int array[10][10]={0};
    for(int i =0;i<10;i++)
    {
        for(int j =0;j<10;j++)
        {
            if(i==j)
            {
                array[i][j]=1;
            }else{
                array[i][j] =0;
            }
        }
    }
    int result =2;
    result =is_identity(array);
    if(result ==1)
    {
        cout<<"true"<<result<<endl;
    }else{
        cout<<"false"<<result<<endl;
    }
    return 0;
    
}