#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int length;

    printf("���ڿ��� �ִ���� �Է�: ");
    scanf("%d", &length);
    while (getchar() != '\n');

    char* ptr = (char*)malloc(sizeof(char) * length);

    printf("���� �Է�: ");
    fgets(ptr, length, stdin);

    int i, spnum;
    int sl = (int)strlen(ptr) - 2;

    for (i = sl; i >= 0; i--)
    {
        if (ptr[i] == ' ')
        {
            spnum = i;
            for (int j = spnum + 1; j <= sl; j++)
            {
                if (ptr[j] != ' ')
                    printf("%c", ptr[j]);
                else
                    break;
            }
            printf(" ");
        }
        else
            continue;
    }
    if (ptr[0] != ' ')
        printf("%c", ptr[0]);

    printf("\n");
    return 0;
}