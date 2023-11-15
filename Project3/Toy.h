#pragma once
#include "Good.h"
namespace toy {
    class Toy :
        public good::Good
    {
    protected:
        string material;
    public:
        Toy();
        Toy(string material, string name, string author, double price, int age);
        ~Toy();

        void setMaterial(string material);

        string getMaterial()const;

        void show()const;
        string type()const;
        void save(ofstream& file)const;
        void load(ifstream& file);
    };

}
