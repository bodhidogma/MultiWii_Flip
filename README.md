#  MultiWii FLIP Flight Controller

From http://www.readytoflyquads.com/flip-mwc-flight-controller

This Repo consists of both the [MultiWii](http://www.multiwii.com/) source code as well as some variations of the MWC FLIP configuration variants.
[MultiWii versions](https://code.google.com/archive/p/multiwii/):
* MultiWii 2.3
* MultiWii 2.3

Mileage may vary, but I put this repo together to better understand MWC code as well as exactly what the differences were between FLIP versions.
All source distributions from RTF Quads come as zip files with all sources and do not directly identify the specific changes for each setup.

I subsequently tagged each variation according to zip archive as appropriate for:
* Flip 1.5
* Flip 1.5 - pimped (with baro)
* Flip 2.0

To rebuild the software with Arduino, select

> * Tools -> Board -> Arduino Duemilanove
> * ATmega328 (FLIP) or MEGA for mega pro boards

Update the file [`config.h`](https://github.com/bodhidogma/MultiWii_Flip/blob/169a46e3a647678e5722ae4b68b3509336aea0a2/config.h#L162-164) and un-comment the specific FLIP board you want to enable.
Adjustments to board orientation need to be made at the bottom of the corresponding FLIP section in [`config.h`](https://github.com/bodhidogma/MultiWii_Flip/blob/169a46e3a647678e5722ae4b68b3509336aea0a2/config.h#L1204-1229).
 
 (More details: http://www.readytoflyquads.com/the-rtf-wiki)

# Flip 1.5 Hardware
* http://www.readytoflyquads.com/flip-mwc-flight-controller
* ATmega328
* MPU6050 (Inversense) 6 axis gyro/accelerometer with Motion Processing Unit  
* pmp: Baro (BMP180)
* pmp: Mag (HMC5883L)

# Flip 2.0 Hardware
* http://www.readytoflyquads.com/flip-2-0
* ATmega328
* MPU6050 (Inversense) 6 axis gyro/accelerometer with Motion Processing Unit  
* Baro (BMP085)
* Mag (HMC5883L)

# Setup Tips
* Adjustments may be required for servo travel (eg: 1000-2000) as well as calibrating your ESCs. (See: [`ESC_CALIB_CANNOT_FLY`](https://github.com/bodhidogma/MultiWii_Flip/blob/169a46e3a647678e5722ae4b68b3509336aea0a2/config.h#L1149)
* Digital servos can increase [`SERVO_RFR_RATE`](https://github.com/bodhidogma/MultiWii_Flip/blob/169a46e3a647678e5722ae4b68b3509336aea0a2/config.h#L1064).  Analog servos should stick with 50.
