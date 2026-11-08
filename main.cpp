//Maxwell Koegler | COMSC 210 | lab 33

#include "Car.h"
#include <deque>
#include <ctime>

const int N = 2;
const int L = 4;
const int T = 20;
const int EMP = 50;

void p(deque<Car>&);
void pa(deque<Car>[]);
void pay(deque<Car>[]);
void join(deque<Car>&, int);
void period(deque<Car>[]);


int main() {
    srand(time(0));
    deque<Car> d[L]; //car obj que
    for(int i = 0; i < L; i++) {
        for(int j = 0; j < N; j++) {
            d[i].push_back(Car()); //push back to d
        }
    }
    cout << "init que:" << endl;
    pa(d);
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

void pay(deque<Car>& d, int i) {
    cout << "lane " << i + 1 << "paid: ";
    d.front().print();
    d.pop_front();
}

void join(deque<Car>& d, int i) {
    d.push_back(Car());
    cout << "lane " << i +1 << " joined: ";
    d.back().print();
}

void period(deque<Car> d[]) {
    for(int i = 0; i < L; i++){
        int r = rand() % 100;
        
    }
}