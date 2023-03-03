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
    cout<<"Initialization finised"<<endl;
    cout<<"Line counter: "<< linecounter<<"\nMax length: "<<maxlength<<endl;
    return 1;    
    
}
