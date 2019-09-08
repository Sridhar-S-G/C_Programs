/*

Print the pattern as given below in the sample input/output

Sample Input:
5
Sample Output:
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15 

Sample Input:
8
Sample Output:
1 
3 2 
4 5 6 
10 9 8 7 
11 12 13 14 15 
21 20 19 18 17 16 
22 23 24 25 26 27 28 
36 35 34 33 32 31 30 29 

*/

//Solution Code

#include<stdio.h>

int main() {
    int n,c=1;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            for(int j=1;j<=i;j++){
                printf("%d ",c++);
            }printf("\n");
        }else{ int t=c+i-1;
            while(t>=c){
                printf("%d ",t);t-=1;
            }c+=i;printf("\n");
        }
    }
}
