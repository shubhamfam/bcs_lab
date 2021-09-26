/*2. Accept characters till the user enters EOF and count the number of lines entered. Also
display the length of the longest line. (Hint: A line ends when the character is \n)*/
#include <stdio.h>

int main()
{
    char ch;
    int charInLineCount = 0, lineCount = 1, maxLineLength = 0;

    while ((ch = getchar()) != EOF)
    {
        charInLineCount++;

        if (ch == '\n')
        {
            if (charInLineCount > maxLineLength)
            {
                maxLineLength = charInLineCount;
            }
            lineCount++;
            charInLineCount = 0;
        }
      
    }

    printf("Number of lines: %d\n", lineCount);
    printf("Length of longest line: %d characters\n", maxLineLength);

    return 0;
}