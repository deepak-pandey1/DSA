//------------------------------------------------------->Missing element from an array with duplicate
// #include <iostream>
// using namespace std;

// void findMissing(int *a, int n){
//     // visited method
//     for(int i = 0; i<n; i++){
//         int index = abs(a[i]);
//         if(a[index - 1] > 0){
//             a[index - 1] *= -1;
//         }
//     }

//     for(int i = 0; i<n; i++){
//         if(a[i] > 0)
//         cout << i+1<<" ";
//     }
// }

// int main()
// {
//     int n;
//     int a[] = {1,3,5,3,4};
//     n = sizeof(a)/sizeof(int); 
//     findMissing(a, n);
//     return 0;
// }


//------------------------------------------------------->wave print a matrix
#include <iostream>
#include <vector>
using namespace std;

void wavePrintMatrix(vector< vector<int> >& v){
    int row = v.size();
    int col = v[0].size();

    for(int startCol = 0; startCol < col; startCol++){
        // even no of col -> Top to bottom
        if((startCol & 1) == 0){
            for(int i = 0; i<row; i++){
                cout<<v[i][startCol]<<" ";
            }
        }
        else{
            // odd no of col -> Bottom to top.
            for(int i = row-1; i >= 0; i--){
                cout<<v[i][startCol]<<" ";
            }
        }
    }
}

int main()
{
    vector< vector<int> > v {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    wavePrintMatrix(v);
    return 0;
}