#include <stdio.h>

main(){

    // Q-1

    char str[20];
    gets(str);
    // printf("%s\n",str);

    int i=0;
    int length = 0;
    int count = 0;

    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    // printf("%d\n",length);
    
    int left = 0;
    int right = length-1;

    while (left<right)
    {
        if (left[str] != right[str])
        {
            count++;
        }
        left++;
        right--; 
    }
    // printf("%d",count);
    if (count>0)
    {
        printf("string is a not palindrome");
    }
    else
    {
        printf("string is a palindrome");
    }
    

    // Q-2


    // char str[100];
    // int freq[MAX_CHAR] = {0};

    // printf("Enter a string: ");
    // fgets(str, sizeof(str), stdin);

    // for (int i = 0; str[i] != '\0'; i++) {
    //     if (str[i] != '\n') {
    //         freq[(unsigned char)str[i]]++;
    //     }
    // }

    // printf("Character Frequency:\n");
    // for (int i = 0; i < MAX_CHAR; i++) {
    //     if (freq[i] > 0) {
    //         printf("'%c' : %d\n", i, freq[i]);
    //     }
    // }

    // return 0;
}