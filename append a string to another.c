program to append a string to another

#include<stdio.h>
void main()
{
    char dest_str[100], source_dest[100];
    int i=0, j=0;
    printf("\n Enter the source string: ");
    gets(source_dest);
    printf("\n Enter the destination string: ");
    gets(dest_str);

    while(dest_str[i] != '\0')
    {
        i++;
    }
    while(source_dest[j] !='\0')
    {
        dest_str[i] = source_dest[j];
        i++;
        j++;
    }
    dest_str[i] ='\0';
    printf("\n After appending, the destination string is: ");
    puts(dest_str);
}
