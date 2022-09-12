#include <stdio.h> 
char *uniq(char text[1024]) 
{ 
   char contain[1024];
    contain[0] = text[0];
    char *ptrIndex,*ptrStep;  
    int i =0 ,c = 1;
    ptrIndex = text; 
    ptrStep = text;
    while(*(ptrStep+i) != '\0') 
    { 
        if(*(ptrStep+i) != *ptrIndex) 
        { 
            contain[c] = *(ptrStep+i); 
            c++;
            ptrIndex = ptrStep+i;
        }
        i++;
    }
    char *inReturn = contain;
    return inReturn;
}
int main() 
{  
    char text1[1024];
    scanf("%s",text1); 
    char* point = uniq(text1); 
    printf("%s",point); 

}