# 🏠 Hệ thống AIoT Smart Home Giám sát Người cao tuổi

## 1. Mô tả (Description)
Dự án này là một hệ thống AIoT dành cho nhà thông minh, tập trung vào việc theo dõi và giám sát an toàn cho người cao tuổi. Hệ thống thu thập dữ liệu từ các cảm biến môi trường và chuyển động, phân tích hành vi bất thường, và gửi cảnh báo khẩn cấp theo thời gian thực để đảm bảo an toàn cho người sử dụng.

## 2. Tính năng (Features)
- 🚶‍♂️ **Theo dõi chuyển động:** Sử dụng cảm biến PIR để phát hiện sự hiện diện và hoạt động.
- 🔐 **Kiểm soát truy cập:** Tích hợp module RFID để nhận diện người ra vào.
- 📊 **Giám sát thời gian thực:** Giao diện dashboard trực quan hiển thị dữ liệu hệ thống.
- ⚠️ **Cảnh báo thông minh:** Tự động phát hiện các hành vi bất thường và gửi thông báo khẩn cấp.

## 3. Phần cứng (Hardware Components)
Dưới đây là danh sách các thiết bị phần cứng được sử dụng trong dự án, bao gồm cả mạch PCB tùy chỉnh:

| STT | Tên Linh Kiện | Số lượng | Chức năng chính |
|:---:|:---|:---:|:---|
| 1 | Vi điều khiển ESP32 | 1 | Xử lý trung tâm, kết nối WiFi/MQTT |
| 2 | Cảm biến chuyển động PIR | 2 | Phát hiện chuyển động trong phòng |
| 3 | Module đọc thẻ RFID | 1 | Xác thực quyền truy cập |
| 4 | Mạch in Custom PCB (FR4) | 1 | Kết nối vật lý các linh kiện hệ thống |

## 4. Cấu trúc thư mục (Directory Structure)
```text
AIoT-SmartHome/
├── docs/                 # Tài liệu dự án và báo cáo
├── hardware/             # File thiết kế phần cứng (SolidWorks, file Gerber PCB)
├── src/                  # Mã nguồn chính cho ESP32
│   ├── main.cpp          # Chương trình khởi chạy
│   └── sensors.h         # Thư viện giao tiếp cảm biến
└── README.md             # File thông tin dự án
