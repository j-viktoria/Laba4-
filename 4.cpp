#include <iostream>
#include <string.h.>
using namespace std;
void proverka(bool,int,int);
bool vivod(int,int);
char st[256];
int main()
{

int i,j,kordnach=0,kordkonez;
bool bl=true;
gets(st);
strlwr(st);
strcat(st," ");
j=strlen(st);

for(i=0;i<j;i++)
{
	if(st[i]==' ')
	{
		kordkonez=i-1;
		vivod(proverka(kordnach,kordkonez),kordnach,kordkonez);
		kordnach=i+1;
	}
}


return 0;
}

bool proverka(int a, int b)
{	bool bl;
	if(st[a]==st[b])bl=true; else bl=false;
	if(a++<b-- && bl==true)proverka(a++,b--);
	return bl;
}
void vivod (bool bl,int a,int b)
{	if(bl)
	{
	for(int l=a;l<=b;l++)
	cout<<st[l];
	cout<<endl;
	}
}
