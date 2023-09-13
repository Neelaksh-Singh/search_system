#include "Search.h"


void search(char* token, Trienode* trie, Mymap* map, int k){
    cout<<"Search for: "<<token<<endl;
}


void df(Trienode* trie){
    
    char* token = strtok(NULL, " \t\n");
    if(token!=NULL){
        cout<<token<<" "<<trie->dfsearchword(token,0)<<endl;
    }
    else{
        char* buffer = (char*)malloc(sizeof(char)*256);
        trie->dsearchall(buffer,0);
        free(buffer);
    }

    token=NULL;
    free(token);
}


int tf(char* token, Trienode* trie){
    char* token2 = strtok(NULL, " \t\n");
    if(token2==NULL){
        free(token2);
        return -1;
    }
    for(int l=0; l<strlen(token2); l++){
        if(!isdigit(token2[l])){
            token2=NULL;
            free(token2);
            return -1;
        }
    }

    int id = atoi(token2);
    token2 = strtok(NULL, " \t\n");
    if(token2==NULL){
        free(token2);
        return -1;
    }
    cout<<id<<" "<<token2<<" "<<trie->tfsearchword(id, token2,0)<<endl;
    return 1;
}