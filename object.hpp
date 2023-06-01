#include "key.hpp"

void player(int i,int j){
    if (i==yp && j==xp){
        cout<<"*"; 
    }
    else if (i==yf && j==xf){
        
        cout<<"f"; 
    
    }
    
    else cout<<" ";
    
    

    if (xp==xf && yp==yf){
        xf=rand()%lebar;
        yf=rand()%tinggi;
        score++;
    }
    
}

