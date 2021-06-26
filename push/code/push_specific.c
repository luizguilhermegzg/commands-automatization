#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char to_add[270];
    char git_add[250] = "git add ";
    char git_commit[66] = "git commit -m ";
    char summary[51];
    printf("Wish files will be commited: ");
    fgets(to_add, sizeof(to_add), stdin);
    strcat(git_add, to_add);
    system(git_add);
    printf("Commit summary [50 character limit]: ");
    fgets(summary, sizeof(summary), stdin);
    strcat(git_commit, "'");
    strcat(summary, "'");
    strcat(git_commit, summary);
    system(git_commit);
    system("git push");
    printf("\nSucceful!!!\n\n");
    return 0;
}
