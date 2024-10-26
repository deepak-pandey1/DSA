//------------------------------------------------------->array creation
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[10];  //static array creation
//     char arr[10];
//     float arr[10];

//     int arr[] = {2,3,4,56,6};    //dynamic array creation 
//     cout << "hello world";
//     return 0;
// }


//------------------------------------------------------->array address
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
//     cout << "address of array " << &arr <<endl;
//     cout << "address of array " << arr <<endl;
//     return 0;
// }


//------------------------------------------------------->check array size
// #include <iostream>
// using namespace std;
// int main()
// {
//     int b = 3;
//     int arr[5];
//     cout << "size " << sizeof(b) <<endl;
//     cout << "array size " << sizeof(arr) <<endl;
//     return 0;
// }


//------------------------------------------------------->array initialization
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[] = {2,3,4,56,6};
//     int brr[5] = {1,2,3,4,5};
//     int crr[5] = {2,3};            //remaining fill up 0

//     // int drr[2] = {1,2,3,44,5};  //it gives error💯
//     cout << "hello world";
//     return 0;
// }


//------------------------------------------------------->array access
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {2,3,4,5,5};

//     cout << "value of arry 0" <<arr[0] <<endl;
//     cout << "value of arry 1" <<arr[1] <<endl;
//     cout << "value of arry 2" <<arr[2] <<endl;
//     cout << "value of arry 3" <<arr[3] <<endl;
//     cout << "value of arry 4" <<arr[4] <<endl <<endl;

//     //easy method
//     for(int i = 0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }


//------------------------------------------------------->taking array input
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];

//     //taking input in an array
//     for(int i =0; i<5; i++){
//         cout<<"enter the value for array pf index " << i <<" ";
//         cin >> arr[i];
//         cout <<endl;
//     }

//     //printing an array
//     for(int i = 0; i<5; i++){
//         cout<<arr[i];
//     }
//     return 0;
// }


//------------------------------------------------------->double array value after input
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
    
//     cout<<"enter value for array" <<endl;
//     for(int i = 0; i<5; i++){
//         cin >> arr[i];
//     }

//     cout<<"total array value " <<endl;
//     for(int i = 0; i<5; i++){
//         cout<<arr[i];
//     }

//     for(int i = 0; i<5; i++){
//         arr[i] = 2 * arr[i];
//     }

//     for(int i = 0; i<5; i++){
//         cout<<endl <<"after double array value " << arr[i]<<endl;
//     }
//     return 0;
// }


//------------------------------------------------------->sum array total value
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5];
    
//     cout<<"enter value for array" <<endl;
//     for(int i = 0; i<5; i++){
//         cin >> arr[i];
//     }

//     cout<<"total array value " <<endl;
//     for(int i = 0; i<5; i++){
//         cout<<arr[i];
//     }
//     int sum= 0;
//     for(int i = 0; i<5; i++){
//         sum = sum + arr[i];
//     }

//     cout<<endl <<"Total array value " << sum<<endl;
//     return 0;
// }


//------------------------------------------------------->linear search
// #include <iostream>
// using namespace std;
// int main()
// {
//     int arr[5] = {2,4,6,8,10};
//     int target = 11;
//     int n = 5;

//     bool flag = 0;
//     // 0 -> not found;
//     //1 -> found
    
//     for(int i=0; i<n; i++) {
//      if(arr[i] == target) {
//        //found
//        flag = 1;
//        break;
//      }
//     }

//     if(flag == 1) {
//      cout << "target found";
//     }
//     else {
//      cout << "target not found" << endl;
//     }
//     return 0;
// }


//------------------------------------------------------->arrray as function
// #include <iostream>
// using namespace std;

// void printArray(int arr[], int size) {
//   for(int i=0; i<size; i++) {
//     cout << arr[i] << " " ;
//   }
//   cout << endl;
// }

// int main()
// {
//     int arr[5] = {2,1,4,5,6};
//     int size = 5;
//     printArray(arr, size);
//     return 0;
// }


// //------------------------------------------------------->linear seaerch arrray as function 
// #include <iostream>
// using namespace std;

// //present -> true;
// //absent -> false;

// bool linearSearch(int arr[], int size, int target) {

//   for(int i=0; i<size; i++) {
//     if(arr[i] == target) {
//       //found
//       return true;
//     }
//   }
//   //not found
//   return false;
// }

// int main()
// {
//     int arr[5] = {2,4,6,8,10};
//     int size = 5;
//     int target = 10;

//     bool ans = linearSearch(arr, size, target);

//     if(ans == 1) {
//      cout << "Target found" << endl;
//     }
//     else {
//      cout << "Target Not found" << endl;
//     }
//     return 0;
// }


//------------------------------------------------------->count 0's & 1's in an array
// #include <iostream>
// using namespace std;

// void countZeroesOne(int arr[], int size){
//   int zeroesCount = 0;
//   int oneCount = 0;

//   for(int i = 0; i<size; i++){
//     if(arr[i] == 0){
//       zeroesCount++;
//     }
//     if(arr[i] == 1){
//       oneCount++;
//     }
//   }

//   cout<<"ZeroesCount "<<zeroesCount <<endl;
//   cout<<"oneCount "<<oneCount<<endl;
// }

// int main()
// {
//     int arr[] = {0,0,0,1,1,0,1,0,1,0,1,0,1,1,1};   //z = 7/ one = 8
//     int size = 15;
//     countZeroesOne(arr, size);
//     return 0;
// }


// //------------------------------------------------------->min no in an array
// #include <iostream>
// #include <limits.h>
// using namespace std;

// int findMinimumInArray(int arr[], int size){
//     int minAns = INT_MAX;
//     for(int i = 0; i<size; i++){
//         if(arr[i] < minAns){
//             minAns = arr[i];   //minAns = min(arr[i], minAns);
//         }
//     }
//     return minAns;
// }

// int main()
// {
//     int arr[] = {10,-8,31,4,3,1,51};
//     int size = 7;

//     int minimum = findMinimumInArray(arr, size);
//     cout << "Minimum number is: "<<minimum<<endl;
//     return 0;
// }


//------------------------------------------------------->reverse an array
// #include <iostream>
// using namespace std;

// void reverseArray(int arr[], int size){
//     int left = 0;
//     int right = size-1;

//     while(left <= right) {
//         swap(arr[left], arr[right]);
//         left++;
//         --right;
//     }

//     // for(int left =0, right=size-1; left<=right; left++, right--) {
//     // swap(arr[left], arr[right]);
//     // }

//     for(int i = 0; i<size; i++){
//         cout<<arr[i]<<endl;
//     }
// }

// int main()
// {
//     int arr[6] = {10,20,30,40,50,60};
//     int size = 6;
  
//     reverseArray(arr, size);
//     return 0;
// }


//------------------------------------------------------->extreme print in an arrray
// #include <iostream>
// using namespace std;

// void extremePrint(int arr[], int size){
//     int left = 0;
//     int right = size-1;

//     while(left <= right) {
//         if(left == right){
//             cout<<arr[left]<<" ";
//         }
//         else{
//             cout<<arr[left]<<" ";
//             cout<<arr[right]<<" ";
//         }
//         left++;
//         --right;
//     }
// }

// int main()
// {
//     int arr[6] = {10,20,30,40,50};
//     int size = 5;
  
//     extremePrint(arr, size) ;
//     return 0;
// }