// //------------------------------------------------------->pointer with array
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {10,20,30,40,50};

//     cout << arr <<endl;        //print base addres means print 1 index address
//     cout << &arr <<endl;       //print base addres means print 1 index address
//     cout << &arr[0] <<endl;    //print base addres means print 1 index address
//     cout << arr[0] <<endl;
//     return 0;
// }


//------------------------------------------------------->pointer with array of size
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {10,20,30,40,50};
//     int *p = arr;

//     cout << sizeof(arr) <<endl;
//     cout << sizeof(p) <<endl;  ..depend on 32 & 64 bit system
//     return 0;
// }


//------------------------------------------------------->1 question
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {10,20,30,40,50};

//     cout << arr <<endl;
//     cout << &arr <<endl;
//     cout << arr[0] <<endl;
//     cout << &arr[0] <<endl;
//     cout << *arr <<endl;
//     cout << *arr+1 <<endl;
//     cout << *(arr)+1 <<endl;
//     cout << *(arr+1) <<endl;
//     cout << *(arr+2) <<endl;
//     cout << *(arr+3) <<endl;

//     //----->for understanding
//     //&(arr+0) = arr[0]
//     //&(arr+1) = arr[1]
//     //&(arr+2) = arr[2]

//     //&(arr+i) = arr[i]
//     //&(i+arr) = i[arr]  //right
//     return 0;
// }


//------------------------------------------------------->2 question
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[4] = {10,20,30,40};
//     int *p = arr;
//     int *q = arr+1;

//     cout << arr <<endl;
//     cout << &arr <<endl;
//     cout << arr[0] <<endl;
//     cout << &arr[0] <<endl <<endl;

//     cout << p <<endl;
//     cout << &p <<endl;
//     cout << *p <<endl <<endl;

//     cout << q <<endl;
//     cout << &q <<endl;
//     cout << *q <<endl <<endl;

//     cout << *p+1 <<endl;
//     cout << *(p)+2 <<endl;
//     cout << *(q)+2 <<endl;
//     cout << *(q+4) <<endl;
//     return 0;
// }


//------------------------------------------------------->for understand only
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     arr = arr + 1;  //if we do then index 1 element is dead or finished so compiler dont permit this syntax
//     arr = arr is a constant pointer
//     return 0;
// }