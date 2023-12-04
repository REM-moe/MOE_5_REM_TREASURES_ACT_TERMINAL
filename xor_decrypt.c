#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
    int main(void)
    {
        char data[100];
        int key = 'P';
        int length;
        int i;
 
 
 
        flushall();
 
        printf("\nEnter data to encrypt: ");
        scanf("%[^\n]", &data);
 
        length = strlen(data);
 
        for(i=0; i<length; i++)
        {
            data[i] = data[i]^key;
        }
 
        printf("\n==============");
        printf("\nEncrypted Data");
        printf("\n==============");
        printf("\n%s\n", data);
 
        flushall();
 
        /* Start Decrypt */
 
        printf("\nEnter unlock key: ");
        scanf("%d", &key);
 
        for(i=0; i<length; i++)
        {
            data[i] = data[i]^key;
        }
 
        printf("\n==============");
        printf("\nDecrypted Data");
        printf("\n==============");
        printf("\n%s\n\n", data);
 
 
 
    }
