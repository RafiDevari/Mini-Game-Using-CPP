#include "object.hpp"

void map(){
    for (int i = 0; i < tinggi; i++){
        for (int j = 0; j < lebar; j++){
            player(i,j);
            food(i,j);



            
        }
        cout<<endl;
    }
    cout<<"Score="<<score;
    
}