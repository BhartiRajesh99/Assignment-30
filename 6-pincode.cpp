#include<iostream>
using namespace std;
class pincode
{
    private:
        int code,i;
    public:
        pincode() { }
        void setPincode(int y)
        {
            int n=y,count=0;
            try
            {
                for(i=1;n;i++)
                {
                    count++;
                    n/=10;
                }
                if(count!=6)
                    throw count;
                code=y;
            }
            catch(int c)
            {
                cout<<"Wrong Pincode.\n";
                exit(0);
            }
            catch(...)
            {
                cout<<"Unknown Error.\n";
                exit(0);
            }
        }
        void display()
        {
            cout<<"code="<<code<<endl;
        }
};
int main()
{
    pincode p;
    p.setPincode(135002);
    p.display();
    return 0;
}