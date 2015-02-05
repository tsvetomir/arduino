#include <stdio.h>

void main(void)
{
    char base_digits[3] = {'0', '1', '2'};

    int converted_number[64];
    int number_to_convert;
    int next_digit;
    int base = 3;

    while (1) {
        scanf("%d", &number_to_convert);

        int index = 0;
        while (number_to_convert != 0)
        {
            converted_number[index] = number_to_convert % base;
            number_to_convert = number_to_convert / base;
            ++index;
        }

        for(--index; index >= 0; index--)
        {
            printf("%c", base_digits[converted_number[index]]);
        }

        printf("\n");
    }
}
