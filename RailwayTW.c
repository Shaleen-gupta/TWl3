#include<stdio.h>

int TJS[3] = {4,4,4};
int TJK[3] = {4,4,4};
int TJA[3] = {4,4,4};



void TicketPrinterFromJaipur(double class_cost, double base_cost, int donation, int ans, int selection_destination, double total_cost){


    printf("=*=*=*=*=*=*=*=*=*=*=*=*=INDIAN RAILWAYS=*=*=*=*=*=*=*=*=*=*=*=*=\n\n");
    printf("PNR: %d\n", (1025));
    printf("Date of travel: 2 days after the display of this ticket\n");
    printf("Name: _____________\n");
    printf("Age: _____\n");
    printf("Starting Station: JAIPUR JN\n");

    if(selection_destination == 1){

        printf("Destination Station: SURAT\n");

    }

    else if(selection_destination == 2){

        printf("Destination Station: KOTA JN\n");
        
    }

    else if(selection_destination == 3){

        printf("Destination Station: AGRA\n");
        
    }

    printf("Seat Cost: Rs %f\n", class_cost + base_cost);
    if(ans){

        printf("Refreshment Cost: Rs %d\n", 700);

    }

    else{

        printf("Refreshment Cost: Rs %d\n", 0);

    }

    printf("Tax: Rs 20\n");

    printf("Feed India Donation: Rs %d\n", donation);

    printf("----------------------------------\n");
    printf("Total Cost: Rs %f\n\n", total_cost);


    printf("*****Click The Link Below To Pay*****\n");
    printf("Official Link: _________________\n\n");

    return;

}



void RevenueCalculator(double class_cost, double base_cost, int selection_destination){

    double total_cost;
    printf("=============WOULD YOU LIKE TO BE SERVED REFRESHMENTS DURING YOUR JOURNEY ?=============\n");
    int ans;
    scanf("%d", &ans);

    if(ans){

        total_cost += 700;
    }

    total_cost += (class_cost + base_cost);
    total_cost += 20;

    printf("===========WOULD YOU LIKE TO DONATE TO FEED INDIA FOUNDATION ?===========\n");
    int donation = 0;
    int ans1;
    scanf("%d", &ans1);

    if(ans1){
        printf("PLEASE ENTER THE AMOUNT: ");
        scanf("%d", &donation);
        printf("*********THANK YOU*********\n\n\n");    
    }

    TicketPrinterFromJaipur(class_cost, base_cost, donation, ans, selection_destination, total_cost);
    return;
    
}




double ClassSelection(int selection_destination){

    printf("\n========THE AVAILABLE SEATS FOR THE REQUIRED TRAVEL ARE========\n");

        if(selection_destination == 1){

            printf("A1: %d\n", TJS[0]);
            printf("A2: %d\n", TJS[1]);
            printf("A3: %d\n", TJS[2]);
            printf("\n\n");

        }

        else if(selection_destination == 2){

            printf("A1: %d\n", TJK[0]);
            printf("A2: %d\n", TJK[1]);
            printf("A3: %d\n", TJK[2]);
            printf("\n\n");

        }

        else if(selection_destination == 3){

            printf("A1: %d\n", TJA[0]);
            printf("A2: %d\n", TJA[1]);
            printf("A3: %d\n", TJA[2]);
            printf("\n\n");

        }




        int selection_class;

        printf("-----------PLEASE SELECT THE CLASS----------\n");
        scanf("%d", &selection_class);

        if(selection_destination == 1){

            if(TJS[0] == 0 && TJS[1] == 0 && TJS[2] == 0){

                printf("\n******NO SEAT AVAILABLE!******\n");
                return 0;
            }

            if(TJS[selection_class - 1] == 0){
                printf("******IN WAITING!******\n\n");
                printf("******PLEASE SELECT ANOTHER SEAT!******\n");
                ClassSelection(selection_destination);
            }

            TJS[selection_class - 1]--;
        }

        else if(selection_destination == 2){

            if(TJK[0] == 0 && TJK[1] == 0 && TJK[2] == 0){

                printf("******NO SEAT AVAILABLE!******");
                return 0;
            }


            if(TJK[selection_class - 1] == 0){
                printf("******IN WAITING!******\n\n");
                printf("******PLEASE SELECT ANOTHER SEAT!******");
                ClassSelection(selection_destination);
            }
            

            TJK[selection_class - 1]--;
        }

        else if(selection_destination == 3){

            if(TJA[0] == 0 && TJA[1] == 0 && TJA[2] == 0){

                printf("******NO SEAT AVAILABLE!******");
                return 0;
            }

            if(TJK[selection_class - 1] == 0){
                printf("******IN WAITING!******\n\n");
                printf("******PLEASE SELECT ANOTHER SEAT!******");
                ClassSelection(selection_destination);
            }
            

            TJA[selection_class - 1]--;
        }




        if(selection_class == 1){

            return 1500;
        }

        if(selection_class == 2){

            return 1000;
        }

        if(selection_class == 3){

            return 500;
        }

        return 0;
    }
     


void GoToJaipur(){


   
    printf("Starting Station: Jaipur\n\n");
    printf("------------PLEASE SELECT THE DESTINATION------------\n\n");

    printf("1. Surat\n");
    printf("2. Kota\n");
    printf("3. Agra\n");


     double base_cost[3] = {300, 100, 400};


    int selection_destination;

    scanf("%d", &selection_destination);


    double class_cost = ClassSelection(selection_destination);

    RevenueCalculator(class_cost, base_cost[selection_destination - 1], selection_destination);

    return;
    
}



void TransferToStation(int selection_beginning){

    if(selection_beginning == 1){

        GoToJaipur();

    }
    return;
}




int main(){


    printf("==========================WELCOME TO INDIAN RAILWAYS==========================\n\n");
    printf("We are determined to make your journey luxurious\n\n\n");

    int control = 1;

    while(control != 0){


        printf("------------PLEASE SELECT THE STARTING CITY------------\n\n");
        printf("1. Jaipur\n");
        printf("2. Kota\n");
        printf("3. Mumbai\n");
        printf("4. Delhi\n");
        printf("5. Ahmedabad\n");
        printf("6. Ujjain\n");
        printf("7. Mathura\n\n");

        int selection_beginning;
        scanf("%d", &selection_beginning);


        TransferToStation(selection_beginning);

        printf("WOULD YOU LIKE TO BOOK ANOTHER TICKET ?\n");
        scanf("%d", &control);
    }
    return 0;
}