<!--
Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
-->


<?php
require("Shirt.php");
require("Tabel.php");

// instansiasi objek shirt
$shirt1 = new Shirt("1", "Kerenz", "BOYS", "150000", "L", "Cotton", "Male", "Black", "Long");
$shirt2 = new Shirt("2", "Gokiel", "BOYS", "180000", "M", "Corduroy", "Male", "Navy", "Long");
$shirt3 = new Shirt("3", "Wows", "OMAGA", "230000", "L", "Cotton", "Female", "Maroon", "Short");


// membuat array objek shirt
$shirt = array($shirt1, $shirt2, $shirt3);

// membuat array isi
$isi = array();

// mengisi nama header
$isi[0] = array("ID Product", "Name", "Brand", "Price", "Size", "Material", "Gender", "Color", "Sleeve Type");

// mengisi data shirt ke array
for ($i = 0; $i < count($shirt); $i++) {
    $isi[$i + 1] = array($shirt[$i]->getIdProduct(), $shirt[$i]->getName(), $shirt[$i]->getBrand(), $shirt[$i]->getPrice(), $shirt[$i]->getSize(), $shirt[$i]->getMaterial(), $shirt[$i]->getGender(), $shirt[$i]->getColor(), $shirt[$i]->getSleeveType());
}

// instansiasi objek tabel
$tabel = new Tabel(count($shirt) + 1, 9);
// menampilkan isi tabel
$tabel->buatTabel($isi);
