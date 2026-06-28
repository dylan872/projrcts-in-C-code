#include <stdio.h>
#include <string.h>
void stringrev(int size,char string[])
{
    for(int i=size;i>=0;i--)
    {
        printf("%c",string[i]);
    }
}
int main()
{
    char string[100];
    printf("enter your string: ");
    fgets(string,sizeof(string),stdin);
    string[strcspn(string,"\n")]='\0';
    int size=strlen(string);
    printf("reversed string is: ");
    stringrev(size,string);
    return 0;

}