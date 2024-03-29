#include <stdio.h>

#define MAX_PLATE 7
typedef struct parkingFine ParkingFine;
struct parkingFine{
    double amount;
    char numberPlate[MAX_PLATE];
};


int readParkingFine ( ParkingFine *fine );

int main(void){
    ParkingFine f;
    if(readParkingFine(&f)){
        printf("%lf %s\n",f.amount, f.numberPlate);
    } else {
        fprintf(stderr,"Invalid Input\n");
        return 1;
    }
    return 0;
}

// Returns 1 if valid input was read in
// Returns 0 otherwise
int readParkingFine ( ParkingFine *fine ){
    if ( scanf("%lf ",&(fine->amount)) != 1 ||
         fgets(fine->numberPlate,MAX_PLATE,stdin) == NULL){
        return 0;
    } else {
        return 1;
    }
}
