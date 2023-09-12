#include "Trienode.h"

Trienode::Trienode():letter(-1){
    sibling=NULL;
    child=NULL;
    //list=NULL;

}

Trienode::~Trienode(){
    if(sibling!=NULL)
        delete(sibling);
    if(child!=NULL)
        delete(child);
    //if(list!=NULL)
    //    delete(list);
}

void Trienode::insert(char* token, int id){
    if(letter==-1 or letter==token[0]){
        letter = token[0];

        //if we have reached the end of the word we make list containing the location of the word
        if(strlen(token)==1){
            //initialise list
            //list->insert(id);
            
        }
        else{
            //adds child node to the existing parent
            if(child==NULL)
                child = new Trienode();
            child->insert(token+1,id);
        }
    }
    else{
        //If parent node already exists, then we add a sibling node
        if(sibling==NULL)
            sibling = new Trienode();
        sibling->insert(token,id);
    }
}