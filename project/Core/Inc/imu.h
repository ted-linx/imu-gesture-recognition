#ifndef __IMU_H
#define __IMU_H

#include <stdint.h>

typedef enum {
    IMU_MODE_LOW_POWER,
    IMU_MODE_ACTIVE
} IMU_Mode;

typedef enum {
    IMU_OK,
    IMU_ERROR
} IMU_Status;

typedef struct {
    float x;
    float y;
    float z;
} Vector3f;

typedef struct {
    Vector3f acceleration;
    Vector3f angular_velocity;
} IMU_Data;

IMU_Status IMU_Init(void);

IMU_Status IMU_SetMode(IMU_Mode mode);

void IMU_set_mode();

#endif