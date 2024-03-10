/* Filename: Exercise_4.c
   Description: Impedance calculator from a set of parameters
   Author: Yee Zhen
   Date: 08/03/24
   I/O: Resistance, Phase angle, Inductance, Capacitance
   Version: 1
*/

#include <stdio.h>
#include <math.h>

void Impedance_and_Phase_Angle (double *Imp, double *Ph_angle, double resistance, double capacitance, double inductance, double angular_freq);

int main() {
    double resistance,impedance,phase_angle,capacitance,inductance,angular_freq;
    printf("Resistance ->\n");
    scanf("%lf",&resistance);
    printf("Capacitance ->\n");
    scanf("%lf",&capacitance);
    printf("Inductance ->\n");
    scanf("%lf",&inductance);
    printf("Angular Frequency ->\n");
    scanf("%lf",&angular_freq);
    Impedance_and_Phase_Angle(&impedance,&phase_angle,resistance,capacitance,inductance,angular_freq);
    printf("The impedance of this RLC circuit is %.2lf, and the phase angle is %.2lf rad (%.2lf deg).",impedance,phase_angle,phase_angle*(180/M_PI));
    return 0;
}

void Impedance_and_Phase_Angle (double *Imp, double *Ph_angle, double resistance, double capacitance, double inductance, double angular_freq)
{
    double omega_L=angular_freq*inductance, omega_C=angular_freq*capacitance, impedance;
    impedance = sqrt(pow(resistance,2)+pow(omega_L-(1/omega_C),2));
    *Ph_angle = acos(resistance/impedance);
    *Imp = impedance;
}