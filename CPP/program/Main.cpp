/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

#include "Shirt.cpp"
#include "Tabel.cpp"
#include <bits/stdc++.h>

int main() {
    vector<Shirt> listShirt; // vector untuk menyimpan data shirt
    string idProduct, name, brand, price, size, material, gender, color, sleeve_type; // variabel untuk menyimpan data shirt

    cout << "Please input shirt data\n";

    // input data shirt
    for (int i = 0; i < 3; i++) {
        cout << "----- Shirt " << (i + 1) << " -----\n";
        cout << "ID Product    : ";
        cin >> idProduct;
        cout << "Name          : ";
        cin >> name;
        cout << "Brand         : ";
        cin >> brand;
        cout << "Price         : ";
        cin >> price;
        cout << "Size          : ";
        cin >> size;
        cout << "Material      : ";
        cin >> material;
        cout << "Gender        : ";
        cin >> gender;
        cout << "Color         : ";
        cin >> color;
        cout << "Sleeve Type   : ";
        cin >> sleeve_type;
        cout << "\n";

        // membuat objek shirt
        Shirt shirt;

        // set data objek shirt
        shirt.setIdProduct(idProduct);
        shirt.setName(name);
        shirt.setBrand(brand);
        shirt.setPrice(price);
        shirt.setSize(size);
        shirt.setMaterial(material);
        shirt.setGender(gender);
        shirt.setColor(color);
        shirt.setSleeveType(sleeve_type);

        // menyimpan objek shirt ke dalam vector
        listShirt.push_back(shirt);
    }

    // membuat array 2 dimensi untuk menampung data shirt
    string isi[listShirt.size() + 1][9];

    // isi nama kolon
    isi[0][0] = "ID Product";
    isi[0][1] = "Name";
    isi[0][2] = "Brand";
    isi[0][3] = "Price";
    isi[0][4] = "Size";
    isi[0][5] = "Material";
    isi[0][6] = "Gender";
    isi[0][7] = "Color";
    isi[0][8] = "Sleeve Type";

    // isi data shirt
    int i = 1;
    for (Shirt shirt : listShirt) {
        isi[i][0] = shirt.getIdProduct();
        isi[i][1] = shirt.getName();
        isi[i][2] = shirt.getBrand();
        isi[i][3] = shirt.getPrice();
        isi[i][4] = shirt.getSize();
        isi[i][5] = shirt.getMaterial();
        isi[i][6] = shirt.getGender();
        isi[i][7] = shirt.getColor();
        isi[i][8] = shirt.getSleeveType();
        i++;
    }

    cout << "        =========================== Shirt Data List ===========================\n";

    // membuat objek tabel
    Tabel tabel;
    // set baris dan kolom tabel
    tabel.setBaris(listShirt.size() + 1);
    tabel.setKolom(9);
    // membuat tabel
    tabel.buatTabel(isi);

    return 0;
}