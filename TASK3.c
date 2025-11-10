  #include <stdio.h>

int main() {
    FILE *ptr;
    char ch;

    ptr = fopen("starpattern.txt", "a");
    fprintf(ptr, " this is bcs 1a");
    fclose(ptr); 
  
    ptr = fopen("starpattern.txt", "r");

    
    
    while ((ch = fgetc(ptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(ptr); 
    return 0;
}	

//file writng code
#include<stdio.h>

int main(){
	FILE *ptr;
	char ch;
	
	ptr = fopen("starpatten.txt" , "w");
	fprintf(ptr , "this is c language file");
	
	while((ch = fgetc(ptr)) != EOF){
		printf("%c" , ch);
	}
	
	return 0;
}
