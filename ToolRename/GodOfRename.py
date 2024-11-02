import glob
import os

namebeo = input("Nhập phần chung: ")
namekobeo = input("Nhập định dạng (.gì đó): ")
name = input("Nhập name: ")
path = input("Nhập đường dẫn file: ")


partern = rf"{path}\\" + f"{namebeo}" + f"*{namekobeo}"
result = glob.glob(partern)


count = 1
for file_name in result:
    old_name = file_name
    new_files_name = f"{name} {count:03}"
    new_name = rf"{path}\\" + new_files_name + f"{namekobeo}"
    os.rename(old_name, new_name)

    count = count + 1
    
res = glob.glob(rf"{path}\\" + name + f"*{namekobeo}")
for file in res:
    print(file)
input("Nhấn Enter để tiếp tục...")