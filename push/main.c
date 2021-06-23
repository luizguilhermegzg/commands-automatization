#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("Executing git add .\n ");
    system("git add .");
    char commit[1024] = "git commit -m ";
    char summary[51];
    printf("Commit summary: ");
    scanf("%s", summary);
    strcat(commit, "'");
    strcat(summary, "'");
    strcat(commit, summary);
    printf("Executing git commit -m <summary>...\n");
    system(commit);
    printf("Executing git push...\n");
    system("git push");
    return 0;
}