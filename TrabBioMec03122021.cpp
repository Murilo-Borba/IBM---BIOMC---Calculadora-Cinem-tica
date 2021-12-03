#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
float speed(){
	system("cls");
	printf("Deseja encontrar:\n0 - Velocidade\n1 - Espa�o\n2 - Tempo\n9 - Voltar\n");
	int esco;
	float vm, ds, dt;
	scanf("%d",&esco);
	do{
		if(esco == 0){
			printf("\nDigite os valores de:\n\nVaria�ao do espa�o: ");
			scanf("%f",&ds);
			printf("Varia�ao do tempo: ");
			scanf("%f",&dt);
			vm = ds/dt;
			printf("A velocidade � de %.2fm/s\n\n\n",vm);
			return vm;
		}
		if(esco == 1){
			printf("\nDigite os valores de:\n\nVelocidade: ");
			scanf("%f",&vm);
			printf("Varia�ao do tempo: ");
			scanf("%f",&dt);
			ds = vm * dt;
			printf("A dist�ncia � de %.2fm\n\n\n",ds);
			return ds;
		}
		if(esco == 2){
			printf("\nDigite os valores de:\n\nVelocidade: ");
			scanf("%f",&vm);
			printf("Varia�ao do espa�o: ");
			scanf("%f",&ds);
			dt = ds * vm;
			printf("O tempo � de %.2fs\n\n\n",dt);
			return dt;
		}
	}while(esco != 9);
	system("cls");
	return 0;
}

float haste(){
	system("cls");
	printf("Deseja encontrar:\n0 - Acelera�ao\n1 - Velocidade\n2 - Tempo\n9 - Voltar\n");
	int esco1;
	float a, dv, dt;
	scanf("%d",&esco1);
	do{
		if(esco1 == 0){
			printf("Digite os valores de:\n\nVaria�ao da velocidade: ");
			scanf("%f",&dv);
			printf("Varia�ao do tempo:");
			scanf("%f",&dt);
			a = dv/dt;
			printf("A acelera�ao � de %.2fm/s�\n\n",a);
			return a;
		}
		if(esco1 == 1){
			printf("\nDigite os valores de:\n\nAcelera�ao: ");
			scanf("%f",&a);
			printf("Varia�ao do tempo: ");
			scanf("%f",&dt);
			dv = a * dt;
			printf("A velocidade m�dia � de %.2fm/s\n\n\n",dv);
			return dv;
		}
		if(esco1 == 2){
			printf("\nDigite os valores de:\n\nAcelera�ao: ");
			scanf("%f",&a);
			printf("Varia�ao da velocidade: ");
			scanf("%f",&dv);
			dt = dv / a;
			printf("O tempo � de %.2fs\n\n\n",dt);
			return dt;
		}
	}while(esco1 != 9);
	system("cls");
	return 0;
}

float horar(){
	system("cls");
	printf("Deseja encontrar:\n0 - Velocidade\n1 - Velocidade Inicial\n2 - Acelera�ao\n3 - Tempo\n9 - Voltar\n");
	int esco2;
	float a, v, v0, t;
	scanf("%d",&esco2);
	do{
		if(esco2 == 0){
			printf("\nDigite os valores de:\nVelocidade Inicial: ");
			scanf("%f",&v0);
			printf("Acelera�ao:");
			scanf("%f",&a);
			printf("Tempo:");
			scanf("%f",&t);
			v = v0 + (a*t);
			printf("A Velocidade � de %.2fm/s\n\n",v);
			return v;
		}
		if(esco2 == 1){
			printf("\n\nDigite os valores de:\nVelocidade: ");
			scanf("%f",&v);
			printf("Aceleracao: ");
			scanf("%f",&a);
			printf("Tempo:");
			scanf("%f",&t);
			v0 = v + (a * t);
			printf("A velocidade inicial � de %.2fm/s\n\n\n",v);
			return v;
		}
		if(esco2 == 2){
			printf("\n\nDigite os valores de:\nVelocidade: ");
			scanf("%f",&v);
			printf("Velocidade Inicial: ");
			scanf("%f",&v0);
			printf("Tempo:");
			scanf("%f",&t);
			a = v - v0 / t;
			printf("A acelera�ao � de %.2fm/s�\n\n\n",t);
			return t;
		}
		if(esco2 == 3){
			printf("\n\nDigite os valores de:\nVelocidade: ");
			scanf("%f",&v);
			printf("Velocidade Inicial: ");
			scanf("%f",&v0);
			printf("Aceleracao: ");
			scanf("%f",&a);
			t = (v-v0)/a;
			if(t < 0)
				t = t - (2 * t);
			printf("O tempo � de %.2fs\n\n\n",t);
			return t;
		}
	}while(esco2 != 9);
	system("cls");
	return 0;
}

float torricelli(){
	system("cls");
	printf("Deseja encontrar:\n0 - Velocidade\n1 - Velocidade Inicial\n2 - Acelera�ao\n3 - Dist�ncia\n9 - Voltar\n");
	int esco3;
	float a, v, v0, d;
	scanf("%d",&esco3);
	do{
		if(esco3 == 0){
			printf("\nDigite os valores de:\nVelocidade Inicial: ");
			scanf("%f",&v0);
			printf("Acelera�ao:");
			scanf("%f",&a);
			printf("Dist�ncia:");
			scanf("%f",&d);
			v = v0 * v0 + (2*a*d);
			printf("A Velocidade � de %.2fm/s\n\n",sqrt(v));
			return v;
		}
		if(esco3 == 1){
			printf("\n\nDigite os valores de:\nVelocidade: ");
			scanf("%f",&v);
			printf("Aceleracao: ");
			scanf("%f",&a);
			printf("Dist�ncia:");
			scanf("%f",&d);
			v0 = v * v + (2*a*d);
			printf("A velocidade inicial � de %.2fm/s\n\n\n",sqrt(v0));
			return v;
		}
		if(esco3 == 2){
			printf("\n\nDigite os valores de:\nVelocidade: ");
			scanf("%f",&v);
			printf("Velocidade Inicial: ");
			scanf("%f",&v0);
			printf("Dist�ncia:");
			scanf("%f",&d);
			a = (v0*v0 - v*v)/-2*d;
			printf("A acelera�ao � de %.2fm/s�\n\n\n",a);
			return a;
		}
		if(esco3 == 3){
			printf("\n\nDigite os valores de:\nVelocidade: ");
			scanf("%f",&v);
			printf("Velocidade Inicial: ");
			scanf("%f",&v0);
			printf("Aceleracao: ");
			scanf("%f",&a);
			d = (v0*v0 - v*v)/-2*a;
			printf("A dist�ncia � de %.2fm\n\n\n",d);
			return d;
		}
	}while(esco3 != 9);
	system("cls");
	return 0;
}

main(){
	int ind;
	float velo, acel, vovoat, torric;
	setlocale(LC_ALL,"Portuguese");
	do{
		printf("Insira um valor:\n");
		printf("0 - F�rmula da Velocidade\n1 - Acelera�ao\n2 - Fun�ao Hor�ria da velocidade\n3 - Torricelli\n9 - Sair\n\n");
		scanf("%d",&ind);
		if(ind == 0)
			velo = speed();
		if(ind == 1)
			acel = haste();
		if(ind == 2)
			vovoat = horar();
		if(ind == 3)
			torric = torricelli();
	}while(ind != 9);
}
