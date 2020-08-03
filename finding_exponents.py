#include <iostream>

using namespace std;

int finding_exponent(int base,int power){

    int result=1;
    for(int i=1;i<=power;i++){
        result*=base;
    }
    return result;
}

int main()
{
    int base,power;
    cout<<"Enter base number:";
    cin>> base;
    cout<<"Enter power number:";
    cin>>power;
    double ans=finding_exponent(base,power);
    cout <<"Your Answer is: "<<ans<<endl;
}
