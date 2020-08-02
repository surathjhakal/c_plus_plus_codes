#include <iostream>

using namespace std;

int calculator(int num1,int num2){
    cout <<"What type of calculation you have to do,"<<endl;
    string check;
    cout<<"select +,-,/,*:";
    cin>>check;
    if(check=="+"){
        return num1+num2;
    }
    else if (check=="-"){
        return abs(num1-num2);
    }
    else if (check=="/"){
        return num1/num2;
    }
    else if (check=="*"){
        return num1*num2;
    }
    else{
        return false;
    }
}

int main()
{
    int num1,num2;
    cout<<"Enter first number:";
    cin>> num1;
    cout<<"Enter second number:";
    cin>>num2;
    double ans=calculator(num1,num2);
    cout <<"Your calculation answer is: "<<ans<<endl;
}
