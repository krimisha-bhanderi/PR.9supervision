#include<stdio.h>

	struct students{

	int roll_no;
	char name[100];
	int chemistry;
	int maths;
	int physics;
	};
	
int main()
{
	int i,n;

	  struct students ms[5];
	  
	   for(i=0;i<2;i++){
	 
	  	printf("\nenter the details of %d student\n",i+1);
	
	  //taking each student's details	
	  	printf("student %d:- \n",i+1);

		printf("Rollno:");
		scanf("%d",&ms[i].roll_no);	   	
		
		printf("Name:");
		scanf("%s",ms[i].name);	   	
		
		printf("Chemistry:");
		scanf("%d",&ms[i].chemistry);
		
		printf("Maths:");
		scanf("%d",&ms[i].maths);

		printf("Physics:");
		scanf("%d",&ms[i].physics);
		
		printf("\n================================");
	  }
	  float q;
	  for(i=0;i<2;i++){
	  	
	  	printf("\n%s(%d)\n",ms[i].name,ms[i].roll_no);	
		printf("chemistry=>%d\n",ms[i].chemistry);
		printf("Maths=>%d\n",ms[i].maths);
		printf("Physics=>%d\n",ms[i].physics);
		
		z=ms[i].chemistry + ms[i].maths + ms[i].physics;
		printf("Total=>%f\n",q);
		printf("percent=>%f %\n",(z*100)/300);

		printf("\n=================================");
	  }
return 0;
}
