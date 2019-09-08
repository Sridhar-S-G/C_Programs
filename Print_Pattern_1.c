/*

Print the pattern as given in the sample input/output

Sample Input:
5
Sample Output:
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16 
21 22 23 24 25

Sample Input:
8
Sample Output:
1 2 3 4 5 6 7 8 
16 15 14 13 12 11 10 9
17 18 19 20 21 22 23 24 
32 31 30 29 28 27 26 25
33 34 35 36 37 38 39 40
48 47 46 45 44 43 42 41
49 50 51 52 53 54 55 56 
64 63 62 61 60 59 58 57

*/

//Solution Code
#include<stdio.h>

int main() {
    int n,t,f;
    scanf("%d ",&n);
    for(int i=1;i<=n;i++){t=n;
    int m=n*i;
    if(i%2!=0){if(i==1)f=1;
        while(t--){
            printf("%d ",f++);
        }printf("\n");}
    else{t=n;int g=m;f=g+1;
        while(t--){
            printf("%d ",g--);
        }printf("\n");
    }}}
