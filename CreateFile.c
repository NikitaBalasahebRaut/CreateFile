//// Application to create new file

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  int fd = 0;
  char name[30] = {'\0'};
  
  printf("Enter the file name \n");
  scanf("%s",name);
  
  fd = creat(name,0777);
  
  if(fd == -1)
  {
	  printf("Unable to create the file \n");
  }
  else
  {
	  printf("file create successfully with fd : %d",fd);
  }
return 0;
}

/*

output

Enter the file name
MyData
file create successfully with fd : 3

*/