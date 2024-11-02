import os

# Nhập đường dẫn đến thư mục gốc
base_path = input("Nhập đường dẫn đến thư mục gốc: ")

# Nhập tên thư mục bạn muốn tạo
folder_name = input("Nhập tên thư mục bạn muốn tạo: ")

# Nhập số lượng thư mục bạn muốn tạo
num_folders = int(input("Nhập số lượng thư mục bạn muốn tạo: "))

# Lặp qua từng số lượng thư mục và tạo chúng
for i in range(1, num_folders + 1):
    folder_name_i = f"{folder_name} {i}"
    folder_path = os.path.join(base_path, folder_name_i)
    
    # Kiểm tra xem thư mục đã tồn tại chưa
    if not os.path.exists(folder_path):
        os.mkdir(folder_path)
        print(f"Đã tạo thư mục: {folder_path}")
    else:
        print(f"Thư mục {folder_path} đã tồn tại.")

input(f"Đã tạo thành công {num_folders} thư mục.")

