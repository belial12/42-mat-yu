#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_combn_recursive(int n, char *result, int depth, int start) {
    if (depth == n) {
        write(1, result, n);
        if (result[0] != '9' - n + 1) {
            write(1, ", ", 2);
        }
        return;
    }

    for (int i = start; i <= 9; i++) {
        result[depth] = i + '0';
        ft_print_combn_recursive(n, result, depth + 1, i + 1);
    }
}

void ft_print_combn(int n) {
    if (n <= 0 || n >= 10) return;
    
    char result[n];
    ft_print_combn_recursive(n, result, 0, 0);
}

int main() {
    ft_print_combn(2);
    ft_putchar('\n'); // Para agregar una nueva línea después de todas las combinaciones
    return 0;
}
