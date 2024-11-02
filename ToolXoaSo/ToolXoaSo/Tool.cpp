#include <iostream>
#include <fstream>
#include <string>

int main() {
	// Mở file input
	std::ifstream inputFile("input.txt");

	// Kiểm tra xem file có mở thành công hay không
	if (!inputFile.is_open()) {
		std::cerr << "Không thể mở file input.txt" << std::endl;
		return 1; // Kết thúc chương trình với mã lỗi 1
	}

	// Mở file output
	std::ofstream outputFile("output.txt");

	// Kiểm tra xem file có mở thành công hay không
	if (!outputFile.is_open()) {
		std::cerr << "Không thể mở file output.txt" << std::endl;
		return 1; // Kết thúc chương trình với mã lỗi 1
	}

	std::string line;

	// Đọc từng dòng từ file input
	while (std::getline(inputFile, line)) {
		// Kiểm tra điều kiện để quyết định xem có in vào file output hay không
		if (line.size() >= 6 && std::isdigit(line[0]) && std::isdigit(line[1]) &&
			std::isdigit(line[2]) && std::isdigit(line[3]) && std::isdigit(line[4]) &&
			line[5] == '.') {
			// In dòng vào file output
			outputFile << line << '\n';
		}
	}

	// Đóng file
	inputFile.close();
	outputFile.close();

	std::cout << "Quá trình hoàn thành. Kết quả đã được ghi vào file output.txt" << std::endl;

	return 0; // Kết thúc chương trình với mã lỗi 0 (không có lỗi)
}
