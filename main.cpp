//Maxwell Koegler | COMSC 210 | lab 32

#include "Car.h"
#include <deque>
#include <ctime>

const int N = 2;
const int L = 4;

void p(deque<Car>&);
void pa(deque<Car>[]);


int main() {
    srand(time(0));
    deque<Car> d; //car obj que
    for(int i = 0; i < N; i++) {
        d.push_back(Car()); //push back to d
    }
    cout << "Init que:" << endl;
    p(d);
    int t = 0;
    while(!d.empty()) {
        cout << endl << "Time: " << ++t << " Operation: ";
        if((rand() % 100) < 55) {
            cout << "Car paid: ";
            d.front().print();
            d.pop_front(); //remove front of que
        } else {
            Car c;
            d.push_back(c); //add to back
            cout << "Joined lane: ";
            c.print();
        }
        p(d);
    }
}

void p(deque<Car>& d) {
    for(auto& c : d) {
        cout << "     ";
        c.print(); //print
    }
}

void pa(deque<Car> d[]) {
    for(int i = 0; i < L; i++) {
        cout << "lane " << i + 1 << " que:" << endl;
        p(d[i]);
    }
}