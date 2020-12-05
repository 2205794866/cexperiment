#ifndef _FILE_H
#define _FILE_H  //避免被重复include
#include <stdio.h>
#include "file2.c"
#endif
extern int x,y;
extern char ch;  //在.h文件里面定义共享的变量
