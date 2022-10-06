#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct header {
    int secuencia;
    time_t stamp;
    char * frame;
} header;

struct punto {
    double x, y, z;
} point;

struct cuaternion {
    double qx, qy, qz, qw;
} quaternion;

struct pose {
    struct punto * posicion;
    struct cuaternion * orientacion;
} pose;

struct pose_stamped {
    struct header * encabezado;
    struct pose * pose;
} robot_pose, * robot_pose_ptr;

int main(void){
    robot_pose_ptr->encabezado->stamp += 1000;
    robot_pose_ptr->encabezado->secuencia = 4;
    robot_pose_ptr->encabezado->frame = "robot 1";
    robot_pose_ptr->pose->posicion->x = 2; robot_pose_ptr->pose->posicion->y = 1; robot_pose_ptr->pose->posicion->z = 2;
    robot_pose_ptr->pose->orientacion->qw = 1; robot_pose_ptr->pose->orientacion->qx = 1;
    robot_pose_ptr->pose->orientacion->qy = 1; robot_pose_ptr->pose->orientacion->qz = 1;
    return 0;
}
