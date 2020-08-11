#include <iostream>

using namespace std;

string convert_into_binary(int num)
{
    string bin="";
    while(num>0)
    {
        bin=to_string(num%2)+bin;
        num=num/2;
    }
    return bin;
}

int main()
{
    int num;
    cout<<"Enter a number to which you have to convert into binary:";
    cin>>num;
    cout<<"the binary form of "<<num<<" is "<<convert_into_binary(num);
    return 0;
}
