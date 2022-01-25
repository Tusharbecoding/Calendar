system("color 3F"); //in stdlib.h, gives a skyblue color to the terminal
    //creating a varibale year and inputting it from the user
    int year, startingDay, month, daysInMonth, weekDay=0, day=1;
    printf("Enter year: ");
    scanf("%d", &year);

    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDays[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    //code for leap year