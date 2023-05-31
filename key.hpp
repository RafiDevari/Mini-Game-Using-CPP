#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
int x=5;
int y=5;
int lebar =20;
int tinggi=20;




void batas(){
    if (x>=lebar-1){
        x=lebar-1;
    }
    if (y>=tinggi-1){
        y=tinggi-1;
    }
    if (x<0){
        x=0;
    }
    if (y<0){
        y=0;
    }
    
}








void presskey(){
    
        
            char key = _getch();
            if (key == 'w' || key == 'W'){
                y=y-1;
                batas();
            }

            else if (key == 'a' || key == 'A'){
                x=x-1;
                batas();
            }

            if (key == 's' || key == 'S'){
                y=y+1;
                batas();
            }

            if (key == 'd' || key == 'D'){
                x=x+1;
                batas();
            }
        

}

