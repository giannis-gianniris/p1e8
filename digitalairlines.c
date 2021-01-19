#include <stdio.h>
#include <stdlib.h>

#define ROWS 30 
#define COLS 6 

int main (void)
{
	int c, i, j, choice, row, col, rsvd_seats, cost, seats[ROWS][COLS] = {0};
	rsvd_seats = cost = 0;
	while(1)
	{
	    
				
		printf("\nMenu selections\n");
		printf("---------------\n");
		
		printf("1. Display plane diagram\n");
		printf("2. Reservation of a random free position\n");
		printf("3. Reservation of a specific position\n");
		printf("4. Reservation of several consecutive positions\n");
		printf("5. Ticket Refund\n");
		printf("6. Show Information\n");
		printf("7. Exit\n");
		
		printf("\nEnter choice: ");
		scanf("%d", &choice);
		
		switch(choice)
		{
			case 1: 
			      printf("\nFree seats: %d, income: %d\n\n", ROWS*COLS - rsvd_seats, cost);
			      for(i = 0; i < ROWS; i++)
				  {
				  	    for(j = 0; j < COLS; j++)
				  	    {
				  	    	if(seats[i][j] == 1)
				  	    	      printf("%2s", "X");
				  	    	else 
				  	    	     printf("%2s", "#");
						}
				   }    printf("\n");
	        break;
	        
	        case 2:
	        	  if (rsvd_seats == ROWS*COLS)
			{
				printf("\nSorry, no free seats\n");
				break;
			}
			printf("\nWould you like a specific seat (No: 0)? ");
			scanf("%d", &choice);
			if (choice == 0)
			{
				do
				{
					row = rand() % ROWS; 
					col = rand() % COLS;
				} while (seats[row][col] == 1);
			}
			else
			{
				do
				{
					printf("\nEnter row [1-%d]: ", ROWS);
					scanf("%d", &row);
				} while (row < 1 || row > ROWS);

				do
				{
					printf("Enter seat [1-%d]: ", COLS);
					scanf("%d", &col);
				} while (col < 1 || col > COLS);

				row--; 
				col--;
			}
			if (seats[row][col] == 1)
				printf("\nSorry, seat in row_%d and column_%d is reserved\n", row + 1, col + 1);
			else
			{
				seats[row][col] = 1;
				cost += 6;
				rsvd_seats++;
			}
			break;
			
			case 3:
				  if (rsvd_seats == ROWS*COLS)
			{
				printf("\nSorry, no free seats\n");
				break;
			}
			printf("\nWould you like a specific seat (Yes: 0)? ");
			scanf("%d", &choice);
			if (choice == 0)
			{
				do
				{
					row = rand() % ROWS;
					col = rand() % COLS;
				} while (seats[row][col] == 1);
			}
			else
			{
				do
				{
					printf("\nEnter row [1-%d]: ", ROWS);
					scanf("%d", &row);
				} while (row < 1 || row > ROWS);

				do
				{
					printf("Enter seat [1-%d]: ", COLS);
					scanf("%d", &col);
				} while (col < 1 || col > COLS);

				row--; 
				col--;
			}
			if (seats[row][col] == 1)
				printf("\nSorry, seat in row_%d and column_%d is reserved\n", row + 1, col + 1);
			else
			{
				seats[row][col] = 1;
				cost += 6;
				rsvd_seats++;
			}
			break;
			
			case 4:
				   printf("\nFree seats: %d, Income: %d\n\n", ROWS*COLS - rsvd_seats, cost);
			
		   break;
		
		   case 5:
		        if (rsvd_seats == 0)
			{
				printf("\nAll seats are free\n");
				break;
			}
			do
			{
				printf("\nEnter row [1-%d]: ", ROWS);
				scanf("%d", &row);
			} while (row < 1 || row > ROWS);

			do
			{
				printf("Enter seat [1-%d]: ", COLS);
				scanf("%d", &col);
			} while (col < 1 || col > COLS);

			row--;
			col--;
			if (seats[row][col] != 1)
				printf("\nSeat in row_%d and column_%d is not reserved\n", row + 1, col + 1);
			else
			{
				seats[row][col] = 0;
				cost -= -22;
				rsvd_seats--;
			}
			break;
			
			case 6: 
			    printf("\nFree seats: %d, Income: %d\n\n", ROWS*COLS - rsvd_seats, cost);
			for (i = 0; i < ROWS; i++)
			{
				for (j = 0; j < COLS; j++)
				{
					if (seats[i][j] == 1)
						printf("%2s", "X");
					else
						printf("%2s", "#");
				}
				printf("\n");
			}
			break;
			
		    case 7:
			    return 0;

		default:
			printf("\nWrong choice\n");
		   break;
		}

	}
    return 0;
}
