#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int newRecord(FILE *recfile,int n_idno, char n_name[50], int n_salary);
int searchRecord(FILE *recfile,int idSearch);
int main(){
	
	char fileToRead[50],fileToCreate[50];
	printf("ENTER FILE TO READ FROM: ");scanf("%s",&fileToRead);
	printf("%s\n",fileToRead);
	printf("ENTER NAME OF NEW FILE: ");scanf("%s",&fileToCreate);
	//checking the file
	FILE *p;
	FILE *p_new;
	p = fopen(fileToRead,"a+");
	p_new = fopen(fileToCreate,"a+");

	//to check of the file containing data already exists
	if (access(fileToRead,F_OK)!=-1){	
		printf("file exists, clear to proceed\n");
		//to check of the file to receive data already exists
		if (access(fileToCreate,F_OK)!=-1){	
			printf("file is ready to receive data.\n");
		}
		else{
			printf("file is ready to receive data.\n");
		}
		fprintf(p_new,"vhlId\t make\t model\t registrationDate\t registrationTime\t bodyType\t engine\t modelYear\t setStatus\t\n");
		printf("new file created successfully. Clear To Proceed.\n");
		printf("READING DATA FROM %s ...\n",fileToRead);
		printf("COPYING DATA TO %s ...\n",fileToCreate);
		copyFunc(fileToRead,fileToCreate);
		printf("DATA COPIED SUCCESSFULLY TO %s\n",fileToCreate);
	}
	else{
		printf("file containing data does not exist. Please correct and try again\n");
	}

	
	return 0;
}

int copyFunc(char oldfile[50],char newfile[50]){
	FILE *Foldfile,*Fnewfile;
	
	Foldfile = fopen(oldfile,"a+");
	Fnewfile = fopen(newfile,"a+");
	char line[255];
	while (!feof(Foldfile)){
		fgets(line,255,Foldfile);
		fprintf(Fnewfile,"%s\t",line);
	}
	printf("Success!\n");
//	while (!feof(recfile)){
//		fgets(line,255,recfile);
//		printf("%s",line);
//		fscanf(recfile,"%d %s %d",&idSearch,&s_name,&s_salary);
//		printf("%d %s %d",idSearch,s_name,s_salary);	
//	}	
}
