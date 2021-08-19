#include "class.hpp"
int main(){
    Car Mercedes("Mercedes-Benz", "G63", "AMG", "Elegante", "Black", 2020, 320, 6.30);
    Mercedes.setSalary(250000);

    Car BMW("MBW", "X7", "M7", "Elegante", "Blue", 2021, 300, 4.0);
    BMW.setSalary(185000);

    Car AUDI("AUDi", "A8", "Classic", "Sedan", "White", 2019, 360, 5.0);
    AUDI.setSalary(230000);

    Car Toyota("Toyota", "Prado", "4x4", "Elegante", "Black", 2020, 280, 4.6);
    Toyota.setSalary(78000);

    int x;
    cout <<"- Please Number -" << endl;
    cout <<"1. ..Mercedes-Benz -" << endl;
    cout <<"2. ..BNW -" << endl;
    cout <<"3. ..Audi -" << endl;
    cout <<"4. ..Toyota -" << endl;
    cin >> x;

    if(x==1){
        cout << " Name/ " << Mercedes.name << "\n Model/ " << Mercedes.model << "\n Class/ " << Mercedes.clas << "\n Style/ " << Mercedes.style << "\n Year/ " << Mercedes.year << "\n Speed/ " << Mercede\
s.speed << "\n Engineer/ " << Mercedes.matorLitr << "\n" << endl;
        cout << "Amount/ " << Mercedes.getSalary() << "$" << endl;
    }
    else if(x==2){
        cout << " Name/ " << BMW.name << "\n Model/ " << BMW.model << "\n Class/ " << BMW.clas << "\n Style/ " << BMW.style << "\n Year/ " << BMW.year << "\n Speed/ " << BMW.speed << "\n Engineer/ " << \
BMW.matorLitr << "\n" << endl;
        cout << "Amount/ " << BMW.getSalary() << "$" << endl;
    }
    else if(x==3){
        cout << " Name/ " << AUDI.name << "\n Model/ " << AUDI.model << "\n Class/ " << AUDI.clas << "\n Style/ " << AUDI.style << "\n Year/ " << AUDI.year << "\n Speed/ " << AUDI.speed << "\n Engineer/\
 " << AUDI.matorLitr << "\n" << endl;
        cout << "Amount/ " << AUDI.getSalary() << "$" << endl;
    }
    else if(x==2){
        cout << " Name/ " << BMW.name << "\n Model/ " << BMW.model << "\n Class/ " << BMW.clas << "\n Style/ " << BMW.style << "\n Year/ " << BMW.year << "\n Speed/ " << BMW.speed << "\n Engineer/ " << \
BMW.matorLitr << "\n" << endl;
        cout << "Amount/ " << BMW.getSalary() << "$" << endl;
}
    else {
        cout << " Name/ " << Toyota.name << "\n Model/ " << Toyota.model << "\n Class/ " << Toyota.clas << "\n Style/ " << Toyota.style << "\n Year/ " << Toyota.year << "\n Speed/ " << Toyota.speed << "\
\n Engineer/ " << Toyota.matorLitr << "\n" << endl;
        cout << "Amount/ " << Toyota.getSalary() << "$" << endl;
    }
    return 0;
}

