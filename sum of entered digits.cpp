#include<iostream>
using namespace std;
int main()
{
    int num, rem, sum;
    cout<<"enter the number: ";
    cin>>num;
    for(sum=0; num>0; num=num/10)
    {
    	rem = num%10;
        sum = sum+rem;
    }
    cout<<"\n sum of digits = "<<sum;
    cout<<"\n";
    return 0;
}
