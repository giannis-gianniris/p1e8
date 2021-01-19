#include <stdio.h>

int main(void) 
{
	
	int a,p=30,N,start,n_seats,b_seats=0,b,i,j,am[6][30]={{0}},nb[4][22]={{0}};
	start: 
	
	printf("Choose an aircraft: \n");
	
	printf("\nFor AM57 enter : 1\n");
	printf("\nFor  NB3842 enter: 2\n");
    scanf("%d",&a);
    
	printf("\nMenu selections: \n");
    
	if(a==1)
    {
	    printf("1. For a random seat enter\n");
	    printf("2. For a specific seat entern\n");
	    printf("3. diagram enter\n");
	    printf("4. To delete a book enter\n");
        
        printf("\nEnter choice: ");
		scanf("%d",&b);
	
	if(b==4)
	    {
	      b_seats--;
	      printf("enter the row of your seat: (1-6)\nenter the column of you seat: (1-30)\n");
          scanf("%d",&i);
          scanf("%d",&j);
          if(am[i][j]=='X')
            {
			 am[i][j]==0;
             printf("your seat has been successfully deleted but you'll have to pay 22€\n");}}
	if(b==2)
	    {
		    printf("to book seats in a row choose:1(no more than 3 seats in a row)\nto book one seat choose:2\n");
	if(N==2)
	    {
	       b_seats++;
		   printf("enter the row you want to be in: (1-6)\nenter the column you want to be in: (1-30)\n");
           scanf("%d",&i);
           scanf("%d",&j);
                
	if(am[i][j]==0)
        {
			am[i][j]=='X';
            printf("your seat has been booked\n");
			printf("you'll have to pay 30€\n");
		}
    else
			printf("the seat is already taken!\a\n");
		}
	else if(N==1)
		{
		    printf("choose the number of seats in a row that you want:\n");
			scanf("%i",n_seats);
			b_seats+n_seats;
			printf("enter the row you want to be in: (1-6)\nenter the column you want to be in: (1-30)\n");
            scanf("%d",&i);
            scanf("%d",&j);
			   
	if(am[i][j]==0)
        {
		    for( i = 0; i < n_seats; i++)
				am[i][j]=='X';
				p=p*n_seats;
                printf("your seats has been booked\n");
                printf("you'll have to pay %i€\n",p);
        }
	else if(am[i][j]='X')
			printf("error!\n\a");
			   
		}
		}
	
	if(b==1)
		{ 
			b_seats++;
			for(i = 0; i < 6; i++)
			    {
					for(j = 0; j <30; j++)
			           {
					    if(am[i][j]==0)
                            am[i][j]=='X';
						}
				}
                    printf("your seat has been booked\n");}
                    printf("booked seats:%i\n",b_seats); 
			        printf("remaining seats:%i\n",180-b_seats);
			        printf("you'll have to pay 30€\n");
	if(b==3)
		{
			for(i = 0; i <30 ; i++)
			    printf("******\n");	  
	            goto start; }      
	        goto start;}
    if(a==2)  
	    {
	        printf("to book seats in a row choose:1(no more than 3 seats in a row)\nto book one seat choose:2\n");
	if(N==2)
	    {
			b_seats++;
			printf("enter the row you want to be in: (1-6)\nenter the column you want to be in: (1-30)\n");
            scanf("%d",&i);
            scanf("%d",&j);
    
	if(am[i][j]==0)
        {
			nb[i][j]=='X';
            printf("your seat has been booked\n");
            printf("you'll have to pay 20€\n");
		}
	else
		printf("the seat is already taken!\a\n");
		}
	else if(N==1)
		{
			  printf("choose the number of seats in a row that you want:\n");
			  scanf("%i",n_seats);
			  b_seats+n_seats;
			  printf("enter the row you want to be in: (1-6)\nenter the column you want to be in: (1-30)\n");
              scanf("%d",&i);
              scanf("%d",&j);
		if(nb[i][j]==0)
        {
			for( i = 0; i < n_seats; i++)
				nb[i][j]=='X';
				p=p*n_seats;
                printf("your seats has been booked\n");
				printf("you'll have to pay %i€\n",p);
		}
			   else if(nb[i][j]='X')
			      printf("error!\n\a");
			   
		}
		}
		
		if(b==4)
	    {
	      b_seats--;
	      printf("enter the row of your seat: (1-6)\nenter the column of you seat: (1-30)\n");
          scanf("%d",&i);
          scanf("%d",&j);
        if(am[i][j]=='X')
            {
			 am[i][j]==0;
             printf("your seat has been successfully deleted but you'll have to pay 22€\n");}}
		if(b==1)
		    { 
			   b_seats++;
			   for(i = 0; i <4 ; i++)
			       {
					 for(j = 0; j <22; j++)
			           {
					    if(nb[i][j]==0)
                            nb[i][j]=='X';
						}
					}
                        printf("your seat has been booked\n");
						printf("you'll have to pay 20€\n");}
            printf("booked seats:%i\n",b_seats); 
			printf("remaining seats:%i\n",88-b_seats); 
	if(b==3)
		{
		    for(i = 0; i <22 ; i++)
			    printf("****\n");	  
	            goto start; }       
return 0;
}
