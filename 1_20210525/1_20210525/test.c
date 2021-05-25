#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <mysql/mysql.h>
int main(){
	MYSQL_*mysql = mysql_init(NULL);
	if (mysql == NULL){
		printf("init mysql error\n");
		return -1;
	}
	//连接服务器
	if (mysql_real_connect(mysql, "127.0.0.1", "root", "", "db_blog", 0, NULL, 0) == NULL){
		printf("connect mysql error server failed:%s\n", mysql_error(mysql));
		return -1;
	}
	//设置客户端字符集
	if (mysql_set_character(mysql, "utf8") != 0){
		printf("set character failed:%s\n", mysql_error(mysql));
		return -1;
	}
	//创建表
	char*sql_str = "create table if not exists tb_stu(id int,name varchar(32),info text,score decimal(4,2),bitrh datatime);";
	int ret = mysql_query(mysql, sql_str);
	if (ret != 0){
		printf("query sql failed:%s\n", mysql_error(mysql));
		return -1;
	}
	return 0;
}