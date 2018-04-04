//
//  main.cpp
//  Brainfuckproject
//
//  Created by Peter Schöppl on 04.04.18.
//  Copyright © 2018 Peter Schöppl. All rights reserved.
//

#include <iostream>

struct ToDo{
    int nr;
    char what[1024];
    
};

// Das ist eine Änderung


using namespace std;
int main(int argc, const char * argv[])
{
    int i=0;
    ToDo* t;
    ToDo** tpp=new ToDo*[32];
    
    for(int j=0;j<32;j++)
    {
        tpp[j]=new ToDo;
    }
    
    for(;i<=31;i++)
    {
        cout<<"Nummer"<<endl;
        cin>>tpp[i]->nr;
        if(tpp[i]->nr==0)
            break;
        
    }
    
    for(bool x=true;x==true;)
    {
        x=false;
        for(int lauf=0;lauf<i-1;lauf++)
        {
            if(tpp[lauf]->nr>tpp[lauf+1]->nr)
            {
                t=tpp[lauf];
                tpp[lauf]=tpp[lauf+1];
                tpp[lauf+1]=t;
                x=true;
                
            }
        }
    }
    
    for(int lauf=0;lauf<i;lauf++)
    {
        cout<< tpp[lauf]->nr;
    }
}














