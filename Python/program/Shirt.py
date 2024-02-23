# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Clothing import Clothing


class Shirt(Clothing):
    __color = ""
    __sleeve_type = ""

    def __init__(
        self,
        idProduct="",
        name="",
        brand="",
        price="",
        size="",
        material="",
        gender="",
        color="",
        sleeve_type="",
    ):
        super().__init__(idProduct, name, brand, price, size, material, gender)
        self.__color = color
        self.__sleeve_type = sleeve_type

    def get_color(self):
        return self.__color

    def set_color(self, color):
        self.__color = color

    def get_sleeve_type(self):
        return self.__sleeve_type

    def set_sleeve_type(self, sleeve_type):
        self.__sleeve_type = sleeve_type
