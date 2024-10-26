//------------------------------------------------------->doubt
// #include <iostream>
// using namespace std;
// int main()
// {
// 	// char ch[10] = "Babbar";
// 	// char* cptr = &ch;      //=?it gives error bcz &ch means contain whole addres of an array
//     return 0;
// }


//------------------------------------------------------->pointer to an array
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int arr[5] = {1,2,3,4,5};

// 	//pointer to an array
// 	int* ptr1 = arr;
// 	//pointer to an array
// 	int (*ptr)[5] = &arr;  //point to whole array <int*pte = a;> this mean pointer to an ineger
// 	cout << (*ptr)[0];
//     return 0;
// }


//------------------------------------------------------->function pointer
// #include <iostream>
// using namespace std;
// void solve(int *arr, int size) {   //int arr[]means array adress pass so address is store in pointer so we can also write this
// 	cout << "Size of array inside solve func: " << sizeof(arr) << endl;  //bcz address always 4 or 8 bit
// }
// int main()
// {
// 	int arr[] = {10,20,30,30,50};
// 	cout << "Size of array: " << sizeof(arr) << endl;
// 	solve(arr,4);
//     return 0;
// }


//------------------------------------------------------->function pointer explainaition
// #include <iostream>
// using namespace std;
// void solve(int *arr, int size) {
// 	cout << "Inside solve -> arr: " << arr << endl;
// 	cout << "Inside solve -> &arr: " << &arr << endl;  //this is variable to store add of array so its have own address
// }
// int main()
// {
// 	int arr[] = {10,20,30,30,50};
// 	solve(arr,5);

// 	cout << "Inside main -> arr: " << arr << endl;
// 	cout << "Inside main -> &arr: " << &arr << endl;
//     return 0;
// }


//------------------------------------------------------->function pointer question 1
// #include <iostream>
// using namespace std;
// void solve(int *arr, int size) {
// 	*arr = *arr + 1;
// }
// int main()
// {
// 	int arr[] = {10,20,30};
// 	solve(arr,3);

// 	for(int i=0; i<3; i++) {
// 		cout << arr[i] << " ";
// 	}
//     return 0;
// }


//------------------------------------------------------->pointer to pointer
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a = 5;
// 	int*p = &a;
// 	int **q = &p;

// 	cout<<a<<endl;
// 	cout<<&a<<endl;
// 	cout<<p<<endl ;
// 	cout<<&p<<endl <<endl;

// 	cout<<*p<<endl;
// 	cout<<q<<endl;
// 	cout<<&q<<endl;
// 	cout<<*q<<endl;
// 	cout<<**q<<endl;
//     return 0;
// }


//------------------------------------------------------->pointer to pointer(example-2)
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int a = 10;
// 	int*p = &a;
// 	int **q = &p;
// 	int **r = &p;
// 	int ***s = &q;

// 	cout<<&s<<endl;
// 	cout<<**r<<endl;
// 	cout<<***s<<endl;
// 	cout<<**q<<endl;
// 	cout<<**s<<endl <<endl;

// 	cout<<*q<<endl;
// 	cout<<*p<<endl;
// 	cout<<&s<<endl;
// 	cout<<&r<<endl;
// 	cout<<&q<<endl;
//     return 0;
// }


//------------------------------------------------------->pointer to fun question example
// #include <iostream>
// using namespace std;
// void solve(int *p){
//     *p = *p+5;
// }
// int main()
// {
// 	int a = 10;
// 	int*p = &a;

// 	cout<<p<<endl;
// 	cout<<&p<<endl;
// 	cout<<*p<<endl;
//     solve(p);
// 	cout<<p<<endl;
// 	cout<<&p<<endl;
// 	cout<<*p<<endl;
//     return 0;
// }


//------------------------------------------------------->pass by value
// #include <iostream>
// using namespace std;
// void solve(int* p) {   //copy banti hai
// 	p = p + 1;         //this p is diff from main fun, let assume p address is 104 then now point to 108
// }
// int main()
// {
// 	int a = 5;
// 	int* p = &a;

// 	cout << "p: " << p << endl;
// 	cout << "&p : " << &p << endl;
// 	cout << "*p: " << *p << endl;
// 	solve(p);
// 	cout << "p: " << p << endl;
// 	cout << "&p : " << &p << endl;
// 	cout << "*p: " << *p << endl;
//     return 0;
// }


//------------------------------------------------------->pass by refrence
// #include <iostream>
// using namespace std;
// void solve(int* &p) {
// 	p = p + 1;//and this p is same main fun p wala
// }
// int main()
// {
// 	int a = 5;
// 	int* p = &a;

// 	cout << "p: " << p << endl;
// 	cout << "&p : " << &p << endl;
// 	cout << "*p: " << *p << endl;
// 	solve(p);
// 	cout << "p: " << p << endl;
// 	cout << "&p : " << &p << endl;
// 	cout << "*p: " << *p << endl;
//     return 0;
// }