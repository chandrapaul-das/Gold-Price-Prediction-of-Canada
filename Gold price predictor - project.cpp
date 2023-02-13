#include<stdio.h>
#include<math.h>

main()
{

int m,n,e,t;
float y,G;
printf("<< NOTE: The month should be entered in the numerical format, \n i.e. If we want to forecast the data for the month of January we enter 1 \n for the month of February we enter 2, and so on... \n We enter 12 for the month of December, \n Any number other than 1(1)12 will be considered 'WRONG INPUT' >> \n");
printf("\n \nEnter the Month and the Year respectively for which the forecast is desired: \n");
scanf("%d",&m);
if(m>0)
 {
      if(m<13)
  {
	printf("\nNow enter the Year for which the forecast is desired: \n");
    scanf("%d",&e);
    if(m=1)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*1.01374;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
    else if(m=2)
     {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*1.00801;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
    else if(m=3)
     {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*0.99777;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
    else if(m=4)
     {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*0.99279;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
    else if(m=5)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*0.99239;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
    else if(m=6)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*0.98776;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
     else if(m=7)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*0.98943;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
     else if(m=8)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*1.00044;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
     else if(m=9)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*1.00745;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
     else if(m=10)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*0.99956;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
     else if(m=11)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*1.00871;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
     else if(m=12)
    {
      n=m-1;
      t=12*e+n-23760;
      y=0.01515*t*t-4.4661*t+714.4558;
      G=y*1.00195;
      printf("\nThe forecasted gold price for the desired time-point is: %f CAD \n",G);
      printf("\n \n<< NOTE: The forecasted values are based on the data from year 1980-2020, with the origin at 'January of 1980' >> \n");
    }
  }
      else printf("\n \nThe entered Month doesn't exist \n");
 }
 else printf("\n \nThe entered Month doesn't exist \n");

return 0;

}