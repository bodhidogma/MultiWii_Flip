#  MultiWii FLIP Flight Controller

From http://www.readytoflyquads.com/flip-mwc-flight-controller

This Repo consists of both the [MultiWii](http://www.multiwii.com/) source code as well as some variations of the MWC FLIP configuration variants.
[MultiWii versions](https://code.google.com/archive/p/multiwii/):
* MultiWii 2.3
* MultiWii 2.3

Mileage may vary, but I put this repo together to better understand MWC code as well as exactly what the differences were between FLIP versions.
All source distrobutions from RTF Quads come as zip files with all sources and do not directly identify the specific changes for each setup.

I subsequently tagged each variation according to zip archive as appropriate for:
* Flip 1.5
* Flip 1.5 - pimped (with baro)
* Flip 2.0

The specific differences are captured as changes to `config.h` and `def.h`.  I saved these into a sub-folder.

To rebuild the software with Arduino, select

> * Tools -> Board -> Arduino Duemilanove
> * ATmega328 (FLIP) or MEGA for mega pro boards
 
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

