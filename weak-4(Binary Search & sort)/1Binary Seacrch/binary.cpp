//------------------------------------------------------->binary search
// #include <iostream>
// using namespace std;
// int binarysearch(int arr[], int size, int target){
//     int start = 0;
//     int end = size-1;
//     int mid = (start + end)/2;

//     while(start<=end){
//         // found
//         if(arr[mid] == target){
//             // return index of the found element
//             return mid;
//         }
//         else if(target > arr[mid]){
//             // right mai jao
//             start = mid+1;
//         }
//         else if(target < arr[mid]){
//             // left mai jao
//             end = mid-1;
//         }
//         // mid update
//         mid = (start + end)/2;
//     }
//     // if yaha tk pahuch gye ho iska mtlb element nahi mila
//     return -1;
// }

// int main()
// {
//     int arr[] = {10,20,30,40,50,60,70,80,90};
//     int size = 9;
//     int target = 90;

//     int ansIndex = binarysearch(arr, size, target);
//     if(ansIndex == -1){
//         cout << "element not found " <<endl;
//     }
//     else{
//         cout<<"element found at Index "<<ansIndex<<endl;
//     }
//     return 0;
// }


//------------------------------------------------------->find first occurance of no in sorted array
// #include <iostream>
// using namespace std;

// int findFirstOccurance(int arr[], int size, int target){
//     int s = 0;
//     int e = size-1;
//     // int mid = (start + end)/2;  overflow chance
//     //   best prectise
//     int mid = s+(e-s)/2;
//     int ans  = 0;

//     while(s <= e){
//         if(arr[mid] == target){   // found
//             ans = mid;   //ans store
//             e = mid - 1; //left me jao
//         }
//         else if(target > arr[mid]){
//             s = mid + 1;  //right mai jao
//         }
//         else if(target < arr[mid]){
//             e = mid + 1; //left me jao
//         }
//         mid = (s+e)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int arr[] = {10,20,30,30,30,30,70,80,90};
//     int size = 9;
//     int target = 30;

//     int ansIndex = findFirstOccurance(arr, size, target);;
//     if(ansIndex == -1){
//         cout << "element not found " <<endl;
//     }
//     else{
//         cout<<"element found at Index "<<ansIndex<<endl;
//     }
//     return 0;
// }
// ----->2 step process
// 1.ans store
// 2.left mai jao if ans found


//------------------------------------------------------->last occurance of no in sorted array
// #include <iostream>
// using namespace std;

// int findLastOccurance(int arr[], int size, int target){
//     int s = 0;
//     int e = size-1;
//     // int mid = (start + end)/2;  overflow chance
//     //   best prectise
//     int mid = s+(e-s)/2;
//     int ans  = 0;

//     while(s <= e){
//         if(arr[mid] == target){   // found
//             ans = mid;   //ans store
//             s = mid - 1; //right me jao
//         }
//         else if(target > arr[mid]){
//             s = mid + 1;  //right mai jao
//         }
//         else if(target < arr[mid]){
//             e = mid + 1; //left me jao
//         }
//         mid = (s+e)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int arr[] = {10,20,30,30,30,30,70,80,90};
//     int size = 9;
//     int target = 30;

//     int ansIndex = findLastOccurance(arr, size, target);;
//     if(ansIndex == -1){
//         cout << "element not found " <<endl;
//     }
//     else{
//         cout<<"element found at Index "<<ansIndex<<endl;
//     }
//     return 0;
// }


//------------------------------------------------------->total occurance of no in sorted array
// #include <iostream>
// using namespace std;

// int findFirstOccurence(int arr[], int n, int target) {
//   int s = 0;
//   int e = n-1;
//   int mid = (s+e)/2;

//   //BEST Practice
//   //int mid = s +(e-s)/2;
  
//   int ans = -1;

//   while(s<=e) {
//     if(arr[mid]==target) {
//       //ans store
//       ans = mid;
//       //left me jao
//       e = mid-1;
//     }
//     else if(target > arr[mid]) {
//       //right me jao
//       s = mid+1;
//     }
//     else if(target < arr[mid]) {
//       //left me jao
//       e = mid-1;
//     }
//     //galti yaha krte h hmesha
//     mid = (s+e)/2;
//   }
//   return ans;
// }

// int findLastOccurence(int arr[], int n, int target) {
//   int s = 0;
//   int e = n-1;
//   int mid = s +(e-s)/2;
//   int ans = -1;

//   while(s<=e) {
//     if(arr[mid]==target) {
//       //ans store
//       ans = mid;
//       //right me jao
//       s = mid+1;
//     }
//     else if(target > arr[mid]) {
//       //right me jao
//       s = mid+1;
//     }
//     else if(target < arr[mid]) {
//       //left me jao
//       e = mid-1;
//     }
//     //galti yaha krte h hmesha
//     mid = (s+e)/2;
//   }
//   return ans;
// }


// int findTotalOccurence(int arr[], int n, int target) {
//     int firstOcc = findFirstOccurence(arr, n, target);
//     int lastOcc = findLastOccurence(arr, n, target);
//     int total = lastOcc - firstOcc +1 ;
//     return total;
// }

// int main()
// {
//     int arr[] = {10,30,30,30,30,30,30,80,90};
//     int n = 9;
//     int target = 30;

//     int ansIndex = findTotalOccurence(arr, n, target);
//     cout<<"total occurance of no in sorted array "<<ansIndex<<endl;
//     return 0;
// }


//------------------------------------------------------->find missing no in sorted array
// #include <iostream>
// using namespace std;

// int findMissingElement(int arr[], int n) {
//   int s = 0;
//   int e = n-1;
//   int mid = s + (e-s)/2;
//   int ans = -1;

//   while(s <= e) {
//     int diff = arr[mid] - mid;

//     if(diff == 1) {
//       //right me jao
//       s = mid+1;
//     }
//     else {           //diff == 2
//       //ans store
//       ans = mid;
//       //left me jao
//       e = mid - 1;
//     }
//      mid = s + (e-s)/2;
//   }


//   //HW -> How can we remove this, by modifying the above logic
//   if(ans +1 == 0)
//     return n+1;
  
//   return ans+1;
// }

// int main()
// { 
//     int arr[] = {1,2,3,4,6,7,8,9};
//     int n = 8;

//     cout<<"Missing element is " << findMissingElement(arr, n);
//     return 0;
// }