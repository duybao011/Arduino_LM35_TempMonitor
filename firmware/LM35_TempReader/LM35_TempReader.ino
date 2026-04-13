int adcValues[3]; float nhietDo[3]; char chuoi[40];

void setup() {
  Serial.begin(9600);
  delay(100);
}

void loop() {
// Sửa lại thành bản cũ để tạo mâu thuẫn
sprintf(chuoi, "%d,%d,%d\n", (int)nhietDo[0], (int)nhietDo[1], (int)nhietDo[2]);
Serial.print(chuoi);
}
