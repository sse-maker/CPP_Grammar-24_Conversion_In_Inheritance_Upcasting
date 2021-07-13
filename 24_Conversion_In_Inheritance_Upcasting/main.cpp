//
//  main.cpp
//  24_Conversion_In_Inheritance_Upcasting
//
//  Created by 세광 on 2021/07/13.
//

// Upcasting: 자식 class 포인터 -> 부모 class 포인터로 형변환을 해주는 과정 (묵시적)

#include <iostream>

using namespace std;

class Animal {
public:
    float xpos = 1;
    float ypos = 2;
};

class FlyingAnimal : public Animal {
public:
    float zpos = 3;
};

void printAnimals(Animal **a, int n) {
    for (int i = 0; i < 10; i++) {
        cout << "(" << a[i]->xpos << ", " << a[i]->ypos << ")" << endl;
    }
}

int main() {
    Animal **a = new Animal*[10];
    for (int i = 0; i < 10; i++) a[i] = new FlyingAnimal;
    
    printAnimals(a, 10);
    
    for (int i = 0; i < 10; i++) delete a[i];
    delete [] a;
}
