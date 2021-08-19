#include "class.hpp"

void Car::setSalary(int g){
                salary = g;
            }
int Car::getSalary(){
                return salary;
            }

Car::Car(string x, string y, string z, string q, string k, int a, int b, float c){
    name = x;
    model = y;
    clas = z;
    style = q;
    color = k;
    year = a;
    speed = b;
    matorLitr = c;
}

