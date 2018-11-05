#include<stdio.h>

int main(){
int lineNumber = 4;
char filename[] = "test.c";
FILE *file = fopen("simp.x", "r");
int count = 0;
if( file != NULL )
{
    char line[256]; /* or other suitable maximum line size */
    while (fgets(line, sizeof line, file) != NULL) /* read a line */
    {
        if (count == lineNumber)
        {
            //use line or in a function return it
            //in case of a return first close the file with "fclose(file);"
            printf("%s\n",line);
        }
        count++;
        
    }
    fclose(file);
}
else
{
    printf("Not exist");
    //file doesn't exist
}
}
