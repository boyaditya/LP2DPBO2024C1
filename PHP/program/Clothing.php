<!--
Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
-->

<?php

require("Product.php");

class Clothing extends Product
{
    // properties
    private $size;
    private $material;
    private $gender;

    // constructor
    public function __construct($idProduct = "", $name = "", $brand = "", $price = "", $size = "", $material = "", $gender = "")
    {
        parent::__construct($idProduct, $name, $brand, $price);
        $this->size = $size;
        $this->material = $material;
        $this->gender = $gender;
    }

    // getter and setter
    public function getSize()
    {
        return $this->size;
    }

    public function setSize($size)
    {
        $this->size = $size;
    }

    public function getMaterial()
    {
        return $this->material;
    }

    public function setMaterial($material)
    {
        $this->material = $material;
    }

    public function getGender()
    {
        return $this->gender;
    }

    public function setGender($gender)
    {
        $this->gender = $gender;
    }

    public function __destruct()
    {
    }
}
