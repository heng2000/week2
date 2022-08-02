int is_identity(int array[10][10]);
int is_identity(int array[10][10])
{
    int returned_value =0;
    int returned_value2 =1;
    for (int i =0;i<10;i++)
    {
        for(int j =0;j<10;j++)
        {
            if (i==j)
            {
                if(array[i][j]!=1)
                {
                    return returned_value;
                }
            }else{
                if(array[i][j]!=0)
                {
                    return returned_value;
                }
            }
        }

    }
    return returned_value2;
}