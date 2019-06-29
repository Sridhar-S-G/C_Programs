/*
Problem:
Remove the duplicates from n inputs

Test Case:
Input:
errand 34534
Output:
erand 345

Input:
apple 542134341 hhjvhvvm njklu
Output:
aple 54213 hjvm njklu

*/

//Note: Try to code on your own before refering this code

//Solution 
#include<stdio.h>
#include<string.h>
char *removeDuplicate(char str[], int n) 
{ 
   int index = 0;    
   for (int i=0; i<n; i++) { 
     int j;   
     for (j=0; j<i; j++)  
        if (str[i] == str[j]) 
           break;  
     if (j == i) 
        str[index++] = str[i]; 
   } 
     
   return str; 
} 
int main() {
   char str[2000];
   while(scanf("%s",str)==1){int n = sizeof(str) / sizeof(str[0]); 
      printf("%s ",removeDuplicate(str,n));
   }
}
