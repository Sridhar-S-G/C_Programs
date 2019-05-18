#include<stdio.h>

int main() {
   int n,num;char *s1,*s2;
   scanf("%d",&n);num=n;
   int f=0,c=0,sf=0;
   while(n!=0){
       n/=10;c++;}
    if(c==1)f=1;
    else f=2;
    if((num>=1 && num<=9)||(num>=20)){
        int unit=num%10, tenth=num/10%10;
        if(unit==1)s2="one";
        else if(unit==2)s2="two";
        else if(unit==3)s2="three";
        else if(unit==4)s2="four";
        else if(unit==5)s2="five";
        else if(unit==6)s2="six";
        else if(unit==7)s2="seven";
        else if(unit==8)s2="eight";
        else if(unit==9)s2="nine";
    
        if(tenth==2)s1="twenty";
        else if(tenth==3)s1="thirty";
        else if(tenth==4)s1="forty";
        else if(tenth==5)s1="fifty";
        else if(tenth==6)s1="sixty";
        else if(tenth==7)s1="seventy"; 
        else if(tenth==8)s1="eighty";
        else if(tenth==9)s1="ninety";}
    else if(num>=10&&num<=19){sf=1;
        if(num==10)s2="ten";
        else if(num==11)s2="eleven";
        else if(num==12)s2="twelve";
        else if(num==13)s2="thirteen";
        else if(num==14)s2="fourteen";
        else if(num==15)s2="fifteen";
        else if(num==16)s2="sixteen";
        else if(num==17)s2="seventeen";
        else if(num==18)s2="eighteen";
        else if(num==19)s2="nineteen";
    } 
    if(f==1 || sf==1)
    printf("%s",s2);
    else
    printf("%s-%s",s1,s2);
}
 
