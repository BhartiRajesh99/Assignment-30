#include<iostream>
#include<Cstring>
using namespace std;
class email
{
    private:
        char *p;
        int n;
    public:
        email()
        {
            p=new char;
        }
        email(const char *q)
        {
            int i,j=0;
            n=strlen(q);
            p=new char[n+1];
            try
            {
                for(i=0;q[i];i++)
                    if(q[i]=='@')
                        j=q[i];
                if(j==0)
                    throw 0;
                strcpy(p,q);
            }
            catch(int r)
            {
                cout<<"@ not found in initialisation\n";
                exit(0);
            }
            catch(...)
            {
                cout<<"Unknown error in initialisation\n";
                exit(0);
            }
        }
        void setter(const char *p)
        {
            int i,j=0;
            try
            {
                for(i=0;p[i];i++)
                    if(p[i]=='@')
                        j=p[i];
                if(j!=0)
                {
                    delete [](this->p);
                    n=strlen(p);
                    this->p=new char[n+1];
                    strcpy(this->p,p);
                }
                else
                    throw 0;
            }
            catch(int r)
            {
                cout<<"@ not found\n";
                exit(0);
            }
            catch(...)
            {
                cout<<"Unknown error\n";
                exit(0);
            }
        }
        void display()
        {
            cout<<p<<endl;
        }
        ~email()
        {
            delete []p;
        }
};
int main()
{
    email e1("rt");
    e1.setter("raku81453@gmail.com");
    e1.display();
    return 0;
}
