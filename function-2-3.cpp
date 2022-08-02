int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);
bool is_palindrome(int integers[], int length);


int sum_array_elements(int integers[], int length)
{
    int sum =0;
    if (length<=0)
    {
        return false;
    }
    for(int q= 0;q<length;q++)
    {
        sum +=integers[q];
    }
    return sum;
}

bool is_palindrome(int integers[], int length)
{
    if (length<=0)
    {
        return false;
    }else{
        if (length%2==0)
        {
            for(int i=0;i<(length/2)-1;i++)
            {
                if(integers[i]!=integers[length-i-1])
                {
                    return false;
                }
            }
        }else{
            for(int j =0;j<(length-1)/2;j++)
            {
                if(integers[j]!=integers[length-j-1])
                {
                    return false;
                }
            }
        }
    }
    return true;
}
int sum_if_palindrome(int integers[], int length)
{
    int result =sum_array_elements(integers,length);
    bool test_value =is_palindrome(integers,length);
    if (test_value)
    {
        return result;
    }else{
        return -2;
    }
}