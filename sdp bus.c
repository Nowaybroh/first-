 #include<stdio.h>
 #include<stdlib.h>
 #include<string.h>
 int main()
 {
     int choice;
     do
     {
         printf("  Bus booking system  ");
         printf("1. Book a seat");
         printf("2. View reservations");
         printf("3. Edit a reservation");
         printf("4. Print a ticket ");
         printf("5. Exit");
         printf("Enter your choice :");
         scanf ("%d",&choice);
         switch (choice)
         {
         case 1:
            bookseat();
            break;
         case 2:
            viewReservations();
            break;
         case 3:
            edutReservation();
            break;
         case 4:
            printTicket();
            break;
         case 5:
            printf("Exiting......");
            break;
         default:
            printf("Invalid choice. Please enter a valid option.");

         }
     }
     while (choice !=5);
     return 0;

 }

