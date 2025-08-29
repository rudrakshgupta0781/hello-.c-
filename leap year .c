#include<stdio.h>
  int main(){
    char alpha;
    printf("enter a alphabet:");
    scanf("%c",&alpha);
    if(alpha=='a'|| alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u'|| alpha=='A'|| alpha=='E'|| alpha=='I'|| alpha=='O'){
      printf("vowel");
    }
    else if ( alpha>='A'&& alpha<='Z'|| alpha>='a'&& alpha<='z'){
    
      printf("consonant");
    
    }
   else {
    printf("not an alphabet");
   }






    return 0 ;
  }