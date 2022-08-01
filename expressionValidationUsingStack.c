#include <stdio.h>
#include<string.h>
int Top=-1;
char stack[100];
int push(char a){
  ++Top;
  stack[Top]=a;
}
int pop(){
  --Top;
}
int main() {
  char string[100];
  scanf("%s",string);
  int length=strlen(string);
  for(int i=0;i<length;++i){
    if(string[i]=='('){
      push(string[i]);
    }
    else if(string[i]==')'){
      pop();
    }
    else{
      continue;
    }
  }
  if(Top==-1){
    printf("It is a valid expression\n");
  }
  else{
    printf("It is not a valid expression");
  }
  return 0;
}
