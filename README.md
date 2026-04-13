# 🌡️ Arduino LM35 Temperature Monitor

Dự án đọc nhiệt độ từ cảm biến LM35 sử dụng vi điều khiển Arduino và gửi dữ liệu qua cổng Serial theo định dạng JSON.

## 🚀 Tính năng chính
* Đọc tín hiệu Analog từ 3 cảm biến LM35 (Kênh A0, A1, A2).
* Tự động quy đổi giá trị điện áp sang thang đo độ C.
* Xuất dữ liệu qua cổng Serial (Baudrate 9600) với chuẩn cấu trúc dữ liệu JSON để dễ dàng tích hợp với các ứng dụng máy tính (C#, Python, Web).

## 🛠️ Phần cứng sử dụng
* 1 x Board mạch Arduino UNO R3 (hoặc tương đương).
* 3 x Cảm biến nhiệt độ LM35.
* Dây cắm testboard.

## 💻 Hướng dẫn sử dụng
1. Clone repository này về máy: `git clone https://github.com/duybao011/Arduino_LM35_TempMonitor.git`
2. Mở file `firmware/LM35_TempReader/LM35_TempReader.ino` bằng Arduino IDE.
3. Kết nối board Arduino vào máy tính và chọn đúng cổng COM.
4. Bấm **Upload** mã nguồn.
5. Mở **Serial Monitor** (Ctrl + Shift + M) ở mức baudrate `9600` để xem kết quả trả về:
   ```json
   {"A0":25, "A1":26, "A2":25}

Thành viên nhóm
Sinh viên A: Đỗ Trần Duy Bảo - Quản lý code đọc tín hiệu.

Sinh viên B: Trần Khôi Nguyên - Xử lý cấu trúc dữ liệu JSON.