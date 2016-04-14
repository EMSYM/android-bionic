/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _UAPI_IIO_TYPES_H_
#define _UAPI_IIO_TYPES_H_
enum iio_chan_type {
  IIO_VOLTAGE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_CURRENT,
  IIO_POWER,
  IIO_ACCEL,
  IIO_ANGL_VEL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MAGN,
  IIO_LIGHT,
  IIO_INTENSITY,
  IIO_PROXIMITY,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_TEMP,
  IIO_INCLI,
  IIO_ROT,
  IIO_ANGL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_TIMESTAMP,
  IIO_CAPACITANCE,
  IIO_ALTVOLTAGE,
  IIO_CCT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_PRESSURE,
  IIO_HUMIDITYRELATIVE,
  IIO_ACTIVITY,
  IIO_STEPS,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_ENERGY,
  IIO_DISTANCE,
  IIO_VELOCITY,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum iio_modifier {
  IIO_NO_MOD,
  IIO_MOD_X,
  IIO_MOD_Y,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_Z,
  IIO_MOD_X_AND_Y,
  IIO_MOD_X_AND_Z,
  IIO_MOD_Y_AND_Z,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_X_AND_Y_AND_Z,
  IIO_MOD_X_OR_Y,
  IIO_MOD_X_OR_Z,
  IIO_MOD_Y_OR_Z,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_X_OR_Y_OR_Z,
  IIO_MOD_LIGHT_BOTH,
  IIO_MOD_LIGHT_IR,
  IIO_MOD_ROOT_SUM_SQUARED_X_Y,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_SUM_SQUARED_X_Y_Z,
  IIO_MOD_LIGHT_CLEAR,
  IIO_MOD_LIGHT_RED,
  IIO_MOD_LIGHT_GREEN,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_LIGHT_BLUE,
  IIO_MOD_QUATERNION,
  IIO_MOD_TEMP_AMBIENT,
  IIO_MOD_TEMP_OBJECT,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_NORTH_MAGN,
  IIO_MOD_NORTH_TRUE,
  IIO_MOD_NORTH_MAGN_TILT_COMP,
  IIO_MOD_NORTH_TRUE_TILT_COMP,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_RUNNING,
  IIO_MOD_JOGGING,
  IIO_MOD_WALKING,
  IIO_MOD_STILL,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_MOD_ROOT_SUM_SQUARED_X_Y_Z,
};
enum iio_event_type {
  IIO_EV_TYPE_THRESH,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_EV_TYPE_MAG,
  IIO_EV_TYPE_ROC,
  IIO_EV_TYPE_THRESH_ADAPTIVE,
  IIO_EV_TYPE_MAG_ADAPTIVE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_EV_TYPE_CHANGE,
};
enum iio_event_direction {
  IIO_EV_DIR_EITHER,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
  IIO_EV_DIR_RISING,
  IIO_EV_DIR_FALLING,
  IIO_EV_DIR_NONE,
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif