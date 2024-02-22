# Saya Boy Aditya Rohmaulana NIM 2203488 mengerjakan
# soal Latihan Praktikum 2 dalam mata kuliah DPBO
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

from Shirt import Shirt
from Tabel import Tabel

list_shirt = []

print("Please input shirt data\n")

# input data
for i in range(3):
    print("----- Shirt " + str(i + 1) + " -----")
    id_product = input("ID Product    : ")
    name = input("Name          : ")
    brand = input("Brand         : ")
    price = input("Price         : ")
    size = input("Size          : ")
    material = input("Material      : ")
    gender = input("Gender        : ")
    color = input("Color         : ")
    sleeve_type = input("Sleeve Type   : ")
    print("")

    # buat objek
    shirt = Shirt()

    # set properti objek
    shirt.set_idProduct(id_product)
    shirt.set_name(name)
    shirt.set_brand(brand)
    shirt.set_price(price)
    shirt.set_size(size)
    shirt.set_material(material)
    shirt.set_gender(gender)
    shirt.set_color(color)
    shirt.set_sleeve_type(sleeve_type)

    # tambahkan objek ke list
    list_shirt.append(shirt)

isi = [
    [
        "ID Product",
        "Name",
        "Brand",
        "Price",
        "Size",
        "Material",
        "Gender",
        "Color",
        "Sleeve Type",
    ]
]

# isi tabel dari listAnggota
for shirt in list_shirt:
    isi.append(
        [
            shirt.get_idProduct(),
            shirt.get_name(),
            shirt.get_brand(),
            shirt.get_price(),
            shirt.get_size(),
            shirt.get_material(),
            shirt.get_gender(),
            shirt.get_color(),
            shirt.get_sleeve_type(),
        ]
    )

tabel = Tabel(len(list_shirt) + 1, 9)
# buat tabel
tabel.buat_tabel(isi)
