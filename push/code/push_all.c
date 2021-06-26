#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    system("git add .");
    char commit[270] = "git commit -m ";
    char summary[256];
    printf("Commit summary [50 character limit]: ");
    fgets(summary, sizeof(summary), stdin);
    strcat(commit, "'");
    strcat(summary, "'");
    strcat(commit, summary);
    system(commit);
    system("git push");
    printf("\nSucceful!!!\n\n");
    return 0;
}
