#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_comb(void) {
    for (char i = '0'; i <= '9'; i++) {
        for (char j = i + 1; j <= '9'; j++) {
            for (char k = j + 1; k <= '9'; k++) {
                ft_putchar(i);
                ft_putchar(j);
                ft_putchar(k);
                if (i != '7' || j != '8' || k != '9') {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
            }
        }
    }
}

int main() {
    ft_print_comb();
    ft_putchar('\n'); // Para agregar una nueva línea después de todas las combinaciones
    return 0;
}
