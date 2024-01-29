#include <stdio.h>
#include <string.h>
int main()
{
    char str[1001];
    scanf("%[^\n]s", str);
    int z,o;
    z = o = 0;
    int i;
    for (i=0;str[i]!='\0';i++) 
	{
        if(str[i]=='z')
		{
            z++;
        }
        if(str[i]=='o') 
		{
            o++;
        }
    }
    if(o%z==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
