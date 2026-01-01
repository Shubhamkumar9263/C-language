/*The aim of this project is to create a Time Conversion Tool that
converts a given number of seconds into hours, minutes, and seconds and displays
 the result in a readable format.
code in c language*/

#include <Stdio.h>
int main()
{
    int hour, second, minute;
    printf("enter the value of second\n");
    scanf("%d", &second);

    hour = second / 3600;
    minute = (second % 3600) / 60;
    second = second % 60;
    printf("time  :-   hour %d , minute %d , second %d", hour, minute, second);
    return 0;
}