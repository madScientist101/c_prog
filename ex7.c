#include <stdio.h>

int main(int argc, char* argv[])
{
    int distance = 100;
    float power = 2.331f;
    double super_power = 2131.243232;
    char initial = 'A';
    char first_name[] = "ZED";
    char last_name[] = "Shaw";

    printf("%d \n",argc);
    printf("you are %d mile away. \n",distance);
    printf("you have %f levels of power.\n",power);
    printf("you have %f awesome super powers.\n",super_power);
    printf("I have an initial %c. \n",initial);
    printf("first name %s \n",first_name);
    printf("last name %s \n",last_name);
    printf("full name %s %c %s.\n",first_name,initial,last_name);


    int bug = 100;
    double bug_rate = 1.2;
    printf("You have %d bugs at the imaginary rate of %f.\n",bug,bug_rate);

    long universe_of_defects = 1L*1024L*1024L*1024L;
    printf("the entire universe has %ld bugs.\n",universe_of_defects);

    double expected_bugs = bug*bug_rate;
    printf("you are expected to have %f bugs.\n",expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("That is only a %e portion of the universe.\n",part_of_universe);

    char nul_byte = '\0';
    int care_percentage = bug * nul_byte;
    printf("Which means you should care %d%%. \n",care_percentage);
    printf("nul byte = %c. \n",nul_byte);


    return 0;
}