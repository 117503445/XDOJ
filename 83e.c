/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/
#include <stdio.h>
#include <string.h>

#define p(x) printf("%d", x)
#define pl(x) printf("%d\n", x)
#define pc(x) printf("%c", x)
#define plc(x) printf("%c\n", x)
#define ps(x) printf(x)
int main()
{
	char s[300]={0};
	
	gets(s);
	while(1){
		int i=0;
		char ts[300]={0};
		gets(ts);
		if(ts[0]=='p'){
			break;
		}
		if(ts[0]=='l'){
			puts(s);
			continue;
		}
		if(ts[3]=='.'&&ts[4]=='.'){
			i=strlen(s)-1;
			while(i>0){
				//printf("i=%d",i);
				if(s[i]=='/'){
					s[i]=0;
					break;
				}
				s[i]=0;
				i--;
			}
		}else if(ts[3]=='/'&&ts[4]==0){
			for(i=0;i<300;i++){
				s[i]=0;
			}
			s[0]='/';
		}else if(ts[3]=='/'&&ts[4]!=0){
			strcpy(s,ts+3);
		}else{
			if(s[strlen(s)-1]!='/'){
			s[strlen(s)]='/';	
			}
			int n=strlen(s);
			for(i=3;i<strlen(ts);i++){
				s[n+i-3]=ts[i];
			}
		}
		if(strlen(s)>1&&s[strlen(s)-1]=='/'){
			s[strlen(s)-1]=0;
		}
	}
	puts(s);
	return 0;
}
