# Blynk-PIR
Langkah-Langkah:<br>
1.Persiapkan alat dan bahan yang akan digunakan <br>
2.Mendownload aplikasi Blynk di play store.<br>
3.Membuat akun baru Blynk dengan meregister,Masukan Email dan Password&Konfirmasi Password<br>
4.Setelah Register berhasil,ceklah inbox email kalian untuk <br>
5.Setelah selesai meregister akun,buatlah project baru,Isilah “Project Name” sesuai keinginan anda,Pilihlah Device “ESP8266” dan create project.<br>
6.Ceklah inbox kalian untuk mengkonfirmasi pembuatan akun.<br>
7.Setelah pembuatan akun selesai,buatlah project baru.<br>
8.Di settings project tersebut,Masukan project nama sesuai yang kalian inginkan,select tipe modul ESP8266,dengan Connection Type Wi-Fi.<br>
9.Setelah project dibuat,akan ada notifikasi bahwa kode auth sudah dikirim ke email kalian,bukalah inbox kalian dan cek apabila kode telah dikirim karena kode ini akan dibutuhkan nanti. <br>
10.Masukan lah modul modul Menu,Value,Timer,Tombol,Slider,Notifikasi,RTC dan LED sesuai tampilan gambar dibawah.<br>

![image](https://user-images.githubusercontent.com/81090239/143434917-678a7095-8876-4e97-b2c4-52323cd972d1.png)

Gunakanlah settings berikut untuk modul modul tersebut.
![image](https://user-images.githubusercontent.com/81090239/143434948-888c145f-5174-4599-b2f9-023db95a1c23.png)

Setelah selesai,Kliklah tombol segitiga diatas.<br>
Settings applikasi selesai,Sekarang settinglah software dan modul ESP8266 dengan prosedur berikut<br>
1.Download dan installah applikasi ArduinoIDE dari arduino.cc <br>
2.Bukalah applikasi arduino dan klik file>Prefrence<br>
3.Setelah itu,masukan link "http://arduino.esp8266.com/stable/package_esp8266com_index.json" ke Additional Boards Managers URL.<br>
4.tutuplah menu tersebut dan navigasi ke menu Tools>Boards>Boards Manager.<br>
5.Install-lah modul esp8266 ke arduino.<br>
6.Setelah install selesai,tutuplah menu tersebut dan bukalah code sensor di PIR/PIR.ino <br>
7.Hubungkan modul ESP8266 ke device kalian.<br>
8.Masukan nama wifi kalian dan password wifi di tempat yang disediakan.<br>
9.ambillah kode auth di email kalian dan masukan ke kolom Auth Code.<br>
10.Uploadlah kode tersebut ke modul esp8266.<br>

Setting modul esp8266 selesai.Sekarang dilanjutkan dengan proses pembuatan Alaram tersebut.<br>
1.Siapkan casing dan masukan modul PIR ke casing tersebut.<br>
2.Masukan modul LED ke case dengan notch dibagian bawah.<br>
3.Lemlah Buzzer ke Casing.<br>
4.Hubungkanlah semua kabel sesuai rangkaian.<br>
5.Hubungkan Kabel Power (5V)-(Merah) dengan Kabel merah yang lain dan tambahkan kabel untuk mempower Alaram.<br>
6.Lakukan hal yang sama untuk kabel ground,hubungkanlah kabel ground 1 dengan yang lain dan tambahkan kabel lagi untuk mempower Alaram.<br>
7.Solderlah kabel Power(merah) Ke VCC modul ESP8266 dan Ground(hitam) ke GND.<br>
8.Hubungkanlah Pin sensor PIR ke modul ESP8266 (Defaultnya GPIO13)<br>
9.Hubungkanlah pin LED ke Modul ESP8266 (Defaultnya GPIO2)<br>
10.Hubungkanlah pin Buzzer ke modul ESP8266 (Defaultnya GPIO4)<br>

Alaram PIR sudah selesai.<br>

Rangkaian : <br>
![image](https://user-images.githubusercontent.com/81090239/143435548-1402ca49-3b4d-459d-a9da-5c56405b5786.png)

