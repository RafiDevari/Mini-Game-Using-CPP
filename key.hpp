#include <iostream>
#include <conio.h>
#include <windows.h>
#include <time.h>
using namespace std;

int xp=5;
int yp=5;
int xf=7;
int yf=5;
int lebar =50;
int tinggi=25;
int score=0;
char key='d';
int delay=10;



void batas(){
    if (xp>=lebar-1){
        xp=lebar-1;
        
    }
    if (yp>=tinggi-1){
        yp=tinggi-1;
    }
    if (xp<0){
        xp=0;
    }
    if (yp<0){
        yp=0;
    }
    
}








void presskey(){
            
            while (_kbhit()) {
                key=getch();
            }


            if (key == 'w' || key == 'W'){
                yp=yp-1;
                
                batas();
            }

            else if (key == 'a' || key == 'A'){
                xp=xp-1;
                batas();
            }

            else if (key == 's' || key == 'S'){
                yp=yp+1;
                batas();
            }

            else if (key == 'd' || key == 'D'){
                xp=xp+1;
                batas();
            }
            
        

}

