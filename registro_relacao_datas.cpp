#include<iostream>

using namespace std;
struct Dat{
int dia;
int mes;
int ano;
};
bool bissexto (int ano)
{
    return (ano%4==0) && (ano%100!=0) || (ano%400==0);
}
bool validaData (Dat d)
{
    if(d.mes>=1 && d.mes<= 12 && d.ano>0)
    {
        if(d.mes==1 || d.mes==3 || d.mes==5 || d.mes==7 || d.mes==8 || d.mes==10 || d.mes==12)
            return (d.dia>0 && d.dia <= 31);
        else if(d.mes==4 || d.mes==6 || d.mes==9)
            return (d.dia>0 && d.dia <= 30);
        else if(d.mes==2)
        {
            if(bissexto(d.ano))
                return (d.dia>0 && d.dia <= 29);
            else
                return(d.dia>0 && d.dia <= 28);
        }
    }
    return false;
}

int calculaDiaSemana (Dat d)
{
    int k;
    if((d.mes==1)||(d.mes==2)){
        d.ano--;
        d.mes=d.mes+12;
    }
    k=d.dia+2*d.mes+(3*(d.mes+1)/5)+d.ano+d.ano/4-d.ano/100+d.ano/400+2;
    k=k%7;

    return k;
}
void imprimeDiaSemana (int k)
{
   if(k==0) cout<<"Sabado"<<endl;
   else if(k==1) cout<<"Domingo"<<endl;
   else if(k==2) cout<<"Segunda"<<endl;
   else if(k==3) cout<<"Terca"<<endl;
   else if(k==4) cout<<"Quata"<<endl;
   else if(k==5) cout<<"Quinta"<<endl;
   else if(k==6) cout<<"Sexta"<<endl;
}
void relacaoDatas(Dat d1, Dat d2)
{
    if(d1.dia==d2.dia && d1.mes==d2.mes && d1.ano==d2.ano)
        cout<<"\nAmbas tem a mesma idade"<<endl;
    else if((d1.ano<d2.ano) || (d1.ano==d2.ano && d1.mes<d2.mes) || (d1.ano==d2.ano && d1.mes==d2.mes && d1.dia<d2.dia))
        cout<<"\nPessoa 1 é mais velha"<<endl;
    else
        cout<<"\nPessoa 2 é mais velha"<<endl;
}

void entradaData(Dat &d)
{
    bool dataValida;
    do
    {
        cout<<"Insira a data de nascimento: ";
        cin>>d.dia>>d.mes>>d.ano;
        dataValida = validaData(d);
        if(dataValida == false)
            cout<<"DATA INVÁLIDA !!!";
    }while(dataValida == false);
}

int main()
{
    setlocale(LC_ALL,"Portuguese");

    Dat d1;
    Dat d2; //dat tipo

    cout << "Pessoa 1\n";
    entradaData(d1);
    cout << "Pessoa 2\n";
    entradaData(d2);

    cout<<"\nPessoa 1 nasceu em: ";
    imprimeDiaSemana(calculaDiaSemana(d1));

    cout<<"Pessoa 2 nasceu em: ";
    imprimeDiaSemana(calculaDiaSemana(d2));

    relacaoDatas(d1, d2);

    system("Pause");
    return 0;
}
