#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 256
int main(int argc, char *argv[]){
	FILE *fp;
	char buffer[MAX_LENGTH];
	int lineCnt = 0;
	if((fp=fopen("a.txt", "rb")) != NULL){
		while(fgets(buffer, MAX_LENGTH, fp)){
			lineCnt++;
				
			if(lineCnt == 2){
				printf("%s", strtok(buffer, "option: "));
				break;
			}
		}
	}
	fclose(fp);
	return 0;
}

