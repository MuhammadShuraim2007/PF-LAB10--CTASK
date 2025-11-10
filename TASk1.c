
int main() {
    char password[50];
    char newPassword[50];
    char name[100];
    char name1[100];
    printf("Enter the new password: ");
    scant("%[^\n]", password);
    
    int length = strlen(password);
    if(length >= 8) {
    	printf("the password is valid\n");
	} else {
		printf("the password must be of 8 length");
	return 1;
	}
	
	printf("confirm password: ");
	getchar();
    scanf("%[^\n]", newPassword);
    
    if(strcmp(password , newPassword) == 0){
    	printf("PASSWORD VERIFED\n");
    	printf("Enter name: ");
    	getchar();
    	scanf(" %[^\n]" , name);
    	strcpy(name1 , name);
    	printf("Name : %s" , name1);
    	
	} else {
		printf("enter the valid password");
	}
    
 
    return 0;
}
