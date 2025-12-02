
#include <unistd.h>

int is_alpha(char c) {
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z')) return 1;
    return 0;
}

int main(int ac, char **av)
{
    if (ac == 2) {
        int i = -1;
        while (av[1][++i]) {
            if (is_alpha(av[1][i])) {
                char oposite = (av[1][i] >= 'a') ? 'z' - (av[1][i] - 'a') : 'Z' - (av[1][i] - 'A');
                write(1, &oposite, 1);
            } else write(1, &av[1][i], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}