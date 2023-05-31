#include "key.hpp"

void map(){
    for (int i = 0; i < tinggi; i++){
        for (int j = 0; j < lebar; j++){
            if (i==y && j==x){
                cout<<"*"; 
            }
            else cout<<" ";
            
        }
        cout<<endl;
    }
    
}