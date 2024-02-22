# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin


class Product:
    __idProduct = ""
    __name = ""
    __brand = ""
    __price = ""

    def __init__(self, idProduct="", name="", brand="", price=""):
        self.__idProduct = idProduct
        self.__name = name
        self.__brand = brand
        self.__price = price

    def get_idProduct(self):
        return self.__idProduct

    def set_idProduct(self, idProduct):
        self.__idProduct = idProduct

    def get_name(self):
        return self.__name

    def set_name(self, name):
        self.__name = name

    def get_brand(self):
        return self.__brand

    def set_brand(self, brand):
        self.__brand = brand

    def get_price(self):
        return self.__price

    def set_price(self, price):
        self.__price = price
