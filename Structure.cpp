#include<stdio.h>
int main()
{
	struct employee{
		int id;
		float salary;
		int mobile;
	};
	
	struct employee e1,e2,e3;
	
	printf("Enter ID, Salary and Mobile No. of Employee 1 :-\n");
	scanf("%d%f%d",&e1.id,&e1.salary,&e1.mobile);
	
	printf("Enter ID, Salary and Mobile No. of Employee 2 :-\n");
	scanf("%d%f%d",&e2.id,&e2.salary,&e2.mobile);
	
	printf("Enter ID, Salary and Mobile No. of Employee 3 :-\n");
	scanf("%d%f%d",&e3.id,&e3.salary,&e3.mobile);
	
	printf("Entered Result :-\n");
	printf("Employee 1 : ID = %d, salary = %.2f, Mobile = %d\n",e1.id,e1.salary,e1.mobile);
	printf("Employee 2 : ID = %d, salary = %.2f, Mobile = %d\n",e2.id,e2.salary,e2.mobile);
	printf("Employee 3 : ID = %d, salary = %.2f, Mobile = %d\n",e3.id,e3.salary,e3.mobile);
	
	return 0;
}
