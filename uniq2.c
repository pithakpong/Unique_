#include <stdio.h> 
int main() 
{ 
    char text[1024]; 
    scanf("%s",text);  
    int i =0,j=0; 
    printf("%c",text[0]); 
    while(text[i] != '\0') 
    {
        if(text[i] != text[j]) 
        { 
            printf("%c",text[i]);
            j++;
            j = i;
        }
        i++;
    }
    
}