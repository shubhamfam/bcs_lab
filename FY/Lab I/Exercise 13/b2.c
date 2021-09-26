/*2. Define two constant arrays of strings, one containing country names (ex: India, France etc)
and the other containing their capitals. (ex: Delhi, Paris etc). Note that country names and capital
names have a one-one correspondence. Accept a country name from the user and display its
capital. Example: Input: India , Output: Delhi.*/
#include <stdio.h>
#include <string.h>

int main()
{
    const char country[5][20] = {"India", "France", "United States", "Russia", "China"};
    const char capital[5][20] = {"New Delhi", "Paris", "Washington DC", "Moscow", "Beijing"};
    char name[20];
    
    printf("\nEnter a country name: ");
    scanf("%[^\n]s", name);

    for (int i = 0; i < 5; i++)
    {
        if (strcmp(country[i], name) == 0)
        {
            printf("%s\n", capital[i]);
            break;
        }
    }

    return 0;
}