#include "Engine.h"

using namespace std;

int main(int argc, char **argv){
    if(argc!=5 || strcmp(argv[1], "-d") || strcmp(argv[3],"-k"))
    {
        cout<<"Wrong no. of arguments";
        return -1;
    }
    cout<<"Please wait"<<endl;
    int linecounter=0;
    int maxlength=-1;
    int k=atoi(argv[4]);
    
    if(read_sizes(&linecounter, &maxlength, argv[2])==-1)
        return -1;
    Mymap *mymap = new Mymap(linecounter,maxlength);
    Trienode *trie = new Trienode();

    if(read_input(mymap, trie, argv[2])==-1){
        delete(mymap);
        return -1;
    }
    cout<<"Initialization finised"<<endl;
    // for(int i=0;i<mymap->getsize();i++){
    //     mymap->print(i);
    // }
    // cout<<"Line counter: "<< linecounter<<"\nMax length: "<<maxlength<<endl;
    delete(mymap);
    delete(trie);
    return 1;    
    
}
