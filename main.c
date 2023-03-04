#include <stdio.h>
#include <stdbool.h>
void Library(char title[],char author[],int pages, bool read){
  printf("Book tittle: %s",title);
  printf("\nBook authoor: %s",author);
  printf("\nBook pages: %d",pages);
  if(read){
  printf("\nBook Status:Finished reading,");
    }
else{
  printf("\nBook Completion:Not yet..!!!");
    }
}


int main()
{
Library("The Lion king","Dimka",20,false);
      printf("\n");

    return 0;
  
} 
