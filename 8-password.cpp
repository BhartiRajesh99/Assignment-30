#include<iostream>
#include<Cstring>
using namespace std;
class password
{
    private:
        char *c;
        int size;
    public:
       password()
        {
            c=new char;
            *c='0';
        }
        void set(const char *p)
        {
            int flag=0;
            delete []c;
            try
            {
                size=strlen(p);
                if(size<6)
                    throw "Less Characters";
                for(int i=0;p[i];i++)
                    if(p[i]>='0' && p[i]<='9')
                    {
                        flag=1;
                        break;
                    }
                if(flag==0)
                    throw 2;
                flag=0;
                 for(int j=0;p[j];j++)
                    if(p[j]>='A' && p[j]<='Z')
                    {
                        flag=1;
                        break;
                    }
                if(flag==0)
                    throw 3.9f;
                flag=0;
                for(int j=0;p[j];j++)
                    if((p[j]>='0' && p[j]<='9') || (p[j]>='a' && p[j]<='z') || (p[j]>='A' && p[j]<='Z'))
                        continue;
                    else 
                        flag=1;
                if(flag==0) 
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
                cout<<"doesn't contain digit\n";
                exit(0);
            }
            catch(float f)
            {
                cout<<"doesn't contain capital letter\n";
                exit(0);
            }
            catch(...)
            {
                cout<<"doesn't contain special character\n";
                exit(0);
            }
        }
        void display()
        {
            cout<<c<<endl;
        }
        ~password()
        {
            delete []c;
        }
};
int main()
{
    password u;
    u.set("dmA1@anonymous");
    u.display();
    return 0;
}