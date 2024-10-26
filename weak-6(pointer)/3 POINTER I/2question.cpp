//------------------------------------------------------->1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 100;
//     int *ptr = &a;

//     a = a+1;
//     ptr = ptr+1; //point to next variable  let ptr store 104 then now ptr store 108


//     cout << a << endl;
//     cout << ptr << endl;
//     return 0;
// }


//------------------------------------------------------->1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 100;
//     int *ptr = &a;

//     a = a+1;
//     *ptr = *ptr+1;  //*=>defrence operetar, define value present at address stored in ptr


//     cout << a << endl;
//     cout << *ptr << endl;
//     return 0;
// }


//------------------------------------------------------->1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 100;
//     int *ptr = &a;

//     cout << a << endl;
//     cout << &a << endl;
//     // cout << *a << endl;  //it gives error bcz * is used only for pointer variable
//     cout << ptr << endl;
//     cout << *ptr << endl;
//     cout << &ptr << endl;
//     cout << (*ptr)++ << endl;
//     cout << ++(*ptr) << endl;
//     // cout << *ptr = *ptr/2 << endl;
//     // cout << *ptr = *ptr-2 << endl;
//     return 0;
// }


//------------------------------------------------------->1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *p = &a;
//     int *q = p;   //q point to a bcz q contain a address

//     cout << a << endl;
//     cout << &a << endl;
//     // cout << *a << endl;  //it gives error bcz * is used only for pointer variable
//     cout << p << endl;
//     cout << &p << endl;
//     cout << *p << endl;
//     cout << q << endl;
//     cout << &q << endl;
//     cout << *q << endl;
//     return 0;
// }


//------------------------------------------------------->1
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 50;
//     int *p = &a;
//     int *q = p;   //q point to a bcz q contain a address
//     int *r = q;   //r point to a bcz r contain a address

//     cout << a << endl;
//     cout << p << endl;
//     cout << q << endl;
//     cout << r << endl << endl;

//     cout << &a << endl;
//     cout << &p << endl;
//     cout << &q << endl;
//     cout << &r << endl << endl;

//     // cout << *a << endl;  //it gives error bcz * is used only for pointer variable
//     cout << *p << endl;
//     cout << *q << endl;
//     cout << *r << endl << endl;
//     return 0;
// }