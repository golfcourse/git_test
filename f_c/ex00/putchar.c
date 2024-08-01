#include <unistd.h>

void ft_putchar(char c);

int main() {
    ft_putchar('H');
    ft_putchar('e');
    ft_putchar('l');
    ft_putchar('l');
    ft_putchar('o');
    ft_putchar('\n');
    return 0;
}

void ft_putchar(char c) {
    write(1, &c, 1);
}