#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Listnode.h"

#ifndef TRIENODE_H
#define TRIENODE_H

using namespace std;
class Trienode{
    Trienode* sibling;
    Trienode* child;
    //listnode* list;
    char letter;
public:
    Trienode();
    ~Trienode();
    void insert(char* token, int id);


};

#endif