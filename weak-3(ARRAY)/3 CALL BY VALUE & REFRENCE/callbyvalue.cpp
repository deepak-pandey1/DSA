//------------------------------------------------------->call by value
// #include <iostream>
// using namespace std;

// int increamentally(int n){
//     n = n+1;
//     return n;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     n = increamentally(n);
//     cout << "the value of n "<<n<<endl;;
//     return 0;
// }


//------------------------------------------------------->call by value[show both n respective to function is diffrent]
#include <iostream>
using namespace std;

int increamentally(int n){
    n = n+1;
}

int main()
{
    int n;
    cin>>n;
    n = increamentally(n);
    cout << "the value of n "<<n<<endl;;
    return 0;
}