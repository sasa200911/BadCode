//Student Name: Shams.
//This program is developed to calculate the distance between two places on Earth, based on their latitude and longitude.
#include <stdio.h>
#include <math.h>

int main() {
   //declaring the variables
   const float R = 6371.01;
   const float PI = 3.141592654;
   float s_lat, s_long, e_lat, e_long, D;
   char choice;
   do
   {   //printing intro messages
       /*printf(" This program calculates the distance between two places on Earth: \n");
       printf(" ================================================================= \n");
       printf("\n");*/

            printf(" Please enter the latitude and longitude : \n");
            printf(" Input s_lat: ");
            scanf("%f", &s_lat);
            s_lat = (s_lat)*(PI/180);
            printf(" Input s_long: ");
            scanf("%f", &s_long);
            s_long = (s_long)*(PI/180);
            printf(" Input e_lat: ");
            scanf("%f", &e_lat);
            e_lat = (e_lat)*(PI/180);
            printf(" Input e_long: ");
            scanf("%f", &e_long);
            e_long = (e_long) *(PI/180);
       printf("\n Your points after converting them to radians are:\n s_lat = %f  \n s_long = %f \n e_lat = %f \n e_long = %f \n",s_lat, s_long, e_lat, e_long);
       D = R*acos(sin(s_lat)*sin(e_lat) + cos(s_lat)*cos(e_lat)*cos(s_long - e_long));
            printf("\n");
            printf(" Distance: //%.2f", D);
            printf(" km");
            printf("\n\n");
            printf(" If you want to continue press (Y) or (y), if you want to stop, press any key ");
            fflush(stdin);
            scanf("%c", &choice);
   } while((choice == 'y')||(choice == 'Y'));
    printf("\n\n");
    printf(" Thank You For Using The Program ");
    printf("\n\n");
   return 0;
}
