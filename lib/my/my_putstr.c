/*
** EPITECH PROJECT, 2018
** my_putstr.c
** File description:
** Task02
*/

int  my_putstr(char const *str)
{
    char i = *str;

    while (i != '\0') {
        i = *str;
        my_putchar(i);
        str = str + 1;
    }
    return (0);
}
