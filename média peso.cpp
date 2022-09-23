/*3. Em C, leia a idade e o peso de 8 pessoas. Calcular e imprimir as médias de peso das 
pessoas da mesma faixa etária e quantas são de cada faixa etária. As faixas de 1 a 10 anos, 
de 11-20, de 21- 30 e maiores de 30.*/

#include <iostream>

using namespace std;

int main()
{
	int idade[8],quantcrianca=0,quantadole=0,quantjovem=0,quantadult=0;
	float peso[8],pesocrianca=0,pesoadole=0,pesojovem=0,pesoadulto=0;
	
	for(int i=1;i<=8;i++)
	{
		cout<<"Digite a idade da "<<i<<" pessoa: ";
		cin>>idade[i];
		cout<<"Digite o peso da "<<i<<" pessoa: ";
		cin>>peso[i];
		cout<<endl;
		if((idade[i]>=1)&&(idade[i]<=10))
		{
			quantcrianca=quantcrianca+1;
			pesocrianca=pesocrianca+peso[i];
		}
		if((idade[i]>10)&&(idade[i]<21))
		{
			quantadole=quantadole+1;
			pesoadole=pesoadole+peso[i];
		}
		if((idade[i]>20)&&(idade[i]<31))
		{
			quantjovem=quantjovem+1;
			pesojovem=pesojovem+peso[i];
		}
		if((idade[i]>30))
		{
			quantadult=quantadult+1;
			pesoadulto=pesoadulto+peso[i];
		}
	}
	
	cout<<"A media de peso da faixa etaria entre 1 e 10 anos e "<<pesocrianca/quantcrianca<<" kg";
	cout<<" totalizando "<<quantcrianca<< " pessoas!"<<endl;
	
	cout<<"A media de peso da faixa etaria entre 11 e 20 anos e "<<pesoadole/quantadole<<" kg";
	cout<<" totalizando "<<quantadole<< " pessoas!"<<endl;
	
	cout<<"A media de peso da faixa etaria entre 21 e 30 anos e "<<pesojovem/quantjovem<<" kg";
	cout<<" totalizando "<<quantjovem<< " pessoas!"<<endl;
	
	cout<<"A media de peso da faixa etaria maior que 30 anos e "<<pesoadulto/quantadult<<" kg";
	cout<<" totalizando "<<quantadult<<" pessoas!"<<endl;
	
	return 0;
}
