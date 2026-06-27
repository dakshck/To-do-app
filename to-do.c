#include <stdio.h>
#include <string.h>
int main() {

  int maindecision = 0;
  char task[100][100];
  int taskcounter = 0; 
  int deltask = 0;
  printf("\n---To Do---\n\n");

  while(maindecision != 4) {
    printf("1. Add Task\n");
    printf("2. List Tasks\n");
    printf("3. Delete Tasks\n");
    printf("4. Exit\n\n");
    printf(": ");
    scanf("%d", &maindecision);

  switch(maindecision) {
      case 1:
        printf("Enter the task: ");
        getchar();
        fgets(task[taskcounter], 100, stdin);
        printf("Task %d: %s\n", taskcounter, task[taskcounter]);
        taskcounter++;
      break;

      case 2:
        for(int i = 0; i < taskcounter; i++) {
            printf("Task %d: %s", i, task[i]);
        }
        printf("\n");
      break;

      case 3:
        for(int i = 0; i < taskcounter; i++) {
            printf("Task %d: %s", i, task[i]);
        }
        printf("\nEnter the task number to del: ");
        scanf("%d", &deltask);
        for(int i = deltask; i < taskcounter - 1; i++) {
          strcpy(task[i], task[i + 1]);
        }
        taskcounter--;
        printf("\n");
      break;
      
      case 4:
        printf("Exit\n");
    } 

  }

  return 0;
  
}
