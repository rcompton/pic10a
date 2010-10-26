
/*******************************
 * This example will animate
 * some weird shape on the iostream
 *
 * **************************/
#include<iostream>
#include<ctime>
using namespace std;
//
// draw an x on iostream
// inputs: location of x
//       : possible locations of x
//
// outputs: none
//
void draw_x(int x_loc);

//
// pause the iostream
// for a while
// inputs: t, number of clock cycles to pause
//   
void pause(int t);

//
// convert pennies to dollars
// input: p, number of pennies
// output: number of dollars
//
int p_2_d(int p){
    return p/100;
}

int main(){

    int num_frames = 100;
    int t = 1;

    for(int i=0; i<num_frames; i++){
        draw_x(i);
        cout << p_2_d(time(NULL));
        pause(t);
    }    

    cout << time(NULL) << "\n";

    return 0;
}


void draw_x(int x_loc){
    string stuff;

    for(int i=0;i<x_loc;i++)
        stuff = stuff + " ";
    stuff = stuff + "x";

    cout << stuff << "\n";
    return;
}

void pause(int t){
    clock_t final_time = time(NULL) + t;

    while(time(NULL) < final_time);

    return;
}


