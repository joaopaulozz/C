#include<stdio.h>
int main()
{
	double n1,n2,n3,n4,media,ex,ne;
	
	scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
	
	media = n1*0.2 + n2*0.3 + n3*0.4 + n4*0.1;
	
	if(media < 5.0){
		printf("Media: %.1lf\n",media);
		printf("Aluno reprovado.\n");}
	
	else if(media >= 5.0 && media < 7.0){
		printf("Media: %.1lf\n",media);
		printf("Aluno em exame.\n");
		scanf("%lf",&ex);
		ne=(ex+media)/2;
			if(ne >= 5.0){
				printf("Nota do exame: %.1lf\n",ex);
				printf("Aluno Aprovado.");
				printf("Media final: %.1lf\n",ne);}
			else{
				printf("Nota do exame: %.1lf\n",ex);
				printf("Aluno Reprovado.");
				printf("Media final: %.1lf\n",ne);}
	}
	else{
		printf("Media: %.1lf\n",media);
		printf("Aluno aprovado.\n");}
	

	return 0;
}
