#include<stdio.h>
int main(){
char ch;
printf("Enter a character:");
scanf("%c",&ch);
if(ch>='A'&&ch<='Z')ch=ch+32;
if(ch>='a'&&ch<='z'){
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
printf("Vowel");
else
printf("Consonant");
}else
printf("Not alphabet");
return 0;
}
