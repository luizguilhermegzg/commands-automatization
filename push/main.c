#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    system("git add .");
    char commit[51] = "git commit -m ";
    char summary[1024];
    printf("Commit summary: ");
    fgets(summary, sizeof(summary), stdin);
    strcat(commit, "'");
    strcat(summary, "'");
    strcat(commit, summary);
    system(commit);
    system("git push");
    printf("\nSucceful!!!\n\n");
    return 0;
}
