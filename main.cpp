//Maxwell Koegler | COMSC 210 | lab 32

#include "Car.h"
#include <deque>
#include <ctime>

const int N = 2;

void p(deque<Car>&);


int main() {
    srand(time(0));
    deque<Car> d;
    for(int i = 0; i < N; i++) {
        d.push_back(Car());
    }
    cout << "Init que:" << endl;
    p(d);

}

void p(deque<Car>& d) {
    for(auto& c : d) {
        cout << "     ";
        c.print();
    }
}