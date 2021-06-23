#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    printf("Updating to commit...\n ");
    system("git add .");
    char commit[1024] = "git commit -m ";
    char summary[51];
    printf("Commit summary: ");
    fgets(summary, sizeof(summary), stdin);
    strcat(summary, "'");
    printf("%s", summary);
    //system(commit);
    //system("git push");
    return 0;
}