int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);
bool is_palindrome(int integers[], int length);


int sum_array_elements(int integers[], int length)
{
    int len =sizeof(integers)/sizeof(int);
    if (length<=0)
    {
        return -1;
    }
    return len;
}

bool is_palindrome(int integers[], int length)
{
    if (length<=0)
    {
        return false;
    }else{
        if (length%2==0)
        {
            for(int i=0;i<length/2-1;i++)
            {
                if(integers[i]!=integers[length-i])
                {
                    return false;
                }
            }
        }else{
            for(int j =0;j<(length-1)/2;j++)
            {
                if(integers[j]!=integers[length-j])
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
    int sum =0;
    int len =sum_array_elements(integers,length);
    if (is_palindrome(integers,len))
    {
        for(int q= 0;q<length;q++)
        {
            sum +=integers[q];
        }
    }
    return sum;
}