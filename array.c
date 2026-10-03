#include <stdio.h> 

int array(int arrayNum[], long countNum); 
int main(int input1, char* input2[]){
    if(intput1 < 2){
      printf("Input the file name: "); 
      return 1; 
    }
  FILE *fileName = fopen(input2[1],"r"]; 
  if(fileName == NULL){
    printf("File count not be opened: "); 
    return 1;
  }
  long countNum; 
  fscant(fileName, "%old",&countNum[i]); 
  int holdNum[50];
  for(long i = 0; i < countNum;i++){
    fscanf(fileName,"%d",&holdNum[i])
  }
  fclose(fileName); 
  int sumNum = arrayNum(holdNum, countNum); 
  printf("The sum is %d\n", sum); 

  return 0; 
}
