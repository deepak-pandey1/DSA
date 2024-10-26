//------------------------------------------------------->no pyramid
#include <iostream>
using namespace std;
int x = 4;   //global variables

void fun(){
    int x = 60;
    cout<<x<<endl;
    ::x = 40;
    cout<<::x<<endl;
}
int main()
{
    x = 4;    //modify global variablesa
    ::x = 4;    //if we access global variable in local so used:: this syntax
    int x = 20;
    cout << x <<endl;   //most prefence di jati hai local variable ko or jo sbsai near hoga wo print hoga

    //if we want access global variable in local scope so,
    cout<< ::x<<endl;

    {
        int x = 50;
        cout << x <<endl;
        cout << ::x <<endl;
    }
    fun();
    return 0;
}