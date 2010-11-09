#include<vector>
#include<string>
#include<iostream>
using namespace std;

// Count how many sentences
// in a string
int count_sentences(const string &s){
    int sc=0;
    for(int i=0; i<s.length(); i++)
        if(s.substr(i,1) == "." || s.substr(i,1)=="!" || s.substr(i,1)=="?")
            sc++;

    return sc;

}

//count how many words
int count_words(string s){
    //trick, count spaces
    int wc = 0;
    for(int i=0; i<s.length();i++)
        if(s.substr(i,1) == " ")
            wc++;
    return wc+1;
}

//split the sentences into a vector
//of sentences
//terrible function
vector<string> sentence_vec(string s){

    vector<string> sense;

    int j=0;
    // loop over s
    // push each sentence onto sense
    for( int i=0; i<s.length(); i++){
        j=0;
        while(s.substr(i+j,1) != "." && i+j < s.length())
            j++;

        sense.push_back(s.substr(i,i+j));
        i += j;
    }
    return sense;
}


int main(){

    string sin,s_total;

    while(sin != "stop"){
        getline(cin,sin);
        s_total = s_total+sin;
    }

    cout << '\n' << s_total << '\n';
    cout << "has "<< count_words(s_total) << " words\n";
    cout << "has "<< count_sentences(s_total) << " sents\n";
    cout << "address of s_total " << &s_total << "\n";

    vector<string> v = sentence_vec(s_total);

    for(int i=0; i<v.size(); i++)
        cout << v[i] << '\n';


    return 0;
}
