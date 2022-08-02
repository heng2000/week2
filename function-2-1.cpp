#include<iostream>
using namespace std;

void print_binary_str(std::string decimal_number);
void print_binary_str(std::string decimal_number)
{
    int number =std::stoi(decimal_number);
	int arr[10];
	int i =0;
	int len =0;
	do
	{
		arr[i] =number%2;
		number =number/2;
		i++;
		len++;
	}while(number!=1);
	arr[len] =number;
	len++;
	for(int j =len-1;j>=0;j--)
	{
		cout<<arr[j];
	}
    cout<<endl;
}