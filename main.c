#include <stdio.h>

// Setting the constant of how many kgs per motor
const double kgsPerMotor = 5.6;

int main(void) {
  printf("How many motors are carrying the packages? ");
  double numberOfMotors;
  // Checking if the input = is a no. & without decimals & not negative
  if (scanf("%lf", &numberOfMotors) == 1 &&
      numberOfMotors == (int)numberOfMotors && numberOfMotors >= 0) {
    // Casting the double to an int, since we only want whole numbers of motors
    int validNumberOfMotors = (int)numberOfMotors;
    // Printing an output to the user, asking how many kgs of packages
    printf("How many kg of packages do we expect? ");
    // Introducing the variable which will later contain the input
    double kgsOfPackages;
    // Checking if the input from the user is a number (long float)
    if (scanf("%lf", &kgsOfPackages) == 1) {
      // Checking if the conveyer belt can carry the packages or not
      // Printing the result to the user, based on the if-statement
      if (kgsOfPackages <= validNumberOfMotors * kgsPerMotor) {
        printf("Yes! The conveyer belt can carry the packages.\n");
      } else {
        printf("No. The conveyer belt cannot carry the packages!\n");
      }
      // In case the input for kgs of packages is not a number
    } else {
      printf("Please try again, this time with a number.\n");
    }
    // In case the input for number of motors is not a whole number or negative
  } else {
    printf("Please try again, this time with a whole number (e.g.: 2, 5).\n");
  }
  return 0;
}