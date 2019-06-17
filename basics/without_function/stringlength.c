/*
This program prints the string length of the input string without using strlen function available in library
*/

#include<stdio.h>
int main() {
   char s[200];
   int length=0;
   fgets(s,200,stdin);
   while(s[length]!='\0')
   length+=1;
   printf("%d",length-1);
}

/*
Sample Input/Output:
Input: MacOS
Output: 5
*/
