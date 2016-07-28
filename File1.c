#pragma hdrstop
#pragma argsused

#include <stdio.h>
#include <tchar.h>


int _tmain(int argc, _TCHAR* argv[])
{
	FILE *f=fopen("C:\\asd.txt","r");
	FILE *back=fopen("C:\\1\\back.txt","w+");

	char str[2];
	int i=-1;
	int a=1;
	int lenth[10];
	if (f==NULL) {
		printf("error");
	}
	else{
		printf("ok");
		if (back==NULL) {
			printf("error");
		}
		else{
			printf("ok");
			while(!feof(f))
			{
				i=i+1;
				fgets(str,10,f);
				lenth[i]=strlen(str);

			}
				while(fseek(f,-(lenth[i]+lenth[i-1]+a),1)==0)
				{
				i=i-1;
				fputs(str,back);
					if (a==1)
					{
						a=2;
						fputs("\n",back);
					}
				fgets(str,10,f);
				}
				fputs(str,back);
			if(f) fclose(f);
			if(back) fclose(back);


		}
	}
	return 0;
}

