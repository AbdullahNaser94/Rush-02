#include <unistd.h>
#include "utils.h"
#include "dictionary.h"

void convert_number_to_words(int num);

int main(int argc, char **argv) {
    if (argc != 2) {
        write(1, "Error\n", 6);
        return 1;
    }

    int number = ft_atoi(argv[1]);
    if (number < 0) {
        write(1, "Error\n", 6);
        return 1;
    }

    convert_number_to_words(number);
    write(1, "\n", 1);

    return 0;
}
