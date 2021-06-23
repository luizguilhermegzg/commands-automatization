#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    system("git add .");
    char commit[1024] = "git commit -m ";
    char summary[51];
    printf("Commit summary: ");
    fgets(summary, sizeof(summary), stdin);
    strcat(commit, "'");
    strcat(summary, "'");
    strcat(commit, summary);
    system(commit);
    system("git push");
    printf("\nSucceful!!!");
    return 0;
}