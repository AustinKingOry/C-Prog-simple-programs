#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int newRecord(FILE *recfile,int n_idno, char n_name[50], int n_salary);
int searchRecord(FILE *recfile,int idSearch);
int editRecord(FILE *recfile,int idEdit);
int delRecord(FILE *recfile,int idDel);
int main(){
	FILE *p;
	p = fopen("employees.csv","a+");

	//to check of the file already exists
	if (access("employees.csv",F_OK)!=-1){	
		printf("file exists\n");
	}
	else{
		printf("file does not exist.\n");
		fprintf(p,"IDNO\t NAME\t SALARY\t NHIF\t NSSF\t NETPAY\t\n");
	}
	//declaring the variables
	int choice, n_idno,s_idno,e_idno,d_idno,n_salary,nr_amount,x;
	char n_name[50];
	//printing the menu
	printf("    KAIBOI PAYROLL SYSTEM\n");
	printf("............................\n");
	printf("1. ENTER NEW RECORD\n2. SEARCH RECORD\n3. EDIT RECORD\n4. DELETE RECORD\n5. EXIT\n");
	scanf("%d",&choice);
	if (choice == 1){
		printf("input the number of new records you want to add:\n");scanf("%d",&nr_amount);
		for(x=0;x<nr_amount;x++){
			printf("Input Employee ID Number:\n");scanf("%d",&n_idno);
			printf("Input Employee Name:\n");scanf("%s",&n_name);
			printf("Input Employee Salary:\n");scanf("%d",&n_salary);
			newRecord(p,n_idno, n_name, n_salary);
		}
	}
	else if(choice == 2){
		printf("Input Employee ID Number that you would like to search:\n");scanf("%d",&s_idno);
		searchRecord(p, s_idno);
	}
	else if(choice == 3){
		printf("Input Employee ID Number for the record you want to edit:\n");scanf("%d",&e_idno);
		editRecord(p,e_idno);
	}
	else if(choice == 4){
		printf("Input Employee ID Number for the record you want to delete:\n");scanf("%d",&d_idno);
		delRecord(p,d_idno);
	}
	else if(choice == 5){
		printf("EXIT...\n");
	}
	else{
		printf("invalid input!!\n");
	}
	
	fclose(p);
	return 0;
}
//function for creating a new record
int newRecord(FILE *recfile,int n_idno, char n_name[50], int n_salary){
	recfile = fopen("employees.csv","a");
	float nhif = n_salary*0.03;
	float nssf = n_salary*0.02;
	float netpay = n_salary-(nhif+nssf);
	fprintf(recfile,"%d\t %s\t %d\t %.2f\t %.2f\t %.2f\t\n",n_idno,n_name,n_salary,nhif,nssf,netpay);
}
//function for searching a record
int searchRecord(FILE *recfile,int idSearch){
	recfile = fopen("employees.csv","r");
	char line[255];
	int y;
	for(y=0;y<=idSearch;y++){
		fgets(line,255,recfile);
	}
	printf("IDNO\t NAME\t SALARY\t NHIF\t NSSF\t NETPAY\t\n");
	printf("%s",line);
//	while (!feof(recfile)){
//		fgets(line,255,recfile);
//		printf("%s",line);
//		fscanf(recfile,"%d %s %d",&idSearch,&s_name,&s_salary);
//		printf("%d %s %d",idSearch,s_name,s_salary);	
//	}	
}
//function for editing a record
int editRecord(FILE *recfile,int idEdit){
	recfile = fopen("employees.csv","a+");
	char line[255];
	int y;
	char newName[50];
	int newSalary;
	for(y=0;y<idEdit;y++){
		fgets(line,255,recfile);
	}
	printf("%s",line);
	printf("input the new data below:");
	printf("\ninput name:");scanf("%s",&newName);
	printf("\ninput new salary:");scanf("%d",&newSalary);
	line [3]= ("%d %s %d",idEdit,newName,newSalary);
	printf("the record was edited successfully. New record is:\n");
	printf("%s",line);
}
//function for deleting a record
int delRecord(FILE *recfile,int idDel){
	recfile = fopen("employees.csv","rw");
	char line[255];
	int y;
	for(y=0;y<idDel;y++){
		fgets(line,255,recfile);
	}
	printf("%s",line);
//	strcpy(line,"");
//	fprintf(*line,"%s",line);
	printf("record deleted successfully.\n");
}
