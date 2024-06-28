#include <stdlib.h>
#include "utils.h"
#include "dictionary.h"

int ft_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(unsigned char *)s1 - *(unsigned char *)s2;
}

int ft_atoi(const char *str) {
    int result = 0;
    int sign = 1;

    while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
        str++;
    if (*str == '-' || *str == '+') {
        if (*str == '-')
            sign = -1;
        str++;
    }
    while (*str >= '0' && *str <= '9') {
        result = result * 10 + (*str - '0');
        str++;
    }
    return sign * result;
}

int ft_strlen(const char *str) {
    int length = 0;
    while (str[length])
        length++;
    return length;
}

char *ft_strdup(const char *src) {
    int len = ft_strlen(src);
    char *dup = (char *)malloc(len + 1);
    if (dup) {
        int i = 0;
        while (i < len) {
            dup[i] = src[i];
            i++;
        }
        dup[len] = '\0';
    }
    return dup;
}

int get_dict_size() {
    int size = 0;
    while (dictionary[size].value != NULL) {
        size++;
    }
    return size;
}
