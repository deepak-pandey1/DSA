//------------------------------------------------------->factorial
// #include <iostream>
// using namespace std;
// int factororial(int n) {
//     // base case
//     if(n == 1 || n == 0)
//       return 1;

//     // recusrsion call or recursion relation
//     int recursionKaAns = factororial(n-1);

//     // processing
//     int finalans = n * recursionKaAns;
//     return finalans;
// }

// int main() {
//     cout << factororial(5);
//     return 0;
// }


//------------------------------------------------------->counting print from n to 1
// #include <iostream>
// using namespace std;
// void counting(int n){
//     // base case
//     if(n == 1){
//         cout<<1 <<" ";
//         return;
//     }

//     // processing
//     cout<<n<<endl;

//     // recursion call
//     counting(n-1);
    
// }
// int main() {
//     counting(5);
//     return 0;
// }


//------------------------------------------------------->power
// #include <iostream>
// using namespace std;
// int pow(int n){
//     // base case
//     if(n == 0){
//         return 1;
//     }

//     // recursion call
//     int ans = 2 * pow(n-1);
//     return ans;
    
// }
// int main() {
//     cout<< pow(10);
//     return 0;
// }

//------------------------------------------------------->febonacci series
// #include <iostream>
// using namespace std;
// int fib(int n){
//     // base case
//     if(n == 0){
//         return 0;
//     }
//     if(n == 1){
//         return 1;
//     }

//     // recursion call
//     int ans = fib(n-1) + fib(n-2);
//     return ans;
    
// }
// int main() {
//     cout<< fib(7);
//     return 0;
// }


//------------------------------------------------------->totalSum
// #include <iostream>
// using namespace std;
// int totalSum(int n){
//     // base case
//     if(n == 1){
//         return 1;
//     }

//     // recursion call
//     int ans = n + totalSum(n-1);
//     return ans;
    
// }

// int main() {
//     cout<< totalSum(5);
//     return 0;
// }