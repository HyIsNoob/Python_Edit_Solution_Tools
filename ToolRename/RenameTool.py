import os
import glob

print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
print("\t\tChào mừng đến với chương trình ĐỔI TÊN")
print("\t\t\tby Khang Hy & Luu Tri")  # xóa dòng này là tệ lắm!
print("\t\t(Hoạt động cực tốt với ai muốn đổi tên Project trong VS)")
print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

while True:
    choice = input(
        "Bạn muốn đổi tên (file, folder) bên ngoài hay đổi tên (file, folder) bên trong một thư mục con?\n(1 bên ngoài, 2 bên trong): "
    )

    if choice == "1":
        path = input("Nhập đường dẫn file: ")
        namebeo = input(
            "Nhập phần chung (để trống nếu đổi tất cả các file có chung dạng): "
        )
        namekobeo = input("Nhập định dạng (.gì đó, nếu là folder thì để trống): ")
        name = input("Nhập tên mới: ")

        partern = rf"{path}\\" + f"{namebeo}" + f"*{namekobeo}"
        result = glob.glob(partern)

        count = 106
        for file_name in result:
            old_name = file_name
            new_files_name = f"{name}{count:03}"
            new_name = rf"{path}\\" + new_files_name + f"{namekobeo}"
            os.rename(old_name, new_name)
            count = count + 1
        if namekobeo != "":
            print(
                "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            )
            print(
                f"\t\tĐã hoàn thành việc đổi các file {namekobeo} từ {namebeo} thành {name}"
            )
            print(
                "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            )
        else:
            print(
                "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            )
            print(f"\t\tĐã hoàn thành việc đổi các folder {namebeo} thành {name}")
            print(
                "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            )

        if namekobeo == "":
            answer = input("Bạn có muốn đổi file trong thư mục không? (yes, no): ")

            if answer.lower() == "yes":
                root_folder = path
                maxx = int(input("Nhập số lượng folder: "))
                folname = name
                namechung = input("Nhập phần chung của file: ")
                nameduoi = input("Nhập định dạng (.gì đó): ")
                namemoi = input("Nhập tên file mới: ")

                maxxreal = maxx + 1
                for i in range(1, maxxreal):
                    folder_name = (
                        f"{folname}{i:03}"  # Tạo tên thư mục con ví dụ: 'Bai 010'
                    )
                    folder_path = os.path.join(root_folder, folder_name)

                    # Kiểm tra xem thư mục con tồn tại
                    if os.path.exists(folder_path):
                        # Tạo tên file cần đổi
                        old_file_name = f"{namechung}{i:03}{nameduoi}"  # Ví dụ: 'Bai 10.vcxproj.user'
                        new_file_name = f"{namemoi}{i:03}{nameduoi}"  # Ví dụ: 'Bai 010.vcxproj.user'

                        # Đường dẫn tới file hiện tại
                        current_file_path = os.path.join(folder_path, old_file_name)

                        # Đường dẫn tới file mới
                        new_file_path = os.path.join(folder_path, new_file_name)

                        # Đổi tên file
                        os.rename(current_file_path, new_file_path)

                print(
                    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                )
                print(
                    f"\t\tĐã đổi tên các file có tên {namebeo} thành {name} thành công"
                )
                print(
                    "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
                )
        else:
            print(
                "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            )
            print(
                f"\t\tĐã hoàn thành việc đổi các file {namekobeo} từ {namebeo} thành {name}"
            )
            print(
                "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
            )

    elif choice == "2":
        path = input("Nhập đường dẫn thư mục gốc: ")
        name = input("Nhập phần chung của thư mục: ")
        root_folder = path
        maxx = int(input("Nhập số lượng folder cần đổi: "))
        folname = name
        namechung = input("Nhập phần chung của file: ")
        nameduoi = input("Nhập định dạng (.gì đó): ")
        namemoi = input("Nhập tên file mới: ")

        maxxreal = maxx + 1
        for i in range(106, maxxreal):
            folder_name = f"{folname}{i:03}"  # Tạo tên thư mục con ví dụ: 'Bai 010'
            folder_path = os.path.join(root_folder, folder_name)

            # Kiểm tra xem thư mục con tồn tại
            if os.path.exists(folder_path):
                # Tạo tên file cần đổi
                old_file_name = f"{namechung}{i:03}{nameduoi}"  # Ví dụ: 'Bai 10.vcxproj.user, bỏ số :03 là dc'
                new_file_name = (
                    f"{namemoi}_{i:03}{nameduoi}"  # Ví dụ: 'Bai 010.vcxproj.user'
                )

                # Đường dẫn tới file hiện tại
                current_file_path = os.path.join(folder_path, old_file_name)

                # Đường dẫn tới file mới
                new_file_path = os.path.join(folder_path, new_file_name)

                # Đổi tên file
                os.rename(current_file_path, new_file_path)

        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        print(f"\t\tĐã đổi tên các file thành công")
        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

    do_again = input("Bạn có muốn làm lại? (yes, no): ")
    if do_again.lower() != "yes":
        print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        print("\t\t\tCảm ơn đã sử dụng")
        input("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
        break
