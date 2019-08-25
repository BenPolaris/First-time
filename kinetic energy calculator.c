#include <stdio.h>
#include <stdlib.h>

int main()
{
    float mass,velocity,KE;
    printf("Kinetic Energy calculator.\n");
    printf("Insert mass(in kg):");
    scanf("%f",&mass);
    printf("Insert velocity(in m/s):");
    scanf("%f",&velocity);
    KE=(mass*velocity*velocity)/2;
    printf("Kinetic Energy = %f J.\n",KE);
    return 0;
}
