//------------------------------------------------------->search space based question
// #include <iostream>
// using namespace std;
// int getQuotient(int divisior, int dividend){
//     int s = 0;
//     int e = dividend;
//     int ans = -1;
//     int mid = s+(e-s)/2;

//     while(s <= e) {
//         if(mid * divisior == dividend){
//             return mid;
//         }
//         else if(mid * divisior < dividend) {
//             //ans store
//             ans = mid;
//             //right me jao
//             s = mid+1;
//         }
//         else{
//             //left
//             e = mid - 1;
//         }
//         mid = s+(e-s)/2;
//     }
//     return ans;
// }

// int main()
// {
//     int divisior = 7;
//     int dividend = -35;
//     int ans = getQuotient(abs(divisior), abs(dividend));

//     //now we need to decide  k sign konsa +ve ya negitive
//     if((divisior>0 && dividend <0) || (divisior < 0 && dividend >0)) {
//         ans = 0-ans;
//     }
//     cout << "final ans is: " << ans <<endl;
//     return 0;
// }


//------------------------------------------------------->binary search in nearly sorted array
// #include <iostream>
// using namespace std;

// int searchNearlySorted(int arr[], int n, int target) {
//     int s = 0;
//     int e = n-1;
//     int mid = s+(s-s)/2;

//     while(s<=e){
//         if(mid-1 >= 0 && arr[mid-1] == target) {
//             return mid-1;
//         }
//         if(arr[mid] == target) {
//             return mid;
//         }
//         if(mid+1 < n && arr[mid+1] == target) {
//             return mid+1;
//         }
//         if(target > arr[mid]){
//             //right 
//             s = mid +2;
//         }
//         else{
//             //left
//             e = mid-2;
//         }
//         mid = s+(s-s)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {20,10,30,50,40,70,60};
//     int n =  7;
//     int target = 70;

//     int targetIndex = searchNearlySorted(arr, n, target);

//     if(targetIndex == -1){
//         cout<< "element not found" <<endl;
//     }
//     else{
//         cout<< "element found at index "<<targetIndex<<endl;
//     }
//     return 0;
// }


//------------------------------------------------------->find the odd occuring element
// #include <iostream>
// using namespace std;

// int findOddOccuringElement(int arr[], int n) {
//     int s = 0;
//     int e = n-1;
//     int mid = s + (e-s)/2;

//     while(s <= e) {
//         //single element
//         if(s == e) {
//             return s;
//         }

//         //mid check -> even or odd
//         if(mid & 1) { //mid&1 -> true -> odd number
//             if(mid-1 >=0 && arr[mid-1] == arr[mid]) {
//                 //right me jao
//                 s = mid + 1;
//             }
//             else {
//                 //left me jao
//                 e = mid - 1;
//             }
//         }
//         else {
//             //even
//             if(mid+1 < n && arr[mid] == arr[mid+1]){  //mid+1 already chek ho gya hai
//                 //right me jao
//                 s = mid + 2;
//             }
//             else {
//                 //ya toh main right part pr khada hu
//                 //ya toh main answer k upar khada hu
//                 //that's why e = mid krra hu
//                 // kyoki e = mid - 1; se ans lost ho skta h 
//                 e = mid;    
//             }
//         }
//         mid = s + (e-s)/2;
//     }
//     return -1;
// }

// int main()
// {
//     int arr[] = {10,10,2,2,3,3,2,5,5,6,6,7,7};
//     int n = 13;

//     int ansIndex = findOddOccuringElement(arr, n);

//     cout << "Final Ans is: "<< arr[ansIndex] << endl; 

//     return 0;
// }