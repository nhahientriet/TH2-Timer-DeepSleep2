TH2 - Timer, Non-blocking và Deep Sleep

Họ tên: Phan Công Tuấn Anh

MSSV: 25119077

Bài 1: So sánh delay(), millis() và Hardware Timer

a)delay()

Dễ sử dụng.
Chương trình bị blocking.
Trong thời gian delay không thực hiện được tác vụ khác.

b)millis()

Non-blocking.
Có thể thực hiện nhiều tác vụ cùng lúc.
Phù hợp các ứng dụng IoT thông thường.

c)Hardware Timer

Hoạt động bằng ngắt (interrupt).
Độ chính xác cao hơn.
Không phụ thuộc vòng lặp loop().

d)Kết luận

delay() đơn giản nhưng gây blocking.

millis() phù hợp cho hầu hết các ứng dụng IoT.

Hardware Timer phù hợp các tác vụ yêu cầu thời gian chính xác.

Bài 2: Deep Sleep

a)Mục tiêu

ESP32 đi vào chế độ Deep Sleep và tự thức dậy bằng Timer.

b)Quan sát

Thiết bị chuyển sang Deep Sleep.
Sau khoảng thời gian cài đặt sẽ tự thức dậy.
Wakeup source là Timer.

c)Kết luận

Deep Sleep giúp giảm đáng kể điện năng tiêu thụ cho các hệ thống IoT dùng pin.
