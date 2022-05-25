#include<stdio.h>
#include<string.h>
struct student{
	char n[20];
	int id;
	char dep[20];
    int phn;

}s[100];
	int ch,i,n1,n2,n3,n4,n5,n6,x,y,p,pa,i1;    //x> modify,delete,search er id input newar jnno.
      char a[20], uid[10];
      int input();
      int show();                           //ch>option+switch
                                                //i>structure input
                                                //i1 delete er loop
                                                //y> student add
                                                //p>add er loop
                                                //n1>create er amount
                                                //n2 search er total
                                                //n3> modify er total number
                                                //n4>delete total number
                                                //n5> add er present number
                                                //n6> display total number
                                                //uid> username
                                                //pa> login pass


	front() {
	printf("\nSTUDENT NAME                  |STUDENT ID          | STUDENT DEPT         | STUDENT PHONE NO.  ");
	printf("\n------------------------------------------------------------------------------------------------------------------");
	}
	display(){
	printf("\n %s                                  %d             %s                      %d                   \n",s[i].n,s[i].id,s[i].dep,s[i].phn);
	}

	modify()  {
	printf("Name of the student: ");
    getchar();
	gets(s[i].n);
	printf("id of the student: ");
	scanf(" %d",&s[i].id);
	printf("department of the student: ");
	getchar();
	gets(s[i].dep);
	printf("phone number of the student: ");
	scanf("%d",&s[i].phn);
	printf("\nIf you were going back to main menu type 'b'");
	scanf("%s",&a);
	if (strcmp(a,"b")==0)
	input();  }

 delet(int pos)
	{
		 for(i1=pos+1;i1<n4;i1++)
        s[i1-1]=s[i1];
	printf("\nIf you were going back to main menu type 'b' ");
	scanf("%s",&a);
	if (strcmp(a,"b")==0)
	input();	}

	add()  {
		printf("Enter present number of student ");
		scanf("%d",&n5);
	printf("How many students record you want to add ");
	scanf("%d",&y);
	p=n6+y;
	for(i=n5;i<p;i++)
{
	printf("Name of the student: ");
    getchar();
	gets(s[i].n);
	printf("id of the student: ");
	scanf(" %d",&s[i].id);
	printf("department of the student: ");
	getchar();
	gets(s[i].dep);
	printf("phone number of the student: ");
	scanf("%d",&s[i].phn);	}
   printf("\nIf you were going back to main menu type 'b' ");
	scanf("%s",&a);
	if (strcmp(a,"b")==0)
	input();	}

	show(){
		printf("\n\n");
    printf("       ```````````````````````````````````````````````````````````````````````````````````````````````\n");
    printf("       `                                                                                             `\n");
    printf("       `                                                                                             `\n");
    printf("       `                                                                                             `\n");
    printf("       `                                                                                             `\n");
    printf("       `                           **STUDENT INFORMATION SYSTEM**                                    `\n");
    printf("       `                                                                                             `\n");
    printf("       `                                                                                             `\n");
    printf("       `                                                                                             `\n");
    printf("       `                                                                                             `\n");
    printf("       ```````````````````````````````````````````````````````````````````````````````````````````````\n");
		 printf("                                     Please Enter your UserName: ");
    scanf("%s",&uid);
    if(strcmp(uid,"stamford")==0)
    {
    printf("                                     Please Enter Your Password: ");
    scanf("%d",&pa);
     if(pa==456)
    {


    }
    else
    {
        printf("Wrong Password");
    }
    }
    else
    {
        printf("ID Doesn't Exist.");
    }
    }

     input() {
        printf("    Welcome to STUDENT INFORMATION SYSTEM\n\n\n");
        printf("         Main Menu :-> \n\n");
        printf("    1. Create Student\n");
        printf("    2. Modify Student Info\n");
        printf("    3. Add Student\n");
        printf("    4. Delete Student\n");
        printf("    5. Search Student\n");
        printf("    6. Display record of Students\n");
        printf("    7. Exit\n");
        printf("    Choose your option: \n");
        scanf("%d",&ch);
	switch(ch) {
	case 1:
	printf("Enter the amount of the students: ");
    scanf("%d",&n1);//student amount
    for(i=0;i<n1;i++) {
	printf("Name of the student: ");
    getchar();
	gets(s[i].n);
	printf("id of the student: ");
	scanf(" %d",&s[i].id);
	printf("department of the student : ");
	getchar();
	gets(s[i].dep);
	printf("phone number of the student: ");
	scanf("%d",&s[i].phn); }
	printf("\nIf you were going back to main menu type 'b' ");
	scanf("%s",&a);
	if (strcmp(a,"b")==0)
	input();
	break;
	case 2:
		printf("Enter total number of students ");
		scanf("%d",&n3);
		printf("Enter the students id you want to modify record ");
			scanf("%d",&x);
			 for(i=0;i<n3;i++){
			if(s[i].id==x)
			{
            modify();
	break;}}
	case 3:
		add();
		break;
    case 4:
    	printf("Enter total number of student ");
    	scanf("%d",&n4);
    	 printf("Enter the id you want to delete : ");
        scanf("%d",&x);
       for(i=0;i<n4;i++)
    {
        if(x==s[i].id) {
		delet(i);
            break; }}
    case 5:
		printf("Enter total number of students ");
		scanf("%d",&n2);
			printf("Enter the students id you want to search  record: ");
			scanf("%d",&x);
			front();
    for(i=0;i<n2;i++){
        if(s[i].id==x)
            display();}
        printf("\nIf you were going back to main menu type 'b' ");
	scanf("%s",&a);
	if (strcmp(a,"b")==0)
	input();
            break;
    case 6:
            	printf("Enter toal number of student ");
            	scanf("%d",&n6);
            	front();
			    for(i=0;i<n6;i++)
			    display();
			    printf("\nIf you were going back to main menu type 'b' ");
	scanf("%s",&a);
	if (strcmp(a,"b")==0)
	input();
	        break;

	case 7:
		exit(0);
		break;
    default:
    	break;}}
int main()
{
    show();
	input();}
