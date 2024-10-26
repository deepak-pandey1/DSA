//------------------------------------------------------->call by refrence
#include <iostream>
using namespace std;

void increamentally(int &n){
    n = n+1;
}

int main()
{
    int n;
    cin>>n;
    increamentally(n);
    cout << "the value of n "<<n<<endl;;
    return 0;
}