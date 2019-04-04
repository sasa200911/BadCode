//Student Name: Shams.
//This program is developed to calculate the distance between two places on Earth, based on their latitude and longitude.
#include <stdio.h>
#include <math.h>

int main() {

   const float Radius = 6371.01;
   const float PI = 3.141592654;
   float start_lat, start_long, end_lat, end_long, Distance;
   char choice;
   do
   {

            printf(" This program calculates the distance between two places on Earth: \n");


            printf(" Please enter the latitude and longitude of two places: \n");
            printf(" Input Start Latitude: ");
            scanf("%f", &start_lat);

            start_lat = (start_lat)*(PI/180);
            printf(" Input Start Longitude: ");
            scanf("%f", &start_long);

            start_long = (start_long)*(PI/180);
            printf(" Input End Latitude: ");
            scanf("%f", &end_lat);

            end_lat = (end_lat)*(PI/180);
            printf(" Input End Longitude: ");
            scanf("%f", &end_long);

            end_long = (end_long) *(PI/180);


    printf("\n Your points after converting them to radians are:\n start_lat = %f  \n start_long = %f \n end_lat = %f \n end_long = %f \n",start_lat, start_long, end_lat, end_long);

    Distance = Radius*acos(sin(start_lat)*sin(end_lat) + cos(start_lat)*cos(end_lat)*cos(start_long - end_long));

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
