#include<iostream>
#include<Cstring>
using namespace std;
class username
{
    private:
        char *c;
        int size;
    public:
        username()
        {
            c=new char;
            *c='0';
        }
        void set(const char *p)
        {
            delete []c;
            try
            {
                size=strlen(p);
                if(size<6)
                    throw "Less Characters";
                for(int i=0;p[i];i++)
                    if(p[i]>='0' && p[i]<='9')
                        throw 2;
                for(int j=0;p[j];j++)
                    if((p[j]>='a' && p[j]<='z') || (p[j]>='A' && p[j]<='Z'))
                        continue;
                    else
                        throw exception();
                c=new char[size+1];
                strcpy(c,p);
            }
            catch(const char *u)
            {
                cout<<"less than 6 character\n";
                exit(0);
            }
            catch(int r)
            {
                cout<<"contains digit\n";
                exit(0);
            }
            catch(...)
            {
                cout<<"contains special character\n";
                exit(0);
            }
        }
        void display()
        {
            cout<<c<<endl;
        }
        ~username()
        {
            delete []c;
        }
};
int main()
{
    username u;
    u.set("dma6anonymous");
    u.display();
    return 0;
}
