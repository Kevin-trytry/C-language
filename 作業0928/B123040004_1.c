#include<stdio.h>
int main()
{
	int month,date;
	printf("Please enter the month:\n");
	scanf("%d",&month);
	if (month==1)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=19)
				printf("%02d/%02d belings to Capricorn",month,date);
			else if(date>=20 && date <=31)
				printf("%02d/%02d belings to Aquarius",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==2)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=18)
				printf("%02d/%02d belings to Aquarius",month,date);
			else if(date>=19 && date <=29)
				printf("%02d/%02d belings to Pisces",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==3)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=20)
				printf("%02d/%02d belings to Pisces",month,date);
			else if(date>=21 && date <=31)
				printf("%02d/%02d belings to Aries",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==4)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=19)
				printf("%02d/%02d belings to Aries",month,date);
			else if(date>=20 && date <=30)
				printf("%02d/%02d belings to Taurus",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==5)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=20)
				printf("%02d/%02d belings to Taurus",month,date);
			else if(date>=21 && date <=31)
				printf("%02d/%02d belings to Gemini",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==6)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=20)
				printf("%02d/%02d belings to Gemini",month,date);
			else if(date>=21 && date <=30)
				printf("%02d/%02d belings to Cancer",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==7)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=22)
				printf("%02d/%02d belings to Cancer",month,date);
			else if(date>=23 && date <=31)
				printf("%02d/%02d belings to Leo",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==8)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=22)
				printf("%02d/%02d belings to Leo",month,date);
			else if(date>=23 && date <=31)
				printf("%02d/%02d belings to Virgo",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==9)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=22)
				printf("%02d/%02d belings to Virgo",month,date);
			else if(date>=23 && date <=30)
				printf("%02d/%02d belings to Libra",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==10)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=22)
				printf("%02d/%02d belings to Libra",month,date);
			else if(date>=23 && date <=31)
				printf("%02d/%02d belings to Scorpio",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==11)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=21)
				printf("%02d/%02d belings to Scorpio",month,date);
			else if(date>=22 && date <=30)
				printf("%02d/%02d belings to Sagittarius",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else if (month==12)
		{
			printf("Please enter the date:\n");
			scanf("%d",&date);
			if (date>=1 && date<=21)
				printf("%02d/%02d belings to Sagittarius",month,date);
			else if(date>=22 && date <=31)
				printf("%02d/%02d belings to Capricorn",month,date);
			else 
				printf("Please enter the corrrect date");
		}
	else  
		printf("Please enter the correct month");
}
  
