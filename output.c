#include "output.h"

/*
正しい:1 正しくない:0
以上を元にして，両方が正しい時認証出来たと出力する
それ以外の際は認証できなかったと出力する
*/
void print_result(int auth_id_status, int auth_pass_status){
	if (auth_id_status == 1 && int auth_pass_status == 1)
		printf("認証できた");
	else
		printf("認証できなかった");
}
