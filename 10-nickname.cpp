#include<iostream>
#include<Cstring>
using namespace std;
class nickname
{
    private:
        char *n;
        int size;
    public:
        nickname()
        {
            n=new char;
        }
        void set(const char *c)
        {
            int flag=0;
            delete []n;
            try
            {
                size=strlen(c);
                if(size>8)
                    throw "more";
                for(int i=0;c[i];i++)
                    if(c[i]>='0' && c[i]<='9')
                        throw 4;
                    else if(c[i]==' ')
                        throw 4.2f;
                    else if((c[i]>='a' && c[i]<='z') || (c[i]>='A' && c[i]<='Z'))
                        continue;
                    else
                        throw exception();
                n=new char[size+1];
                strcpy(n,c);
            }
            catch(const char *p)
            {
                cout<<"More than 8 characters\n";
            }
            catch(int y)
            {
                cout<<"does contain digit\n";
            }
            catch(float h)
            {
                cout<<"does contain space\n";
            }
            catch(...)
            {
                cout<<"contain spacial character\n";
            }
        }
        void display()
        {
            cout<<n<<endl;
        }
        ~nickname()
        {
            delete []n;
        }
};
int main()
{
    nickname n1;
    n1.set("raj@k");
    n1.display();
    return 0;
}