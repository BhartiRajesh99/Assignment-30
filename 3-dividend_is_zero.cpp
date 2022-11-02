#include<iostream>
using namespace std;
int main()
{
    int a,b;
    float result;
    char operation;
    cout<<"Arithmetic operation\n";
    cout<<"Enter first Number:";
    cin>>a;
    cout<<"Enter operation:";
    try
    {
        cin>>operation;
        if(operation!='+' && operation!='-'  && operation!='*' && operation!='/')
            throw operation;
    }
    catch(char c)
    {
        cout<<"Invalid Operator\n";
        return 0;
    }
    catch(...)
    {
        cout<<"Something unknown error\n";
        return 0;
    }
    cout<<"Enter second number:";
    cin>>b;
    switch(operation)
    {
        case '+':
            result=a+b;
            cout<<"result="<<result<<endl;
            break;
        case '-':
            result=a-b;
            cout<<"result="<<result<<endl;
            break;
        case '*':
            result=a*b;
            cout<<"result="<<result<<endl;
            break;
        case '/':
            try
            {
                result=a/(float)b;
                if(b==0)
                    throw result;
            }
            catch(float h)
            {
                cout<<"Divide by zero error\n";
                return 0;
            }
            catch(...)
            {
                cout<<"Something unknown error\n";
                return 0;
            }
            cout<<"result="<<result<<endl;
    }
    return 0;
}