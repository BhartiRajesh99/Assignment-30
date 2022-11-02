#include<iostream>
using namespace std;
class mobile
{
    private:
        long long int n;
        int count=0;
    public:
        mobile()
        {

        }
        void set(long long int);
        void display()
        {
            cout<<n<<endl;
        }
};
void mobile::set(long long int n)
{
    long long int t=n;
    int i;
    try
    {
        for(i=1;t;i++)
        {
            count++;
            t/=10;
        }
        if(count<10)
            throw count;
        this->n=n;
    }
    catch(int s)
    {
        cout<<"Wrong mobile number\n";
        exit(0);
    }
    catch(...)
    {
        cout<<"unknown error\n";
        exit(0);
    }
}
int main()
{
    mobile m;
    m.set(749534476);
    m.display();
    return 0;
}