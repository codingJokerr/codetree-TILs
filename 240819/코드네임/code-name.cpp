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
    for(int i=0; i<5; i++) {
        cin>>name>>score;
        agents[i] = Agent(name, score);
    }

    int min_idx = 0;
    for(int i=1; i<5; i++) {
        if(agents[min_idx].score > agents[i].score)
            min_idx = i;
    }

    cout<<agents[min_idx].name<<" "<<agents[min_idx].score;
}