//------------------------------------------------------->why we use vector
#include <iostream>
using namespace std;

void fun(int aa[], int n){
    for(int i = 0; i<n; i++){
        cout << aa[i] <<endl;
    }
}

int main()
{
    //static mem allocation of array
    // int aa[5] = {1,2,3,4,5};
    // fun(aa, 5);

    //dynamic mem allocation of array
    int n;
    cin>>n;
    int *aa = new int[n]; //each element would be 0, or garbage
    fun(aa, n);
    
    return 0;
}


//but thid type dunamic memory allocation some problem:-
//  1.problem is if we decide array capacity and we allocate elemnet,
// then we not increase the capacity if we want add some extra element they give some error

//so overcume this problem we vector