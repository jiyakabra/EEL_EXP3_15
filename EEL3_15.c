#include <stdio.h>
#include <string.h>

int main() {
    char vehicleNumber[20];
    char vehicleType[15];
    int hours;
    int ratePerHour;
    int billAmount;

    printf("Enter Vehicle Number Plate: ");
    scanf("%s", vehicleNumber);

    printf("Enter Vehicle Type (2-wheeler/4-wheeler): ");
    scanf("%s", vehicleType);

    printf("Enter number of hours parked: ");
    scanf("%d", &hours);

    if (strcmp(vehicleType, "2-wheeler") == 0) {
        ratePerHour = 10;
    } 
    else if (strcmp(vehicleType, "4-wheeler") == 0) {
        ratePerHour = 20;
    } 
    else {
        printf("Invalid vehicle type entered.\n");
        return 1;
    }

    billAmount = ratePerHour * hours;

    printf("\n===== PARKING FEE BILL =====\n");
    printf("Vehicle Number Plate : %s\n", vehicleNumber);
    printf("Vehicle Type         : %s\n", vehicleType);
    printf("Hours Parked         : %d\n", hours);
    printf("Rate per Hour        : Rs. %d\n", ratePerHour);
    printf("------------------------------\n");
    printf("Total Amount to Pay  : Rs. %d\n", billAmount);
    printf("==============================\n");

    return 0;
}
