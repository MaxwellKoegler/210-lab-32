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
    deque<Car> d[L]; //car obj que
    for(int i = 0; i < L; i++) {
        for(int j = 0; j < N; j++) {
            d[i].push_back(Car()); //push back to d
        }
    }
    pa(d);
    cout << endl << "test: pop front l1, move rear l3 to l2";
    d[0].pop_front();
    d[1].push_back(d[2].back());
    d[2].pop_back();
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