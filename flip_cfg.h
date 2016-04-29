#ifndef _FLIP_H_
#define _FLIP_H_

//#define FLIP15_QUADX
//#define FLIP15_TRI
//#define FLIP15_HEX6X
//#define FLIP15_PPMSUM
//#define FLIP15_VTAIL

//#define FLIP15_PIMPED
//#define FLIP15_PIMPED_GPS
//#define FLIP15_PIMPED_HEXA_A0A1

//#define FLIP20

// -----

#ifdef FLIP15_QUADX
// config.h : 39
# define QUADX
#endif

#ifdef FLIP15_TRI
// config.h : 37
# define TRI
#endif

#ifdef FLIP15_HEX6X
// config.h : 43
# define HEX6X
// config.h : 383
# define A0_A1_PIN_HEX
#endif

#ifdef FLIP15_PPMSUM
// config.h : 333
# define SERIAL_SUM_PPM         PITCH,YAW,THROTTLE,ROLL,AUX1,AUX2,AUX3,AUX4,8,9,10,11 //For Graupner/Spektrum
#endif

#ifdef FLIP15_VTAIL
// config.h : 49
# define VTAIL4
#endif

#ifdef FLIP15_PIMPED
// config.h : 182 (pressure)
# define BMP085
// config.h : 187 (magnetometer)
# define HMC5883
// config.h : 203
# define MAG_ORIENTATION(X, Y, Z)  {imu.magADC[ROLL]  =  -X; imu.magADC[PITCH]  =  -Y; imu.magADC[YAW]  = -Z;}
// conifg.h : 388
# define RCAUXPIN8
// config.h : 651
# define UBLOX
// def.h : 920
# define BMP085
// def.h : 923
# undef  MPU6050_I2C_AUX_MASTER
#endif

#ifdef FLIP15_PIMPED_GPS
// config.h : 182
# define BMP085
// config.h : 187
# define HMC5883
// config.h : 203
# define MAG_ORIENTATION(X, Y, Z)  {imu.magADC[ROLL]  =  -X; imu.magADC[PITCH]  =  -Y; imu.magADC[YAW]  = -Z;}
// conifg.h : 388
# define RCAUXPIN8
// config.h : 637
# define GPS_PROMINI_SERIAL   // Will Autosense if GPS is connected when ardu boots.
// config.h : 651
# define UBLOX
// def.h : 920
# define BMP085
// def.h : 923
# undef  MPU6050_I2C_AUX_MASTER
#endif

#ifdef FLIP15_PIMPED_HEXA_A0A1
// config.h : 43
# define HEX6X
// config.h : 182
# define BMP085
// config.h : 187
# define HMC5883
// config.h : 203
# define MAG_ORIENTATION(X, Y, Z)  {imu.magADC[ROLL]  =  -X; imu.magADC[PITCH]  =  -Y; imu.magADC[YAW]  = -Z;}
// config.h : 383
# define A0_A1_PIN_HEX
// conifg.h : 388
# define RCAUXPIN8
// config.h : 637
# define GPS_PROMINI_SERIAL   // Will Autosense if GPS is connected when ardu boots.
// config.h : 651
# define UBLOX
// def.h : 920
# define BMP085
// def.h : 923
# undef  MPU6050_I2C_AUX_MASTER
#endif

#ifdef FLIP20
// config.h : 141
# undef FLYDUINO_MPU
// config.h : 182
# define BMP085
// config.h : 187
# define HMC5883
// config.h : 201
# define FORCE_ACC_ORIENTATION(X, Y, Z)  {imu.accADC[ROLL]  = -X; imu.accADC[PITCH]  = -Y; imu.accADC[YAW]  =  Z;}
# define FORCE_GYRO_ORIENTATION(X, Y, Z) {imu.gyroADC[ROLL] =  Y; imu.gyroADC[PITCH] = -X; imu.gyroADC[YAW] = -Z;}
# define FORCE_MAG_ORIENTATION(X, Y, Z)  {imu.magADC[ROLL]  =  X; imu.magADC[PITCH]  =  Y; imu.magADC[YAW]  = -Z;}
// config.h : 388
# define RCAUXPIN8
# undef  RCAUXPIN12
// config.h : 651
# define UBLOX
// def.h : 920
# undef MS561101BA
#endif

#endif
