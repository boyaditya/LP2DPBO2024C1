/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include <string>

using namespace std;

class Product {
  private:
    string idProduct;
    string name;
    string brand;
    string price;

  public:
    Product() {
    }

    string getIdProduct() {
        return idProduct;
    }

    void setIdProduct(string idProduct) {
        this->idProduct = idProduct;
    }

    string getName() {
        return name;
    }

    void setName(string name) {
        this->name = name;
    }

    string getBrand() {
        return brand;
    }

    void setBrand(string brand) {
        this->brand = brand;
    }

    string getPrice() {
        return price;
    }

    void setPrice(string price) {
        this->price = price;
    }

    ~Product() {
    }
};