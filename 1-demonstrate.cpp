#include<iostream>
#include<Cstring>
using namespace std;
class demo
{
    private:
        int a;
    public:
        demo() 
        {
            
        }
        demo(int x)
        {
            cout<<"Enter a number:";
            a=x;
        }
        void input()
        {
            cin>>a;
        }
        int get()
        {
            return a;
        }
        void display()
        {
            cout<<"a="<<a<<endl;
        }
        ~demo()
        {

        }
};
int main()
{
    demo a(4);
    a.input();
    try
    {
        if(a.get()==1)
            throw "hoi";
        if(a.get()==0)
            throw a.get();
    }
    catch(const char *r)
    {
        cout<<"String Exception\n";
    }
    catch(int c)
    {
        cout<<"Integer Exception\n";
    }
    catch(...)
    {
        cout<<"unknown error\n";
    }
    a.display();
    return 0;
}