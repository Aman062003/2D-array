input:
5 6
1 5 7 9 10 11
6 10 12 13 20 21
9 25 29 30 32 41
15 55 59 63 68 70
40 70 79 81 95 105


Output:
  1 5 7 9 10 11 21 41 70 105 95 81 79 70 40 15 9 6 10 12 13 20 32 68 63 59 55 25 29 30 29 
------------------------------------------------------------------------------------------------------------------------------------------------
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
signed main() {
    int n, m;
    cin>>n>>m;
    
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j =0; j<m;j++){
            cin>>a[i][j];
        }
    }
    
    //spiral order point
    
    int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
    
    while(row_start <= row_end && column_start <= column_end){
        //for row start
        for(int col = column_start; col<= column_end; col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start++;
        
        //for column end
        for(int row = row_start; row<=row_end; row++){
            cout<<a[row][column_end]<<" ";
        }
        column_end--;
        
        //for row end
        
        for(int col = column_end; col >= column_start; col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end--;
        
        //for column start
        
        for(int row = row_end; row>=row_start; row--){
            cout<<a[row][column_start]<<" ";
        }
        column_start++;
    }
    

    return 0;
}
