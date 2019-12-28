#include <iostream>
using namespace std;
class Box
{
private:
int size;
public:

friend int printsize(Box); //friend function
};
int printsize(Box b)
{
return b.size = 10;
}
int main()
{
Box b;
cout<<"size of box: "<< printsize(b)<<endl;
return 0;
}
