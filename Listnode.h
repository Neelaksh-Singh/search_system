#include <iostream>
#include <cstdlib>
#include <cstring>

#ifndef LISTNODE_H
#define LISTNODE_H
class Listnode{
    Listnode* next; //next list item
    int id; // document id
    int times; //times the word appears in the document
public:
    Listnode(int d_id):id(d_id),times(0){next=NULL;}
    ~Listnode();

    void add(int d_id);
};
#endif