#include <unistd.h>


int main(int ac, char **av) {
    if (ac == 2) {
        int i = -1;
        int j = 0;
        while(av[1][++i]) {
            if (av[1][i] == 32 && av[1][i+1] >= 33 && av[1][i+1] <= 126)
                j = i+1;
        }
        while (av[1][j] >= 33 && av[1][j] <= 127) {
            write(1, &av[1][j++], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}