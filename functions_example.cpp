
/*******************************
 * This example will animate
 * some weird shape on the iostream
 *
 * **************************/
#include<iostream>
#include<ctime>
#include<iomanip>
#include<cstdlib>
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

//
// Draw a growing turkey
// inputs: center, the turkey's center
//          scale, the turkeys size
void draw_turkey(int center, int scale){
    //square turkey
    for(int i=0;i<scale;i++){
        cout << setw(center);
        for(int j=0; j<scale; j++)
            cout << "X";
        cout << '\n';
    }
    return;
}



int main(){

    srand(time(0));

    int num_frames = 1000;
    int t = 1;
    
    for(int i=0;i<25;i++)
        cout << rand()%6 +1 << " dice! \n";

    int loc = 30;

    for(int i=0; i<num_frames; i++){
        loc = loc + (rand()%3 - 1);
        draw_turkey( loc, 1);
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
    clock_t final_time = time(0) + t;

    while(time(NULL) < final_time);

    return;
}


