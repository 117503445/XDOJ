/* 
Coder:117503445
https://github.com/117503445/XDOJ
GNU GPLV3 
*/ 
#include<stdio.h>
int MatchCheck(char a[],int len){
    int flag = 0;
    char s[10000];
    int top,i;
    char temp;
    // 初始化一个栈
    top = 0;
    for(i=0;i<len;i++){
        if(a[i]=='['){ // 如果是左括号直接入栈
            s[++top]=a[i];
            continue;
        }
        if(a[i]==']'){ // 如果是右括号，则尝试匹配
            temp = s[top];
            if(temp=='['){
                flag = 1;
                top--;
                continue;
            }else{
                flag = 0;
                break;
            }
        }

        if(a[i]=='('){ // 如果是左括号直接入栈
            s[++top]=a[i];
            continue;
        }
        if(a[i]==')'){ // 如果是右括号，则尝试匹配
            temp = s[top];
            if(temp=='('){
                flag = 1;
                top--;
                continue;
            }else{
                flag = 0;
                break;
            }
        }
                if(a[i]=='{'){ // 如果是左括号直接入栈
            s[++top]=a[i];
            continue;
        }
        if(a[i]=='}'){ // 如果是右括号，则尝试匹配
            temp = s[top];
            if(temp=='{'){
                flag = 1;
                top--;
                continue;
            }else{
                flag = 0;
                break;
            }
        }
    }
    if(flag&&(top==0)){
        return 1;
    }else{
        return 0;
    }

}

int main(){
	int r[1000];
	int i;
	int c=0;
	for(i=0;i<1000;i++)r[i]=2;
	while(1){	
		char s[10000];
		for(i=0;i<10000;i++){
			s[i]='\0';
		}
		fgets(s,10000,stdin);
		int n=0;
		for(i=0;i<10000;i++){
			if(s[i]!=0)n++ ;else break;
		} 
		if(n==1)break;
		int result=MatchCheck(s,n);
		r[c]=result;
		c++;
	}
	for(i=0;i<1000;i++){
		if(r[i]==0){
			printf("no\n");
		}else if(r[i]==1){
			printf("yes\n");
		}else {
			break;
		}
	}
	return 0;
}
//printf("%d",);
//scanf("%d",&);
