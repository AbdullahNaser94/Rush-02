#include <unistd.h>
#include "utils.h"
#include "dictionary.h"

void convert_number_to_words(int num) {
    if (num == 0) {
        write(1, "zero", 4);
        return;
    }

    int temp = num;
    int i = 0;
    int dict_size = get_dict_size();

    while (temp >= 1000) {
        i = 0;
        while (i < dict_size) {
            if (dictionary[i].key == (temp / 1000) * 1000) {
                write(1, dictionary[i].value, ft_strlen(dictionary[i].value));
                write(1, " ", 1);
                temp %= 1000;
                break;
            }
            i++;
        }
    }

    while (temp >= 100) {
        i = 0;
        while (i < dict_size) {
            if (dictionary[i].key == (temp / 100) * 100) {
                write(1, dictionary[i].value, ft_strlen(dictionary[i].value));
                write(1, " ", 1);
                temp %= 100;
                break;
            }
            i++;
        }
    }

    while (temp >= 20) {
        i = 0;
        while (i < dict_size) {
            if (dictionary[i].key == (temp / 10) * 10) {
                write(1, dictionary[i].value, ft_strlen(dictionary[i].value));
                write(1, " ", 1);
                temp %= 10;
                break;
            }
            i++;
        }
    }

    if (temp > 0) {
        i = 0;
        while (i < dict_size) {
            if (dictionary[i].key == temp) {
                write(1, dictionary[i].value, ft_strlen(dictionary[i].value));
                break;
            }
            i++;
        }
    }
}
