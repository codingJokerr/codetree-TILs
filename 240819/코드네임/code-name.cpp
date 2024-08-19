#include <iostream>
#include <string>
using namespace std;

class Agent {
public:
    string name;
    int score;

    Agent(string name="", int score=0) {
        this->name = name;
        this->score = score;
    }
};

int main() {
    Agent agents[5];

    string name;    int score;
    string Mname="";   int Mscore=101;
    for(int i=0; i<5; i++) {
        cin>>name>>score;
        agents[i] = Agent(name, score);

        if(Mscore>score){
            Mscore = score;
            Mname = name;
        }
    }

    cout<<Mname<<" "<<Mscore;
}