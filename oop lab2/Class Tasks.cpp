#include <iostream>
using namespace std;


class ANIMAL {
public:
    
    virtual void makeSound() = 0;
};


class lion : public ANIMAL {
public:
    void makeSound() override {
        cout << "ghwaaaaaa..." << endl;
    }
};

class elephant : public ANIMAL {
public:
    void makeSound() override {
        cout << "trumpet..." << endl;
    }
};

class monkey : public ANIMAL {
public:
    void makeSound() override {
        cout << "aaahh eeeehhh..." << endl;
    }
};

class bird : public ANIMAL {
public:
    void makeSound() override {
        cout << "trrr trrr..." << endl;
    }
};


void hearSound(ANIMAL& animal) {
    animal.makeSound();
}

int main() {
    lion L;
    elephant E;
    monkey M;
    bird B;

    hearSound(L);
    hearSound(E);
    hearSound(M);
    hearSound(B);

    return 0;
}
