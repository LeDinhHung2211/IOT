#include <stdio.h>
#include <stdio.h>

float systemp, millideg;
FILE *thermal;
int n;
int main(void)(
    thermal = fopen(
        "/sys/class/thermal/thermal_zone0/temp","r");
        n = fscanf(thermal,"%f",&millideg);
        fclose(thermal);
        systemp = millideg /1000;

        printf("CPU temperature is %f degrees C\n",systemp);
)