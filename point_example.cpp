
#include"ccc_graphics/ccc_shap.h"

int main(){

    int num_turns = 9;
    Point input_point();
    for (int i=1; i <= num_turns;i++){

        if(i%2 != 0){
            input_point = cwin.get_mouse("player x");
            
            Point temp(input_point.get_x(), input_point.get_y());

            Point p1(input_point.get_x()-1, input_point.get_()+1);

            Line nw(input_point, p1);
            Line ne(input_point, temp.move(2,0));
            Line se(input_point, temp.move(0,-2));
            Line sw(input_point, temp.move(-2,0));
            cwin << nw;
            cwin << ne;
            cwin << se;
            cwin << sw;

        }
        else{
            input_point = cwin.get_mouse("player o");
            Circle c(input_point,1);
            cwin << c;
        }
    }

    return 0;
}
