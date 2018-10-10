/*
** EPITECH PROJECT, 2018
** my_strncat.c
** File description:
** Task03
*/

int my_strlen(char *dest)
{
    int n = 0;

    while (dest[n] != '\0') {
        n = n + 1;
    }
    return (n);
}

char *my_strncat(char *dest, char const *src, int n)
{
    int i = 0;
    int j = 0;
    int length = my_strlen(dest);

    while (dest[i] != '\0') {
        i++;
    }
    while (i < (n + length)) {
        if (src[j] == '\0')
            dest[i] = '\0';
        dest[i] = src[j];
        i++;
        j++;
    }
    return (dest);
}
