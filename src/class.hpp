#ifndef MATH_HPP
#define MATH_HPP


#include <iostream>

using namespace std;

class Car{
    private:
            int salary;
    public:
            string name;
            string model;
            string clas;
            string style;
            string color;

            int year;
            int speed;
            float matorLitr;

            Car(string x, string y, string z, string q, string k, int a, int b, float c);

            void setSalary(int g);
	    int getSalary();
};

#endif

