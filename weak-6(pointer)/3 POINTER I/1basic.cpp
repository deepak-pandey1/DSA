//POINTER=>pointer is a variable for store only address
//cout << *q << endl=>it contain 2 process, first is what add contain then what value stored this address

//------------------------------------------------------->basic of pointer
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;

//     cout << a << endl;
//     cout << "address of a : "<< &a << endl;     //hexadecimal value of address
    
  
//     //pointer creation
//     int* ptr = &a;     //*int =>pointer to integer data/ptr=>variable name
    
//     cout << ptr << endl;
//     cout << "Accessing: " << *ptr << endl;         //acessing value stored at address stored in ptr
//     cout << &ptr << endl;
//     return 0;
// }


//------------------------------------------------------->bad prectis gives runtime error
// #include <iostream>
// using namespace std;
// int main()
// {
//     int* ptr = 0;  //nul this is better than int ptr; bcz we intialize nul value
//     int* ptr = null;
//     int* ptr = nullptr;
//     cout << *ptr << endl;
//     return 0;
// }


//------------------------------------------------------->understanding of 32 & 64 bit system
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a = 5;
//     int *ptr = &a;
//     cout << sizeof(ptr)<<endl;

//     char ch = 'k';
//     char *ptrs = &ch;
//     cout << sizeof(ptrs)<<endl;

//     long elaichi = 10;
//     long *ptrss = &elaichi;
//     cout << sizeof(ptrss)<<endl;
// }