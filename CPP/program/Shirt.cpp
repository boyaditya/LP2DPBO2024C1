/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <string>
#include "Clothing.cpp"

using namespace std;

class Shirt : public Clothing {
  private:
    string color;
    string sleeve_type;

  public:
    Shirt() {}

    string getColor() {
        return color;
    }

    void setColor(string color) {
        this->color = color;
    }

    string getSleeveType() {
        return sleeve_type;
    }

    void setSleeveType(string sleeve_type) {
        this->sleeve_type = sleeve_type;
    }

    ~Shirt() {}
};