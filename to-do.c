#include <stdio.h>
#include <string.h>

void addtsk(int *taskcounter, char task[][100]);
void lstsk(int taskcounter, char task[][100]);
void deltsk(int deltask, int *taskcounter, char task[][100]);

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
        addtsk(&taskcounter, task);
      break;

      case 2:
        lstsk(taskcounter, task);
      break;

      case 3:
        lstsk(taskcounter, task);
        deltsk(deltask, &taskcounter, task);
      break;
      
      case 4:
        printf("Exit\n");
    } 

  }
  return 0;
}

void addtsk(int *taskcounter, char task[][100]) {
  printf("Enter the task: ");
  getchar();
  fgets(task[*taskcounter], 100, stdin);
  printf("Task %d: %s\n", *taskcounter, task[*taskcounter]);
  (*taskcounter)++;
}

void lstsk(int taskcounter, char task[][100]) {
  printf("\n");
  for(int i = 0; i < taskcounter; i++) {
    printf("Task %d: %s", i, task[i]);
  }
  printf("\n");
}

void deltsk(int deltask, int *taskcounter, char task[][100]) {
  printf("Enter the number of task you want to del: ");
  scanf("%d", &deltask);
    for(int i = deltask; i < *taskcounter - 1; i++) {
      strcpy(task[i], task[i + 1]);
    }
  (*taskcounter)--;
  printf("\n");
}
