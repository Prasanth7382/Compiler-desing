#include <stdio.h>
int main()
{
    char ch;
    int whitespaceCount = 0;
    int newlineCount = 0;

    printf("Enter some text (Ctrl+D to end input):\n");

    while ((ch = getchar()) != EOF) 
	{
        if (ch == ' ' || ch == '\t') 
		{
            whitespaceCount++;
        } else if (ch == '\n') {
            newlineCount++;
        }
    }

    printf("Number of whitespaces: %d\n", whitespaceCount);
    printf("Number of newline characters: %d\n", newlineCount);

    return 0;
}
