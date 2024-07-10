#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_putnbr(int n) {
    if (n > 9) {
        ft_putchar((n / 10) + '0');
        ft_putchar((n % 10) + '0');
    } else {
        ft_putchar('0');
        ft_putchar(n + '0');
    }
}

void ft_print_comb2(void) {
    for (int i = 0; i <= 99; i++) {
        for (int j = i + 1; j <= 99; j++) {
            ft_putnbr(i);
            ft_putchar(' ');
            ft_putnbr(j);
            if (i != 98 || j != 99) {
                ft_putchar(',');
                ft_putchar(' ');
            }
        }
    }
}

int main() {
    ft_print_comb2();
    ft_putchar('\n'); // Para agregar una nueva línea después de todas las combinaciones
    return 0;
}
