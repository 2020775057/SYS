#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 256
int f(char* path, int line, char* str) {
	FILE *fp;
	char buffer[MAX_LENGTH];
	int lineCnt=0;
	if((fp=fopen(path, "rb"))!=NULL){
			while(fgets(buffer, MAX_LENGTH, fp)){
			
			lineCnt++;
			if(lineCnt==line){
				printf("%s", strtok(buffer, str));
				break;
			}
		}
	}
	fclose(fp);
	return 0;	
}


					

					

int main(int argc, char* argv[]){
	//char* path;
	//const char* str;
	//char* line;
	//scanf("%s %s %s", path, line, str);
	//f(path, atoi(line), str);
	f(argv[1], atoi(argv[2]), argv[3]);

}
