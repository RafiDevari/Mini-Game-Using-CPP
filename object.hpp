#include "key.hpp"

void tail(int i,int j){

}

void player(int i,int j){
    if (i==yp && j==xp){
        cout<<"*"; 
    }
    else if (i==yf && j==xf){
        cout<<"f"; 
    
    }
    else if (i==yt[0] && j==xt[0]){    
        cout<<"O";
        yt[0]=yp;xt[0]=xp;
    }
    //loop
    else if (i==yt[1] && j==xt[1] && score>=1){    
        cout<<"O";
        yt[1]=yt[0];xt[1]=xt[0];
    }
    else if (i==yt[2] && j==xt[2] && score>=2){    
        cout<<"O";
        yt[2]=yt[1];xt[2]=xt[1];
    }
    else if (i==yt[3] && j==xt[3] && score>=3){    
        cout<<"O";
        yt[3]=yt[2];xt[3]=xt[2];
    }
    else if (i==yt[4] && j==xt[4] && score>=4){    
        cout<<"O";
        yt[4]=yt[3];xt[4]=xt[3];
    }
    else if (i==yt[5] && j==xt[5] && score>=5){    
        cout<<"O";
        yt[5]=yt[4];xt[5]=xt[4];
    }
    else if (i==yt[6] && j==xt[6] && score>=6){    
        cout<<"O";
        yt[6]=yt[5];xt[6]=xt[5];
    }
    
    // end loop

    
   
 else {
        cout<<" ";
    }

    if (xp==xf && yp==yf){
        xf=rand()%lebar;
        yf=rand()%tinggi;
        score++;
        xt.push_back(xt.back());
        yt.push_back(yt.back());
    }
    

   
    
    
}

