# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Product import Product


class Clothing(Product):
    # property
    __size = ""
    __material = ""
    __gender = ""

    def __init__(
        self, idProduct="", name="", brand="", price="", size="", material="", gender=""
    ):
        super().__init__(idProduct, name, brand, price)
        self.__size = size
        self.__material = material
        self.__gender = gender

    def get_size(self):
        return self.__size

    def set_size(self, size):
        self.__size = size

    def get_material(self):
        return self.__material

    def set_material(self, material):
        self.__material = material

    def get_gender(self):
        return self.__gender

    def set_gender(self, gender):
        self.__gender = gender
