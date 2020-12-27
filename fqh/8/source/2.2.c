#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
	int ch;
	if(argc!=2){
		printf("Arguments error!\n");
		exit(-1);
	}
	if((freopen(argv[1], "r", stdin))==NULL){        //?重定向stdin指向filename
		printf("Can't open %s file!\n",argv[1]);
		exit(-1);
	}

	while((ch=getchar())!=EOF)          /* 从filename中读字符 */
	   putchar(ch);                  /* 向显示器中写字符 */
     return 0;	
}
