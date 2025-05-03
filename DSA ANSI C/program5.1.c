#include<stdio.h>
int LIST[20];
int LINK[20];
int START;
void PROCESS(int);

int main(){
    int PTR;
LIST[0]=22;LIST[2]=5;LIST[3]=19;LIST[5]=87;LIST[7]=29;LIST[8]=79;LIST[9]=33;LIST[11]=2;LIST[13]=50;LIST[14]=8;LIST[16]=55;LIST[18]=99;
LINK[0]=3;LINK[2]=13;LINK[3]=2;LINK[5]=8;LINK[7]=14;LINK[8]=9;LINK[9]=18;LINK[11]=16;LINK[13]=5;LINK[14]=-1;LINK[16]=0;LINK[18]=7;
START=11;
PTR=START;
printf("Initial List:\n");
while(PTR!=-1){
    printf("%d\t",LIST[PTR]);
    PTR=LINK[PTR];
}
PTR=START;
while(PTR!=-1){
    PROCESS(PTR);
    PTR=LINK[PTR];
}
PTR=START;
printf("\n\nList After Traversal:\n");
while(PTR!=-1){
    printf("%d\t",LIST[PTR]);
    PTR=LINK[PTR];
}
return 0;
}

void PROCESS(int p1){
    LIST[p1]=LIST[p1]*10;
}