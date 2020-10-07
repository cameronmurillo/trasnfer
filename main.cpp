#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Area
{
public:
    virtual void formula()
    {
        cout << "Your formula is:" << endl;
    }

};

class Triangle : public Area{
    virtual void formula()
    {
        cout << "1/2 * B * H" << endl;
    }
};
class Circle : public Area{

};
class Square : public Area{

};



void menu();
void menuFunction();

int main() {
    menuFunction();
    return 0;
}

void menu()
{
    cout << "----------------------" << endl;
    cout << "Welcome to a Area formula generator for shape." << endl;
    cout << "If you ever forget a formula for area, return here!" << endl;
    cout << "To continue, please press choose the corresponding letter" << endl;
    cout << "T) Triangle " << endl;
    cout << "S) Square " << endl;
    cout << "C) Circle " << endl;
    cout << "Q) Quit" << endl;
    cout << "----------------------" << endl;
}
void menuFunction()
{
    bool continueLoop = true;
    while (continueLoop) {
            menu();
            char menuChoice;
            cin >> menuChoice;
            switch (toupper(menuChoice)) {
                case 't':
                    Area shape1;
                    Triangle myTriangle;
                    
                    Area *p1;
                    Triangle *p2;
                    
                    p1 = &shape1;
                    p2 = &myTriangle;
                    
                    
                    return;
                case 's':
                    Square mySquare();
                    return;
                case 'c':
                    Circle myCircle();
                    return;
                case 'Q':
                    continueLoop = false;
                    cout << "goodbye" << endl;
                    break;
                default:
                    continueLoop = false;
                    break;
            }
        }
    }
