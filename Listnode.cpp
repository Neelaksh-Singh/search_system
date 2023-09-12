#include "Listnode.h"

Listnode::~Listnode(){
    if(next!=NULL){
        delete next;
    }
}

void Listnode::add(int d_id){
    if(d_id==id){
        times++;
    }
    else {
        if(next==NULL)
            next = new Listnode(d_id);
        next->add(d_id);
    
    }
}