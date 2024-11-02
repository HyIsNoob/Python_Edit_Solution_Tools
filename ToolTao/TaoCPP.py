import os

# Đường dẫn tới thư mục gốc

base_directory = input("Nhập đường dẫn: ")

# Lặp qua từ Bai001 đến Bai167
maxx = int(input("Nhập số lượng: "))
for i in range(1, maxx+1):
    folder_name = f"Bai{i:03d}"
    folder_path = os.path.join(base_directory, folder_name)
    
    # Tạo thư mục nếu nó không tồn tại
    if not os.path.exists(folder_path):
        os.makedirs(folder_path)
    
    # Tạo tệp .cpp trong thư mục và viết nội dung mẫu vào tệp
    cpp_file_path = os.path.join(folder_path, f"{folder_name}.cpp")
    with open(cpp_file_path, "w") as cpp_file:
        cpp_file.write("#include <iostream>\n\nint main() {\n    std::cout << \"Hello from " + folder_name + ".cpp!\" << std::endl;\n    return 0;\n}\n")

print("Đã tạo thành công 167 thư mục và tệp .cpp tương ứng.")
