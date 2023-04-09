#include <iostream>
using namespace std;

int main()
{
    int p;
    cin>>p;
    for (int i = 1; i <= p; i++)
    {
        cout << i <<endl;
        if((i%2) == 0)
        {
            cout<<"even"<<endl;
        }
         else if((i%2) != 0)
        {
            cout<<"odd"<<endl;
        }
        else
        {
            cout<<"No Print"<<endl;
        }

    }

    for (int i = 5; i <= p; i++)
    {
        cout<<"test"<<endl;
    }

    return 0;
}
