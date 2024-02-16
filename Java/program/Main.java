/*Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.*/

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        List<Shirt> listShirt = new ArrayList<>(); // list untuk menampung banyak objek dari kelas Shirt

        String idProduct, name, brand, price, size, material, gender, color, sleeve_type; // properties
        System.out.println("Please input shirt data\n");

        // input data
        for (int i = 0; i < 3; i++) {
            System.out.println("----- Shirt " + (i + 1) + " -----");
            System.out.print("ID Product    : ");
            idProduct = scanner.next();
            System.out.print("Name          : ");
            name = scanner.next();
            System.out.print("Brand         : ");
            brand = scanner.next();
            System.out.print("Price         : ");
            price = scanner.next();
            System.out.print("Size          : ");
            size = scanner.next();
            System.out.print("Material      : ");
            material = scanner.next();
            System.out.print("Gender        : ");
            gender = scanner.next();
            System.out.print("Color         : ");
            color = scanner.next();
            System.out.print("Sleeve Type   : ");
            sleeve_type = scanner.next();
            System.out.println("");

            // buat objek
            Shirt shirt = new Shirt();

            // set properti objek
            shirt.setIdProduct(idProduct);
            shirt.setName(name);
            shirt.setBrand(brand);
            shirt.setPrice(price);
            shirt.setSize(size);
            shirt.setMaterial(material);
            shirt.setGender(gender);
            shirt.setColor(color);
            shirt.setSleeveType(sleeve_type);

            // tambahkan objek ke list
            listShirt.add(shirt);
        }

        // buat array 2 dimensi untuk menampung data
        String[][] isi = new String[listShirt.size() + 1][9];

        // isi nama kolom
        isi[0][0] = "ID Product";
        isi[0][1] = "Name";
        isi[0][2] = "Brand";
        isi[0][3] = "Price";
        isi[0][4] = "Size";
        isi[0][5] = "Material";
        isi[0][6] = "Gender";
        isi[0][7] = "Color";
        isi[0][8] = "Sleeve Type";

        // isi array dengan data dari list objek
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

        System.out.println("        =========================== Shirt Data List ===========================");
        
        // buat objek tabel
        Tabel tabel = new Tabel();
        // set baris dan kolom
        tabel.setBaris(listShirt.size() + 1);
        tabel.setKolom(9);
        // buat tabel
        tabel.buatTabel(isi);

        scanner.close();
    }
}
