#include "input.h"

/*
IDを入力させ，その値を戻り値とする
*/
int scan_id(){
	int id;
	printf("IDを入力");
	scanf("%d", &id);
	return id;
}

/*
パスワードを入力させ，その値を戻り値とする
*/
int scan_pass(){
	int pw;
	printf("Passwordを入力");
	scanf("%d", &pw);
	return pw;
}
