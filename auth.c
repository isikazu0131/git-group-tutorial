#include "auth.h"

/*
  入力IDを受け取り，登録されたIDと等しいか返す
  正しい:1 正しくない:0
 */
int auth_id(int input_id){
  int id[]={114514,919,272,373,810,142};
  int i,flug = 0;
  for (i = 0; i < 6; i++) {
    if (input_id==id[i]) {
      flug = 1;
    }
  }
  if(flug == 0){
    return 0;
  }else{
    return 1;
  }

}

int auth_pass(int input_pass){
  int pass[]={4649,131,1212,114514,4545,893}
  int i,flug = 0;
  for (i = 0; i < 6; i++) {
    if (input_pass==pass[i]) {
      flug = 1;
    }
  }
  if(flug == 0){
    return 0;
  }else{
    return 1;
  }
}
