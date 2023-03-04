#include "Readinput.h"

using namespace std;

int read_sizes(int *linecounter, int *maxlength, char *docfile){
    FILE *file = fopen(docfile,"r");
    if(file==NULL){
        cout<<"ERROR opeening file"<<endl;
        return -1;
    }
    char *line=NULL;
    size_t falsebuffer =0;
    int currlength;
    while(-1!=(currlength=getline(&line, &falsebuffer, file))){
        if(*maxlength<currlength)
            *maxlength=currlength;
        (*linecounter)++;
        free(line);
        line=NULL;
        falsebuffer=0;
    }
    fclose(file);
    free(line);
    if(*linecounter==0 || *maxlength<3){
        cout<<"Document is too empty and doesn't meet requirement"<<endl;
        return -1;
    }
    return 1;
}

int read_input(Mymap* mymap, char* docfile){
    FILE* file = fopen(docfile,"r");
    char* line=NULL;
    size_t falsebuffer=0;
    int currlength;
    for(int i=0;i<mymap->getsize();i++){
        getline(&line, &falsebuffer, file);
        if(mymap->insert(line,i)==-1){
            cout<<"Document doesn't meet the requirement"<<endl;
            fclose(file);
            free(line);
            return -1;
        }
        free(line);
        line=NULL;
        falsebuffer=0;
    }
    fclose(file);
    
}