/* Grupo: Giovanna Maira Soares Chaves,2024005472; Gabriel Leandro Fonseca Silva, 2024008198.
   Data:02/07/2024
   Objetivo: O programa serve para dar informações sobre os personagens de Steven Universo.
   Nosso ponto de vista: como fãs de longa data do desenho, usariamos esse programa para pesquisar em qual temporrada está
   um determinado personagem para assistirmos novamente, além de saber sua espécie/gem, tornando a esperiência ainda melhor. */

#include <iostream>
#include <fstream>
#include <cstring> // Para funções de manipulação de C-strings
using namespace std;

struct Registro   //Armazena as informações vindas do arquvio de entrada, cada registro é uma linha
{
    char Personagem[100];
    char Especie[100];
    int Forca;
    char Temporada1[100];
    char Temporada2[100];
    char Temporada3[100];
    char Temporada4[100];
    char Temporada5[100];
};
void substring(char linha[800], char aux[100], int &i, char delimitador)
{
    //passa a informação de linha a linha(linha) do arquivo, respeitando as vírgulas e armazena em aux
    int k = 0;
    while (linha[i] != delimitador && linha[i] != '\0')
    {
        aux[k] = linha[i];
        i++;
        k++;
    }
    aux[k] = '\0';
    if (linha[i] == delimitador)
        i++;
}
bool carrega_registro(ifstream& arquivo, Registro& h) //armazenar as informações do arquivo ifstream no registro
{
    char linha[800]; // 8 campos por linha no arquivo CSV
    if (arquivo.getline(linha, 800))//le a linha do arquivo
    {
        int i = 0;
        char aux[100];

        substring(linha, aux, i, ',');//sobrescreve em aux a linha i,rspeitando o delimitador
        strcpy(h.Personagem, aux); //copia aux em h.personagem, no registro

        substring(linha, aux, i, ',');
        strcpy(h.Especie, aux);

        substring(linha, aux, i, ',');
        h.Forca = atoi(aux);

        substring(linha, aux, i, ',');
        strcpy(h.Temporada1, aux);

        substring(linha, aux, i, ',');
        strcpy(h.Temporada2, aux);

        substring(linha, aux, i, ',');
        strcpy(h.Temporada3, aux);

        substring(linha, aux, i, ',');
        strcpy(h.Temporada4, aux);

        substring(linha, aux, i, '\0');
        strcpy(h.Temporada5, aux);

        return true; //retorna se o procedimento deu certo
    }
    return false; //ou não
}

void imprimirRegistro(Registro registro, ofstream& saida)//o arquivoSaida do tipo ofstream será modificado e impresso
{
    saida << registro.Personagem << ","; //o arquivo saida recebe a informação e a virgula
    saida  << registro.Especie << ",";
    saida  << registro.Forca << ",";
    saida  << registro.Temporada1 << ",";
    saida << registro.Temporada2 << ",";
    saida  << registro.Temporada3 << ",";
    saida  << registro.Temporada4 << ",";
    saida << registro.Temporada5 << endl;
}

int exibirMenu() //exibe o menu e retorna a opção escolhida pelo usuário
{
    int escolha;
    cout << "Menu de Pesquisa:" << endl;
    cout << "1. Pesquisar a espécie" << endl;
    cout << "2. Pesquisar a força" << endl;
    cout << "3. Pesquisar a participação na temporada 1" << endl;
    cout << "4. Pesquisar a participação na temporada 2" << endl;
    cout << "5. Pesquisar a participação na temporada 3" << endl;
    cout << "6. Pesquisar a participação na temporada 4" << endl;
    cout << "7. Pesquisar a participação na temporada 5" << endl;
    cout << "8. Pesquisar todas as opções" << endl;
    cout << "9. Sair" << endl;
    cout << "Escolha uma opção: ";
    cin >> escolha;
    cin.ignore(); // Limpar o buffer do teclado
    return escolha;
}

bool comparaStrings(char str1[100], char str2[100])
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') //se a linha não chegou ao fim e as chars são diferentes, retorne falso
    {
        if (str1[i] != str2[i])
        {
            return false;
        }
        i++;
    }
    return str1[i] == '\0' && str2[i] == '\0'; //compara e retorna falso ou verdadeiro
}

