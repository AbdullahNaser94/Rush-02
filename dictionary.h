#ifndef DICTIONARY_H
#define DICTIONARY_H

typedef struct {
    int key;
    char *value;
} DictEntry;

extern DictEntry dictionary[];

#endif // DICTIONARY_H
