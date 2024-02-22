/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <string>
#include "Product.cpp"

using namespace std;

class Clothing : public Product {
  private:
    string size;
    string material;
    string gender;

  public:
    Clothing() {
    }

    string getSize() {
        return size;
    }

    void setSize(string size) {
        this->size = size;
    }

    string getMaterial() {
        return material;
    }

    void setMaterial(string material) {
        this->material = material;
    }

    string getGender() {
        return gender;
    }

    void setGender(string gender) {
        this->gender = gender;
    }

    ~Clothing() {
    }
};