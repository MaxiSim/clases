#include <stdio.h>
#include <stdlib.h>
#include <time.h>


struct header {
    int secuencia;
    time_t stamp;
    char * frame;
};

struct pose {
    struct {
        double x, y, z;
    } posicion;
    struct {
        double qx, qy, qz, qw;
    } orientacion;
};

struct pose_stamped {
    struct header encabezado;
    struct pose pose;
} robot_pose;


int main (void){
    printf("stamp: %ld\n", robot_pose.encabezado.stamp + 100);
    printf("secuencia: %d\n", robot_pose.encabezado.secuencia);
    printf("frame: %s\n", robot_pose.encabezado.frame);
    printf("posicion:\nx: %f y: %f z: %f\n", robot_pose.pose.posicion.x, robot_pose.pose.posicion.y, robot_pose.pose.posicion.z);
    printf("orientacion:\nqw: %f qx: %f qy: %f qz: %f\n", robot_pose.pose.orientacion.qw, robot_pose.pose.orientacion.qx, robot_pose.pose.orientacion.qy, robot_pose.pose.orientacion.qz);
    return 0;
}