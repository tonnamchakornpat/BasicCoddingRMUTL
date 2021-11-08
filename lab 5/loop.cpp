#include<stdio.h>

char Grade_pro(int Score){
    if(Score<50)
		{
			return 'F';
		}
		else if(Score>=50&&Score<60)
		{
			return 'D';
		}
		else if(Score>=60&&Score<70)
		{
			return 'C';
		}
		else if(Score>=70&&Score<80)
		{
			return 'B';
		}
		else if(Score>=80&&Score<=100)
		{
			return 'A';
		}
}

int main() {
    char subject[20],Grade;
	int i,n,Credit,Score;
	float GPA,Credittotol,Gradetotol;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{

		printf("%d",i);
		scanf("%s",&subject);
		scanf("%d",&Credit);
		scanf("%d",&Score);
		Grade = Grade_pro(Score) ;
		printf("%c\n\n",&Grade);
	
		
	}
    return 0 ;
}

