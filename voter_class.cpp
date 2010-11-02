#include<iostream>
#include<string>
#include<algorithm>
#include<ctime>
using namespace std;

/*
 * In this program there is one race for gov.
 * and one prop being voted on.
 *
 * Each voter has 2 choices for gov.
 * and can say yes or no on the prop
 * */

class Voter{

    public:
        //constructor
        //automatically initializes member data
        Voter();

        //accessor function (only retrieves private data)
        int get_candidate() const;
        int get_prop() const;

        //mutator function (changes private data)
        void vote(int c, int p);

    private:

        int candidate;
        int prop;
};


int main(){

    srand(time(0));

    //make some voters
    Voter p1,p2,p3,p4,p5;

    p1.vote(rand()%2, rand()%2);
    p2.vote(rand()%2, rand()%2);
    p3.vote(rand()%2, rand()%2);
    p4.vote(rand()%2, rand()%2);
    p5.vote(rand()%2, rand()%2);

    int total_candidate = 0;

    cout << p1.get_candidate();
    cout << p2.get_candidate();
    cout << p3.get_candidate();
    cout << p4.get_candidate();
    cout << p5.get_candidate();
    cout << '\n';

    total_candidate += p1.get_candidate();
    total_candidate += p2.get_candidate();
    total_candidate += p3.get_candidate();
    total_candidate += p4.get_candidate();
    total_candidate += p5.get_candidate();

    cout << total_candidate << " how many votes he got\n";

    int total_prop = 0;
    total_prop += p1.get_prop();
    total_prop += p2.get_prop();
    total_prop += p3.get_prop();
    total_prop += p4.get_prop();
    total_prop += p5.get_prop();
    
    cout << total_prop << " how many votes prop got\n";

    return 0;    

}

Voter::Voter(){
    candidate = 0;
    prop = 0;
}

void Voter::vote(int c, int p){
    candidate = c;
    prop = p;
    return;
}

int Voter::get_candidate() const{
    return candidate;
}

int Voter::get_prop() const {
    return prop;
}
