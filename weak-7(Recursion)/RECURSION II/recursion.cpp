//------------------------------------------------------->print an array
// #include <iostream>
// using namespace std;
// void print(int arr[], int size, int index){
//     //base condition
//     if(size == index){
//         return;
//     }
//     // process
//     cout<<arr[index]<<" ";
//     //recursive call
//     print(arr, size, index + 1);

// }
// int main() {
//     int arr[] = {50,40,30,20,10};
//     int size = 5;
//     int index = 0;
//     print(arr, size, index);
//     return 0;
// }


//------------------------------------------------------->print reverse an array
// #include <iostream>
// using namespace std;
// void print(int arr[], int size, int index){
//     //base condition
//     if(size == index){
//         return;
//     }
//     //recursive call
//     print(arr, size, index + 1);
//     // process
//     cout<<arr[index]<<" ";

// }
// int main() {
//     int arr[] = {50,40,30,20,10};
//     int size = 5;
//     int index = 0;
//     print(arr, size, index);
//     return 0;
// }


//------------------------------------------------------->linear search
// #include <iostream>
// using namespace std;
// bool linearSearch(int arr[], int size, int index, int target){
//     //base condition
//     if(index >= size){
//         return false;
//     }
//     if(arr[index] == target){
//         return true;
//     }
//     //recursive call
//     bool ans = linearSearch(arr, size, index + 1, target);
//     return ans;
// }
// int main() {
//     int arr[] = {50,40,30,20,10};
//     int size = 5;
//     int index = 0;
//     int target  = 10;
//     cout<< linearSearch(arr, size, index, target);
//     return 0;
// }


//------------------------------------------------------->find minimum
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void findMin(int arr[], int size, int index, int &mini){
//     //base condition
//     if(index >= size){
//         return;
//     }
//     // process
//     mini = min(mini, arr[index]);
//     //recursive call
//     findMin(arr, size, index + 1, mini);
// }
// int main() {
//     int arr[] = {50,40,30,20,10};
//     int size = 5;
//     int index = 0;
//     int mini = INT_MAX;
//     findMin(arr, size, index, mini);
//     cout<<mini;
//     return 0;
// }


//------------------------------------------------------->find even number and put another array
// #include <iostream>
// #include <vector>
// using namespace std;
// void evenNoPut(int arr[], int size, int index, vector<int> &ans){
//     //base condition
//     if(index >= size){
//         return;
//     }
//     // process
//     if(!(arr[index] & 1)){
//         ans.push_back(arr[index]);
//     }
//     //recursive call
//     evenNoPut(arr, size, index + 1, ans);
// }
// int main() {
//     int arr[] = {51,40,31,20,10};
//     int size = 5;
//     int index = 0;
//     vector<int>ans;
//     evenNoPut(arr, size, index, ans);
//     for(int i = 0; i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }


//------------------------------------------------------->linear search but now index return if find target, if not return -1
// #include <iostream>
// using namespace std;
// int find(int arr[], int size, int index, int target){
//     //base condition
//     if(index >= size){
//         return -1;  //means target not found🤦‍♂️
//     }
//     // process
//     if(arr[index] == target){
//         return index;
//     }
//     //recursive call
//     find(arr, size, index + 1, target);

// }
// int main() {
//     int arr[] = {51,40,31,20,10};
//     int size = 5;
//     int index = 0;
//     int target = 10;
//     cout<<find(arr, size, index, target);
//     return 0;
// }


//------------------------------------------------------->find maximum
// #include <iostream>
// #include <limits.h>
// using namespace std;
// void findMan(int arr[], int size, int index, int &maxi){
//     //base condition
//     if(index >= size){
//         return;
//     }
//     // process
//     maxi = max(maxi, arr[index]);
//     //recursive call
//     findMan(arr, size, index + 1, maxi);
// }
// int main() {
//     int arr[] = {50,40,30,20,10};
//     int size = 5;
//     int index = 0;
//     int maxi = INT_MIN;
//     findMan(arr, size, index, maxi);
//     cout<<maxi;
//     return 0;
// }


//------------------------------------------------------->double of array of element
// #include <iostream>
// using namespace std;
// void findMan(int arr[], int size, int index){
//     //base condition
//     if(index >= size){
//         return;
//     }
//     // process
//     cout<<arr[index] * 2<<" ";
//     //recursive call
//     findMan(arr, size, index + 1);
// }
// int main() {
//     int arr[] = {50,40,30,20,10};
//     int size = 5;
//     int index = 0;
//     findMan(arr, size, index);
//     return 0;
// }


//------------------------------------------------------->print index of all occurance of target in array
// #include <iostream>
// using namespace std;
// void find(int arr[], int size, int index, int target){
//     //base condition
//     if(index >= size){
//         return;
//     }
//     // process
//     if(arr[index] == target){
//         cout<<index <<" ";
//     }
//     //recursive call
//     find(arr, size, index + 1, target);

// }
// int main() {
//     int arr[] = {10,40,10,20,10};
//     int size = 5;
//     int index = 0;
//     int target = 10;
//     find(arr, size, index, target);
//     return 0;
// }


//------------------------------------------------------->number to digit
// #include <iostream>
// using namespace std;
// void print(int num){
//     //base condition
//     if(num == 0){
//         return;
//     }
//     // process
//     int digit = num % 10;
//     // now update num
//     num = num/10;
//     //recursive call
//     print(num);

//     // process
//     cout<<digit<<" ";

// }
// int main() {
//     int num = 4125;

//     print(num);
//     return 0;
// }


//------------------------------------------------------->number to digit and push in vector
// #include <iostream>
// #include <vector>
// using namespace std;
// void print(int num, vector<int> &ans){
//     //base condition
//     if(num == 0){
//         return;
//     }
//     // process
//     int digit = num % 10;
//     // now update num
//     num = num/10;
//     //recursive call
//     print(num, ans);

//     // process
//     ans.push_back(digit);

// }
// int main() {
//     int num = 4125;
//     vector<int> ans;

//     print(num, ans);
//     for(int i = 0;i<ans.size(); i++){
//         cout<<ans[i]<<" ";
//     }
//     return 0;
// }