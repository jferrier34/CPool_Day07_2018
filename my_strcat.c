/*
** EPITECH PROJECT, 2018
** my_strcat.c
** File description:
** Task02
*/

void my_putchar(char c)
{
    write(1, &c, 1);
}

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

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0') {
	i++;
    }
    while (src[j] != '\0') {
	dest[i] = src[j];
	i++;
	j++;
    }
    return (dest);
}

int main(void)
{
    char dest[10] = "bon";
    my_putstr(my_strcat(dest, "jour"));
    return (0);
}
