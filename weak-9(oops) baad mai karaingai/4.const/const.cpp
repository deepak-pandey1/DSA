// -->intialization list check on net

//------------------------------------------------------->constant with variable(simple)
// #include <iostream>
// using namespace std;
// int main()
// {
//     const int x = 5;   //x is a constant, intialization can be done. But we cant re-assign a value
//     // x = 10;
//     cout << x<<endl;
//     return 0;
// }


//------------------------------------------------------->constant with pointers
// #include <iostream>
// using namespace std;
// int main()
// {
//     const int *a = new int(2);  //called const data, non-const pointer
//     // int const *a = new int(2);  //same as line no 18
//     cout << *a<<endl;

//     // *a = 20;     //cant change the content of pointer

//     int b = 20;
//     a = &b;  //pointer itself can be reassigne
//     cout<< *a <<endl;
//     return 0;
// }


//------------------------------------------------------->constant pointers, but non-const data
// #include <iostream>
// using namespace std;
// int main()
// {
//     int *const a = new int(2);
//     cout << *a<<endl;

//     *a = 20;     //chl jayaiga
//     cout<< *a<<endl;

//     int b = 50;
//     // a = &b;  //nhi chlaiga bcz const pointer
//     return 0;
// }


//------------------------------------------------------->constant pointers, const data
// #include <iostream>
// using namespace std;
// int main()
// {
//     const int *const a = new int(10);
//     cout << *a<<endl;
    
//     // -->both nhi chalaiga
//     // *a = 50;     //chl jayaiga

//     // int b = 50;
//     // a = &b;  //nhi chlaiga bcz const pointer
//     return 0;
// }