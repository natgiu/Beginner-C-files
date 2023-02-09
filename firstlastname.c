#include <stdio.h>
    int main(void)
    {
        char myFirst[30];
        char myLast[30]; 
        
        printf("What's your first name?\n");
        scanf("%s", myFirst);
        printf("What's your last name?\n");
        scanf("%s", myLast);

        printf("Hello, %s %s", myFirst, myLast);

        return 0;
    }