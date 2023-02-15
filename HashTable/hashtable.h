#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "types.h"

class HashTable
{
public:
    HashTable();
    ~HashTable();
    int hash(int id);
    void add(Student *student);
    bool remove(int id);
    void printList();
    bool idExists(int id);
    int getSize() const
    {
        return this->size;
    };

private:
    int size;
    Node **array;
    int getChainSize(int hash);
    void resizeAndRehash();
};

#endif // HASHTABLE_H