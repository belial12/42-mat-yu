#include <unistd.h>

void ft_putchar(char c) {
    write(1, &c, 1);
}

void ft_print_alphabet(void) {
    char letter = 'a';
    while (letter <= 'z') {
        ft_putchar(letter);
        letter++;
    }
}

int main() {
    ft_print_alphabet();
    ft_putchar('\n'); // Para agregar una nueva línea después del alfabeto
    return 0;
}
