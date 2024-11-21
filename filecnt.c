#include<stdio.h>
#include<dirent.h>
#include<unistd.h>
#include<stdlib.h>
int main(void)
{
	DIR *dp;
	struct dirent *dent;
	dp=opendir(".");
	int cnt=0;
	if(dp==NULL)
	{
		printf("Unable to open directory");
		exit(0);
	}
	dent=readdir(dp);
	while(dent!=NULL)
	{
		printf("%s\n",dent->d_name);
		dent=readdir(dp);
		cnt++;
	}
	printf("No. of files:%d",cnt);
	closedir(dp);
	return cnt;
}