void pesquisarEImprimir(Registro registros[], int numRegistros, int opcao, ofstream& arquivoSaida) //o arquivoSaida do tipo ofstream será modificado e impresso
{
    char termoPesquisa[100];
    cout << "Informe o personagem, começando com letra maiúscula: ";
    cin.getline(termoPesquisa, 100);

    bool encontrado = false;
    for (int i = 0; i < numRegistros; ++i)
    {
        switch (opcao)
        {
        case 1: // Pesquisar por Espécie
            if (comparaStrings(registros[i].Personagem, termoPesquisa))//a informação do registro será comparada com a resposta do usuário
            { //e se achou
                imprimirRegistro(registros[i], arquivoSaida);// passa essa informação para ser impressa no arquivo de saída
                cout << "Especie: " << registros[i].Especie << endl;// e imprime na tela
                encontrado = true; //verifica se deu certo
            }
            break;
        case 2: // Pesquisar por Força
            if (comparaStrings(registros[i].Personagem, termoPesquisa))
            {
                imprimirRegistro(registros[i], arquivoSaida);
                cout << "Força: " << registros[i].Forca << endl;
                encontrado = true;
            }
            break;
        case 3: // Pesquisar por Temporada 1
            if (comparaStrings(registros[i].Personagem, termoPesquisa))
            {
                imprimirRegistro(registros[i], arquivoSaida);
                cout << "Temporada 1: " << registros[i].Temporada1 << endl;
                encontrado = true;
            }
            break;
        case 4: // Pesquisar por Temporada 2
            if (comparaStrings(registros[i].Personagem, termoPesquisa))
            {
                imprimirRegistro(registros[i], arquivoSaida);
                cout << "Temporada 2: " << registros[i].Temporada2 << endl;
                encontrado = true;
            }
            break;
        case 5: // Pesquisar por Temporada 3
            if (comparaStrings(registros[i].Personagem, termoPesquisa))
            {
                imprimirRegistro(registros[i], arquivoSaida);
                cout << "Temporada 3: " << registros[i].Temporada3 << endl;
                encontrado = true;
            }
            break;
        case 6: // Pesquisar por Temporada 4
            if (comparaStrings(registros[i].Personagem, termoPesquisa))
            {
                imprimirRegistro(registros[i], arquivoSaida);
                cout << "Temporada 4: " << registros[i].Temporada4 << endl;
                encontrado = true;
            }
            break;
        case 7: // Pesquisar por Temporada 5
            if (comparaStrings(registros[i].Personagem, termoPesquisa))
            {
                imprimirRegistro(registros[i], arquivoSaida);
                cout << "Temporada 5: " << registros[i].Temporada5 << endl;
                encontrado = true;
            }
            break;
        case 8: // Pesquisar todas as opções
            if (comparaStrings(registros[i].Personagem, termoPesquisa)) //passa o registro e a resposta do usuário por referencia para a função que o encontra
            {
                imprimirRegistro(registros[i], arquivoSaida); //adiciona o contúdo no arquivo de saida
                cout << "Registro encontrado:" << endl;
                cout << "Personagem: " << registros[i].Personagem << endl;//imprime a informação do arquivo de saida
                cout << "Especie: " << registros[i].Especie << endl;
                cout << "Força: " << registros[i].Forca << endl;
                cout << "Temporada 1: " << registros[i].Temporada1 << endl;
                cout << "Temporada 2: " << registros[i].Temporada2 << endl;
                cout << "Temporada 3: " << registros[i].Temporada3 << endl;
                cout << "Temporada 4: " << registros[i].Temporada4 << endl;
                cout << "Temporada 5: " << registros[i].Temporada5 << endl;
                cout << endl;
                encontrado = true;
            }
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
            return;
        }
    }
    if (!encontrado)//informa quando o registro não foi encontrado
    {
        cout << "Nenhum registro encontrado para o termo de pesquisa." << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Portuguese");

    Registro registros[75];
    int numRegistros = 0;

    ifstream arquivoEntrada("steven.csv"); //abre o arquivo csv de entrada
    if (!arquivoEntrada.is_open()) // verifica se o arquivo abriu
    {
        cout << "Erro ao abrir o arquivo steven.csv" << endl;
        return 1;
    }


    while (numRegistros < 75 && carrega_registro(arquivoEntrada, registros[numRegistros]))// Ler todos os registros do arquivo,
    {
        //se a linha do arquivo for menor que 75 e a linha foi carregada na funçaõ, vá para a próxima linha
        numRegistros++;
    }
    arquivoEntrada.close(); // Fechar o arquivo após a leitura

    if (numRegistros == 0) // informa caso nenhuma linha tenha sido lida
    {
        cout << "Nenhum registro encontrado no arquivo steven.csv" << endl;
    }

    ofstream arquivoSaida("steven_saida.csv"); // cria o arquivo de saída
    if (!arquivoSaida.is_open()) //verifica se abriu
    {
        cout << "Erro ao abrir o arquivo de saída." << endl;
    }


    arquivoSaida << "Personagem,Especie,Forca,Temporada1,Temporada2,Temporada3,Temporada4,Temporada5" << endl;// Escrever o cabeçalho do CSV

    int escolha;
    do  //verifica se o usuario escolheu uma das opções do menu e exibe ele novamente caso contrário
    {
        escolha = exibirMenu();//chama a fução do menu e armazena a opção escolida pelo usuário em "escolha"
        if (escolha >= 1 && escolha <= 8)
        {
            pesquisarEImprimir(registros, numRegistros, escolha, arquivoSaida);
        }
    }
    while (escolha != 9);//se 9 sai do programa

    arquivoSaida.close(); // Fechar o arquivo de saída após a escrita

    return 0;
}
