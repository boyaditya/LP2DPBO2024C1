<!--
Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
soal Latihan Praktikum 2 dalam mata kuliah DPBO
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin 
-->

<?php

require("Clothing.php");

class Shirt extends Clothing
{
    // properties
    private $color;
    private $sleeve_type;

    // constructor
    public function __construct($idProduct = "", $name = "", $brand = "", $price = "", $size = "", $material = "", $gender = "", $color = "", $sleeve_type = "")
    {
        parent::__construct($idProduct, $name, $brand, $price, $size, $material, $gender);
        $this->color = $color;
        $this->sleeve_type = $sleeve_type;
    }

    // getter and setter
    public function getColor()
    {
        return $this->color;
    }

    public function setColor($color)
    {
        $this->color = $color;
    }

    public function getSleeveType()
    {
        return $this->sleeve_type;
    }

    public function setSleeveType($sleeve_type)
    {
        $this->sleeve_type = $sleeve_type;
    }

    // destructor
    public function __destruct()
    {
    }
}
