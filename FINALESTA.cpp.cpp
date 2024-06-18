#include <iostream>
#include<stdlib.h>
#include<windows.h>
#include<cstdlib>
using namespace std;

void jvelha_menu();

struct jg_velha{
    string game[3][3] = {{ " "," "," "},{" "," "," "},{" "," "," "}};
    int linha, coluna;
    char jogador;

    //Este construtor inicializa as variaveis necessarias para um bom desempenho do restante do c�digo.
    jg_velha() {
        jogador = 'X'; // cmc jogador em X
        coluna = -1;
        linha = -1;
    }

    //Esta fun��o chama a estrutura do jogo da velha.
    void jogovelhachama(){
        if(verifica() == 1 || verifica() == -3 ){

                int main();
        }else{
         for(int i = 0; i <= 2; ++i){
                for (int j = 0; j <= 2 ;++j){
                    if(j == 2){
                        cout << game[i][j];
                        cout << endl;
                    }else{
                        if(j == 0 ){
                            cout << " ";
                        }
                            cout << game[i][j] << "|";
                        }

                }
            if( i != 2)
                cout << "-------" << endl;
         }
         cout << endl;

        joga();}
    }

    //Esta fun��o l� a linha/coluna em que o jogador deseja posicionar o X ou O.
    void joga(){

        cout<< "________Jogador " << jogador << "_______" << endl;
        do{
            if( linha != 1 && linha != 2 && linha != 3 && linha != -1)
                cout << "Linha invalida, insira novamente..." << endl;
            cout << "Linha desejada: (1,2,3)" << endl;
            cin >> linha;
            cin.ignore(80,'\n');
        }while(linha != 1 && linha != 2 && linha != 3);
        do{
            if( coluna != 1 && coluna != 2 && coluna != 3 && coluna != -1)
                cout << "Coluna invalida, insira novamente..." << endl;
            cout << "Coluna desejada:(1,2,3)" << endl;
            cin >> coluna;
            cin.ignore(80,'\n');
        }while(coluna != 1 && coluna != 2 && coluna != 3);

        if(game[linha-1][coluna-1] != " "){
            cout << "Posicao indisponivel, escolha outra..." << endl;
            joga();
        }else{
            game[linha - 1][coluna - 1] = jogador;
        //Este if verifica se h� ganhador atrav�s da fun��o "verifica()".
        if(verifica() == 1){
                system("cls");
                jogovelhachama();
                cout << "===============================" << endl;
                cout << "     O Jogador: " << jogador << " Venceu! :)" <<endl;
                cout << "===============================" << endl;
                cout << endl;
                cout << "Tecle <Enter> para retornar ao menu principal... " << endl;
                cin.get();
                system("cls");
                int main();
        }
        //Este if verifica se h� empate atrav�s da fun��o "verifica()".
        if(verifica() == -3){
                system("cls");
                jogovelhachama();
                cout << "===============================" << endl;
                cout << "          Deu velha! :(        " <<endl;
                cout << "===============================" << endl;
                cout << endl;
                cout << "Tecle <Enter> para retornar ao menu principal... " << endl;
                cin.get();
                system("cls");
                int main();
        }

        //Este if/else alterna entre os jogadores.
        if (jogador == 'X')
            jogador = 'O';
        else
            jogador = 'X';
        system("cls");
        jogovelhachama();
        }
    }

    //Esta fun��o vefifica todas as possibilidades de vitoria e empate.
   int verifica(){
       //Verifica possiveis vitorias na Horizontal.
        for(int i = 0; i < 3; ++i){
            if(game[i][0] == game[i][1] && game[i][1] == game[i][2] && game [i][0] != " "){
                return 1;
            }
        }

        //Verifica possiveis vitorias na Vertical.
        for(int i = 0; i < 3; ++i){
            if(game[0][i] == game[1][i] && game[1][i] == game[2][i] && game [0][i] != " "){
                return 1;
            }
        }

        //Verifica se h� Empate.
        if(game[0][0] != " " && game[0][1] != " " && game[0][2] != " " && game[1][0] != " " && game[1][1] != " " && game[1][2] != " " && game[2][0] != " " && game[2][1] != " " && game[2][2] != " "){
            return -3;
        }
        ////Verifica possiveis vitorias na Diagonal.
        else if((game[0][0] == game[1][1] && game[1][1] == game[2][2] && game [0][0] != " ") || (game[0][2] == game[1][1] && game[1][1] == game[2][0] && game [0][2] != " ")){
                return 1;
        }
        else
        return 0;
    }
};

struct BNaval{
    int alternaplayer = 1;
    int jogador, vencedor;

      string game[10][10],game2[10][10],gamemostra[10][10],gamemostrap1[10][10],gamemostrap2[10][10];

    BNaval() {
        // Inicializando as matrizes com espa�os em branco
        for(int i = 0; i < 10; ++i) {
            for(int j = 0; j < 10; ++j) {
                game[i][j] = " ";
                game2[i][j] = " ";
                gamemostra[i][j] = " ";
                gamemostrap1[i][j] = " ";
                gamemostrap2[i][j] = " ";
            }
        }
    }





    void bnavalchama(int jogador){
    cout << "-----------------------" << endl;
    cout << "   ";
    for(int k = 0; k < 10; ++k){
        cout << k+1 << " ";
    }
    cout << endl;
    cout << "-----------------------" << endl;
    for(int i = 0; i < 10; ++i){
        if(i < 9){
            cout << i +1 << " |";
        }else
        cout << i +1<< "|";
        for (int j = 0; j < 10 ;++j){
            if(j == 9){
                cout << gamemostra[i][j];
                cout << "|";
            }else{
                cout << gamemostra[i][j];
                cout << "|";
            }
        }
        cout << endl;
        cout << "-----------------------" << endl;
    }
    cout << endl;
            if(jogador == 1){
                embarcacaop1();
            }else if(jogador == 2){
                embarcacaop2();
            }else if(jogador == 0){
                alternajogador();
            }
         }

    bool verificabaixo(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
            for(int i = 1; i <= 2; ++i){
              if(game[linha-1+i][coluna-1] == " "&& i==1){
                    posicao1 = true;
                }
               else if (game[linha-1+i][coluna-1] == " "&& i==2){
                posicao2 = true;
               }
              }
            if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
            }
    }

    bool verificadireita(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
        for(int i = 1; i <= 2; ++i){
              if(game[linha-1][coluna-1+i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game[linha-1][coluna-1+i] == " " && i == 2){
                    posicao2 = true;
                }

            }
            if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificaEsquerda(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
        for(int i = 1; i <= 2; ++i){
              if(game[linha-1][coluna-1-i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game[linha-1][coluna-1-i] == " " && i == 2){
                    posicao2 = true;
                }

            }
            if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificacima(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
        for(int i = 1; i <= 2; ++i){
            if(game[linha-1-i][coluna-1] == " " && i == 1){
                posicao1 = true;
            }else if(game[linha-1-i][coluna-1] == " " && i == 2){
                posicao2 = true;
            }
        }if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificabaixoT4(int linha, int coluna){
        bool posicao1 = false, posicao2 = false, posicao3 = false;
            for(int i = 1; i <= 3; ++i){
              if(game[linha-1+i][coluna-1] == " "&& i==1){
                    posicao1 = true;
                }
               else if (game[linha-1+i][coluna-1] == " "&& i==2){
                posicao2 = true;
               }else if(game[linha-1+i][coluna-1] == " " && i == 3){
                posicao3 = true;
               }
              }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
            }
    }

    bool verificacimaT4(int linha, int coluna){
        bool posicao1 = false, posicao2 = false, posicao3 = false;
            for(int i = 1; i <= 3; ++i){
              if(game[linha-1-i][coluna-1] == " " && i==1){
                    posicao1 = true;
                }
               else if (game[linha-1-i][coluna-1] == " " && i == 2){
                posicao2 = true;
               }else if(game[linha-1-i][coluna-1] == " " && i == 3){
                posicao3 = true;
               }
              }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
            }
    }

    bool verificadireitaT4(int linha, int coluna){
       bool posicao1 = false, posicao2 = false, posicao3 = false;
        for(int i = 1; i <= 3; ++i){
              if(game[linha-1][coluna-1+i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game[linha-1][coluna-1+i] == " " && i == 2){
                    posicao2 = true;
                }
                else if(game[linha-1][coluna-1+i] == " " && i == 3){
                    posicao3 = true;
                }

            }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificaEsquerdaT4(int linha, int coluna){
        bool posicao1 = false, posicao2 = false, posicao3 = false;
        for(int i = 1; i <= 3; ++i){
              if(game[linha-1][coluna-1-i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game[linha-1][coluna-1-i] == " " && i == 2){
                    posicao2 = true;
                }
                else if(game[linha-1][coluna-1-i] == " " && i == 3){
                    posicao3 = true;
                }

            }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificabaixop2(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
            for(int i = 1; i <= 2; ++i){
              if(game2[linha-1+i][coluna-1] == " "&& i==1){
                    posicao1 = true;
                }
               else if (game2[linha-1+i][coluna-1] == " "&& i==2){
                posicao2 = true;
               }
              }
            if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
            }
    }

    bool verificadireitap2(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
        for(int i = 1; i <= 2; ++i){
              if(game2[linha-1][coluna-1+i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game2[linha-1][coluna-1+i] == " " && i == 2){
                    posicao2 = true;
                }

            }
            if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificaEsquerdap2(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
        for(int i = 1; i <= 2; ++i){
              if(game2[linha-1][coluna-1-i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game2[linha-1][coluna-1-i] == " " && i == 2){
                    posicao2 = true;
                }

            }
            if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificacimap2(int linha, int coluna){
        bool posicao1 = false, posicao2 = false;
        for(int i = 1; i <= 2; ++i){
            if(game2[linha-1-i][coluna-1] == " " && i == 1){
                posicao1 = true;
            }else if(game2[linha-1-i][coluna-1] == " " && i == 2){
                posicao2 = true;
            }
        }if(posicao1 == true && posicao2 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificabaixoT4p2(int linha, int coluna){




        bool posicao1 = false, posicao2 = false, posicao3 = false;
            for(int i = 1; i <= 3; ++i){
              if(game2[linha-1+i][coluna-1] == " "&& i==1){
                    posicao1 = true;
                }
               else if (game2[linha-1+i][coluna-1] == " "&& i==2){
                posicao2 = true;
               }else if(game2[linha-1+i][coluna-1] == " " && i == 3){
                posicao3 = true;
               }
              }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
            }
    }
    bool verificacimaT4p2(int linha, int coluna){
        bool posicao1 = false, posicao2 = false, posicao3 = false;
            for(int i = 1; i <= 3; ++i){
              if(game2[linha-1-i][coluna-1] == " " && i==1){
                    posicao1 = true;
                }
               else if (game2[linha-1-i][coluna-1] == " " && i == 2){
                posicao2 = true;
               }else if(game2[linha-1-i][coluna-1] == " " && i == 3){
                posicao3 = true;
               }
              }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
            }
    }

    bool verificadireitaT4p2(int linha, int coluna){
       bool posicao1 = false, posicao2 = false, posicao3 = false;
        for(int i = 1; i <= 3; ++i){
              if(game2[linha-1][coluna-1+i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game2[linha-1][coluna-1+i] == " " && i == 2){
                    posicao2 = true;
                }
                else if(game2[linha-1][coluna-1+i] == " " && i == 3){
                    posicao3 = true;
                }

            }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
                }
    }

    bool verificaEsquerdaT4p2(int linha, int coluna){
        bool posicao1 = false, posicao2 = false, posicao3 = false;
        for(int i = 1; i <= 3; ++i){
              if(game2[linha-1][coluna-1-i] == " " && i == 1){
                    posicao1 = true;
              }
              else if(game2[linha-1][coluna-1-i] == " " && i == 2){
                    posicao2 = true;
                }
                else if(game2[linha-1][coluna-1-i] == " " && i == 3){
                    posicao3 = true;
                }

            }
            if(posicao1 == true && posicao2 == true && posicao3 == true){
                return true;
            }else{
                return false;
                }
    }

    void embarcacaop1(){
        int linha, coluna;
        char direcao;
        cout << "=========================" << endl;
        cout << "Inserindo embarcacoes... " << endl;
        cout << "=========================" << endl;
        cout << "________Jogador 1________" << endl;

        for(int k = 0; k < 10; k++){
            if(k < 4){
                cout << "Inserindo T1 (Um bloco): " <<endl;
                cout << "Linha desejada (1 ao 10): " << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10): " << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }
                while(game[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    cout << "Inserindo T1 (Um blocos): " <<endl;
                    cout << "Linha desejada (1 ao 10): " << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada (1 ao 10): " << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }
                game[linha-1][coluna-1] = 'X';
            }else
            if(k >3 && k <7){
                cout << "Inserindo T2 (Dois blocos): " <<endl;
                cout << "Linha desejada: (1 ao 10)" << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10): " << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }

                while(game[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    stop:
                    cout << "Inserindo T2 (Dois blocos): " <<endl;
                    cout << "Linha desejada (1 ao 10): " << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada (1 ao 10): " << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }

                    if(coluna-1 == 0 && linha-1 == 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'b'){
                                if(game[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indiponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'd'){
                                if(game[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indiponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'b' && direcao != 'd');
                    }
                    else if(linha-1 == 0 && coluna-1 != 0 && coluna-1 != 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima! "<< endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                             if(direcao == 'b'){
                                if(game[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indiponivel! J� existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'd'){
                                if(game[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                             else if(direcao == 'e'){
                                if(game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'b' && direcao != 'e' && direcao != 'd');
                    }
                    else if(linha-1 == 0 && coluna-1 == 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'b'){
                                if(game[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'b' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna-1 == 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem para esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'c'){
                                if(game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'd'){
                                if(game[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'c' && direcao != 'd');
                    }
                     else if(linha-1 == 9 && coluna-1 == 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo e nem para direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                             if(direcao == 'c'){
                                if(game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'c' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna-1 != 9 && coluna-1 != 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'c'){
                                if(game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                 else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if (direcao == 'd'){
                                if(game[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'd');
                    }
                    else if(coluna-1 == 9 && linha-1 != 9 && linha-1 !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda | B - Baixo" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'c'){
                                if(game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-1][coluna-2] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'b'){
                                if(game[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'b');
                    }
                     else if(coluna-1 == 0 && linha != 9 && linha !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita | B - Baixo" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                              if(direcao == 'c'){
                                if(game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game[linha-2][coluna-1] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'd'){
                                if(game[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game[linha-2][coluna-1] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'b'){
                                if(game[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }





                        } while(direcao != 'c' && direcao != 'd' && direcao != 'b');
                    }
                    else{
                        do{
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | B - Baixo | E - Esquerdo | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');


                          if(direcao == 'c'){
                                if(game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game[linha-2][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game[linha-2][coluna-1] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                 else if(game[linha][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'd'){
                                if(game[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game[linha-2][coluna-1] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                 else if(game[linha][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'b'){
                                if(game[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game[linha][coluna-1] != " " && game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game[linha][coluna-1] != " " && game[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game[linha-1][coluna] != " " && game[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game[linha-2][coluna-1] != " " && game[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                    }while(direcao != 'c' && direcao != 'b' && direcao != 'e' && direcao != 'd');
                    }
                switch(direcao){
                    case 'c': game[linha-1][coluna-1] = 'X';
                              game[linha-2][coluna-1] = 'X';
                              break;
                    case 'b': game[linha-1][coluna-1] = 'X';
                              game[linha][coluna-1] = 'X';
                              break;
                    case 'e': game[linha-1][coluna-1] = 'X';
                              game[linha-1][coluna-2] = 'X';
                              break;
                    case 'd': game[linha-1][coluna-1] = 'X';
                              game[linha-1][coluna] = 'X';
                              break;

                }
            }else if(k > 6 && k<9){
                cout << "Inserindo T3 (Tres blocos): " <<endl;
                cout << "Linha desejada (1 ao 10): " << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10):" << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }
                while(game[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    retorna1:
                    cout << "Inserindo T3 (Tres blocos): " <<endl;
                    cout << "Linha desejada: (1 ao 10)" << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada: (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada:(1 ao 10)" << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada: (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }
                if(linha-3 < 0 && coluna-3 < 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'b'){
                                if(verificabaixo(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireita(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireita(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixo(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }
                        } while(direcao != 'b' && direcao != 'd');
                    }
                    else if(linha-3 < 2 && coluna-3 >= 0 && coluna+3 <= 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                             if(direcao == 'b'){
                                if(verificabaixo(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) == true) {
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireita(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if((verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) == true)){
                                        direcao = 'b';
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerda(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificabaixo(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }
                        } while(direcao != 'b' && direcao != 'e' && direcao != 'd');
                    }
                    else if(linha-1 == 0 && coluna-1 == 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'b'){
                                if(verificabaixo(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerda(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerda(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixo(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerda(linha, coluna) != true && verificabaixo(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'b' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna-1 == 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacima(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireita(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireita(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacima(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'd');
                    }
                     else if(linha-1 >= 8 && coluna >= 8) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacima(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerda(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerda(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacima(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna != 9 && coluna !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacima(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacima(linha, coluna) != true && verificadireita(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) == true) {
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireita(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if((verificadireita(linha, coluna) != true && verificacima(linha, coluna) == true)){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerda(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'd');
                    }
                    else if(coluna-1 == 9 && linha != 9 && linha !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | B - Baixo | E - Esquerda " << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacima(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) == true) {
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixo(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerda(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'b');
                    }
                     else if(coluna-1 == 0 && linha != 9 && linha !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | B - Baixo | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacima(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixo(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireita(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'd' && direcao != 'b');
                    }
                    else{
                        do{
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | B - Baixo | E - Esquerda | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                        if(direcao == 'c'){
                                if(verificacima(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixo(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireita(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificadireita(linha, coluna) != true && verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacima(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerda(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerda(linha, coluna) != true && verificacima(linha, coluna) != true && verificabaixo(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificaEsquerda(linha, coluna) != true && verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificaEsquerda(linha, coluna) != true && verificadireita(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerda(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                    }while(direcao != 'c' && direcao != 'b' && direcao != 'e' && direcao != 'd');

                    }


                switch(direcao){
                    case 'c': game[linha-1][coluna-1] = 'X';
                              game[linha-2][coluna-1] = 'X';
                              game[linha-3][coluna-1] = 'X';
                              break;
                    case 'b': game[linha-1][coluna-1] = 'X';
                              game[linha][coluna-1] = 'X';
                              game[linha+1][coluna-1] = 'X';
                              break;
                    case 'e': game[linha-1][coluna-1]='X';
                              game[linha-1][coluna-2] = 'X';
                              game[linha-1][coluna-3] = 'X';
                              break;
                    case 'd': game[linha-1][coluna-1] = 'X';
                              game[linha-1][coluna] = 'X';
                              game[linha-1][coluna+1] = 'X';
                              break;
                }
            }else if(k>=9){
                cout << "Inserindo T4 (Quatro blocos): " <<endl;
                cout << "Linha desejada (1 ao 10):" << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10):" << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }
                while(game[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    retorna2:
                    cout << "Inserindo T4 (Quatro blocos): " <<endl;
                    cout << "Linha desejada (1 ao 10):" << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada:(1 ao 10)" << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }
                if(linha-1 > 3 && coluna-1 > 6){
                     do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                        } while(direcao != 'c' && direcao != 'e');
                    }
                    else if(linha-1 < 3 && coluna-1 > 7) {
                            do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | E - Esquerda "<< endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'b'){
                                if(verificabaixoT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                            } while(direcao != 'b' && direcao != 'e');
                    }

                else if(linha-1 > 2 && linha-1 <6 && coluna-1 < 3){
                    if(linha-1 >= 3){
                     do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                        } while(direcao != 'c' && direcao != 'd');
                    }
                }
                    else if(linha-1 < 3 && coluna-1 < 3) {
                            do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direira" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'b'){
                                if(verificabaixoT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                            } while(direcao != 'b' && direcao != 'd');
                    }
            else if(linha-1 > 6 && coluna-1 < 3 || coluna-1 > 6){
                //if(coluna-1 < 3){
                    do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direira" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                      }while(direcao != 'c' && direcao != 'd');
                    }
                else if(linha-1 > 3 && coluna-1 > 7){
                    do {
                        cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra direita!" << endl;
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | E - Esquerda" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                        if(direcao == 'c'){
                                if(verificacimaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    } while(direcao != 'c' && direcao != 'e');
                }
                else if(linha-1 < 3 && coluna-1 < 3 || coluna-1 > 6){
                //if(coluna-1 < 3){
                    do {
                        cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                        cout << "Para que direcao: " << endl;
                        cout << "B - Baixo | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                         if(direcao == 'b'){
                                if(verificabaixoT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    } while(direcao != 'b' && direcao != 'd');
                }else if(linha-1 < 3 && coluna-1 > 3){
                    do {
                        cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                        cout << "Para que direcao: " << endl;
                        cout << "B - Baixo | E - Esquerda" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                         if(direcao == 'b'){
                                if(verificabaixoT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    } while(direcao != 'b' && direcao != 'e');
                }
                else{
                        do{
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | B - Baixo | E - Esquerda | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                        if(direcao == 'c'){
                                if(verificacimaT4(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true && verificadireitaT4(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixoT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixoT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificadireitaT4(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificadireitaT4(linha, coluna) != true && verificacimaT4(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificadireitaT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerdaT4(linha, coluna) != true && verificacimaT4(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerdaT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificaEsquerdaT4(linha, coluna) != true && verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificadireitaT4(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(verificabaixoT4(linha, coluna) != true && verificacimaT4(linha, coluna) != true && verificadireitaT4(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    }while(direcao != 'c' && direcao != 'b' && direcao != 'e' && direcao != 'd');

                    }


                switch(direcao){
                    case 'c': game[linha-1][coluna-1] = 'X';
                              game[linha-2][coluna-1] = 'X';
                              game[linha-3][coluna-1] = 'X';
                              game[linha-4][coluna-1] = 'X';
                              break;
                    case 'b': game[linha-1][coluna-1] = 'X';
                              game[linha][coluna-1] = 'X';
                              game[linha+1][coluna-1] = 'X';
                              game[linha+2][coluna-1] = 'X';
                              break;
                    case 'e': game[linha-1][coluna-1] ='X';
                              game[linha-1][coluna-2] = 'X';
                              game[linha-1][coluna-3] = 'X';
                              game[linha-1][coluna-4] = 'X';
                              break;
                    case 'd': game[linha-1][coluna-1] = 'X';
                              game[linha-1][coluna] = 'X';
                              game[linha-1][coluna+1] = 'X';
                              game[linha-1][coluna+2] = 'X';
                              break;
                }
            }
        Sleep(700);
        system("cls");
        cout << "  =====JOGADOR 1=====" << endl;
        cout << "  F - Fogo | O - Agua" << endl;
        cout << "_______________________" << endl;
            cout << "   ";
            for(int l = 0; l < 10; ++l){
                cout << l+1 << " ";
            }
            cout << endl;
            cout << "-----------------------" << endl;
            for(int i = 0; i < 10; ++i){
                if(i < 9){
                    cout << i +1 << " |";
                }else
                cout << i +1<< "|";
                for (int j = 0; j < 10 ;++j){
                    if(j == 9){
                        cout << game[i][j];
                        cout << "|";
                    }else{
                        cout << game[i][j];
                        cout << "|";
                    }
                }
                cout << endl;
                cout << "-----------------------" << endl;
            }
            cout << endl;
         }//fim for
         cout << "Tecle enter para continuar..." << endl;
         cin.get();
         system("cls");
         jogador = 2;
         bnavalchama(jogador);
        }

    void embarcacaop2(){
        int linha, coluna;
        char direcao;
        cout << "=========================" << endl;
        cout << "Inserindo embarcacoes... " << endl;
        cout << "=========================" << endl;
        cout << "________Jogador 2________" << endl;

        for(int k = 0; k < 10; k++){
            if(k < 4){
                cout << "Inserindo T1 (Um bloco): " <<endl;
                cout << "Linha desejada (1 ao 10): " << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10): " << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }
                while(game2[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    cout << "Inserindo T1 (Um blocos): " <<endl;
                    cout << "Linha desejada (1 ao 10): " << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada (1 ao 10): " << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }
                game2[linha-1][coluna-1] = 'X';
            }else
            if(k >3 && k <7){
                cout << "Inserindo T2 (Dois blocos): " <<endl;
                cout << "Linha desejada: (1 ao 10)" << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10): " << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }

                while(game2[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    stop:
                    cout << "Inserindo T2 (Dois blocos): " <<endl;
                    cout << "Linha desejada (1 ao 10): " << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada (1 ao 10): " << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }

                    if(coluna-1 == 0 && linha-1 == 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'b'){
                                if(game2[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indiponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'd'){
                                if(game2[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indiponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'b' && direcao != 'd');
                    }
                    else if(linha-1 == 0 && coluna-1 != 0 && coluna-1 != 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima! "<< endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                             if(direcao == 'b'){
                                if(game2[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indiponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indiponivel! J� existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'd'){
                                if(game2[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                             else if(direcao == 'e'){
                                if(game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel!" << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'b' && direcao != 'e' && direcao != 'd');
                    }
                    else if(linha-1 == 0 && coluna-1 == 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'b'){
                                if(game2[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'b' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna-1 == 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem para esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'c'){
                                if(game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'd'){
                                if(game2[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'c' && direcao != 'd');
                    }
                     else if(linha-1 == 9 && coluna-1 == 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo e nem para direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                             if(direcao == 'c'){
                                if(game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                        } while(direcao != 'c' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna-1 != 9 && coluna-1 != 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'c'){
                                if(game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                 else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if (direcao == 'd'){
                                if(game2[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'd');
                    }
                    else if(coluna-1 == 9 && linha-1 != 9 && linha-1 !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda | B - Baixo" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'c'){
                                if(game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-1][coluna-2] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'b'){
                                if(game2[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'b');
                    }
                     else if(coluna-1 == 0 && linha != 9 && linha !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita | B - Baixo" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                              if(direcao == 'c'){
                                if(game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game2[linha-2][coluna-1] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'd'){
                                if(game2[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game2[linha-2][coluna-1] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'b'){
                                if(game2[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }





                        } while(direcao != 'c' && direcao != 'd' && direcao != 'b');
                    }
                    else{
                        do{
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | B - Baixo | E - Esquerdo | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');


                          if(direcao == 'c'){
                                if(game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'c';
                                }
                                else if(game2[linha-2][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game2[linha-2][coluna-1] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                 else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'd'){
                                if(game2[linha-1][coluna] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'd';
                                }
                                else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game2[linha-2][coluna-1] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                 else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }else if(direcao == 'b'){
                                if(game2[linha][coluna-1] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'b';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Esquerda!" << endl;
                                    direcao = 'e';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                            else if(direcao == 'e'){
                                if(game2[linha-1][coluna-2] == " "){
                                    cout << "Direcao Disponivel! " << endl;
                                    direcao = 'e';
                                }
                                else if(game2[linha][coluna-1] != " " && game2[linha-1][coluna] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Direita!" << endl;
                                    direcao = 'd';
                                }
                                 else if(game2[linha-1][coluna] != " " && game2[linha-2][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Cima!" << endl;
                                    direcao = 'c';
                                }
                                 else if(game2[linha-2][coluna-1] != " " && game2[linha][coluna-1] == " "){
                                    cout << "Direcao Indisponivel! Alterado para Baixo!" << endl;
                                    direcao = 'b';
                                }
                                else{
                                    cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                    cout << "Insira a linha e coluna novamente!" << endl << endl;
                                    goto stop;
                                }
                            }
                    }while(direcao != 'c' && direcao != 'b' && direcao != 'e' && direcao != 'd');
                    }
                switch(direcao){
                    case 'c': game2[linha-1][coluna-1] = 'X';
                              game2[linha-2][coluna-1] = 'X';
                              break;
                    case 'b': game2[linha-1][coluna-1] = 'X';
                              game2[linha][coluna-1] = 'X';
                              break;
                    case 'e': game2[linha-1][coluna-1] = 'X';
                              game2[linha-1][coluna-2] = 'X';
                              break;
                    case 'd': game2[linha-1][coluna-1] = 'X';
                              game2[linha-1][coluna] = 'X';
                              break;

                }
            }else if(k > 6 && k<9){
                cout << "Inserindo T3 (Tres blocos): " <<endl;
                cout << "Linha desejada (1 ao 10): " << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10):" << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }
                while(game2[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    retorna1:
                    cout << "Inserindo T3 (Tres blocos): " <<endl;
                    cout << "Linha desejada: (1 ao 10)" << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada: (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada:(1 ao 10)" << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada: (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }
                if(linha-3 < 0 && coluna-3 < 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');
                            if(direcao == 'b'){
                                if(verificabaixop2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitap2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixop2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }
                        } while(direcao != 'b' && direcao != 'd');
                    }
                    else if(linha-3 < 2 && coluna-3 >= 0 && coluna+3 <= 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direita | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                             if(direcao == 'b'){
                                if(verificabaixop2(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true) {
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if((verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true)){
                                        direcao = 'b';
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }
                        } while(direcao != 'b' && direcao != 'e' && direcao != 'd');
                    }
                    else if(linha-1 == 0 && coluna-1 == 9) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'b'){
                                if(verificabaixop2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdap2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixop2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'b' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna-1 == 0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitap2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimap2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'd');
                    }
                     else if(linha-1 >= 8 && coluna >= 8) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdap2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimap2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'e');
                    }
                     else if(linha-1 == 9 && coluna != 9 && coluna !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimap2(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true) {
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if((verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) == true)){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'd');
                    }
                    else if(coluna-1 == 9 && linha != 9 && linha !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | B - Baixo | E - Esquerda " << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimap2(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true) {
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixop2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'e' && direcao != 'b');
                    }
                     else if(coluna-1 == 0 && linha != 9 && linha !=0) {
                        do {
                            cout << "Nesta posicao a embarcacao nao pode ir para esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | B - Baixo | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimap2(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixop2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                        } while(direcao != 'c' && direcao != 'd' && direcao != 'b');
                    }
                    else{
                        do{
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | B - Baixo | E - Esquerda | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                        if(direcao == 'c'){
                                if(verificacimap2(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixop2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificadireitap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdap2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerdap2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificabaixop2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificaEsquerdap2(linha, coluna) != true && verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                                }
                            }
                            else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdap2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna1;
                            }

                    }while(direcao != 'c' && direcao != 'b' && direcao != 'e' && direcao != 'd');

                    }


                switch(direcao){
                    case 'c': game2[linha-1][coluna-1] = 'X';
                              game2[linha-2][coluna-1] = 'X';
                              game2[linha-3][coluna-1] = 'X';
                              break;
                    case 'b': game2[linha-1][coluna-1] = 'X';
                              game2[linha][coluna-1] = 'X';
                              game2[linha+1][coluna-1] = 'X';
                              break;
                    case 'e': game2[linha-1][coluna-1]='X';
                              game2[linha-1][coluna-2] = 'X';
                              game2[linha-1][coluna-3] = 'X';
                              break;
                    case 'd': game2[linha-1][coluna-1] = 'X';
                              game2[linha-1][coluna] = 'X';
                              game2[linha-1][coluna+1] = 'X';
                              break;
                }
            }else if(k>=9){
                cout << "Inserindo T4 (Quatro blocos): " <<endl;
                cout << "Linha desejada (1 ao 10):" << endl;
                cin >> linha;
                cin.ignore(80,'\n');
                while (linha < 1 || linha > 10) {
                    cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                    cin >> linha;
                    cin.ignore(80, '\n');
                }
                cout << "Coluna desejada (1 ao 10):" << endl;
                cin >> coluna;
                cin.ignore(80,'\n');
                while (coluna < 1 || coluna > 10) {
                    cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                    cin >> coluna;
                    cin.ignore(80, '\n');
                }
                while(game2[linha-1][coluna-1] != " "){
                    cout << "Posicao indisponivel, escolha outra..." << endl;
                    retorna2:
                    cout << "Inserindo T4 (Quatro blocos): " <<endl;
                    cout << "Linha desejada (1 ao 10):" << endl;
                    cin >> linha;
                    cin.ignore(80,'\n');
                    while (linha < 1 || linha > 10) {
                        cout << "Valor invalido. Insira a linha desejada (1 ao 10): ";
                        cin >> linha;
                        cin.ignore(80, '\n');
                    }
                    cout << "Coluna desejada:(1 ao 10)" << endl;
                    cin >> coluna;
                    cin.ignore(80,'\n');
                    while (coluna < 1 || coluna > 10) {
                        cout << "Valor invalido. Insira a coluna desejada (1 ao 10): ";
                        cin >> coluna;
                        cin.ignore(80, '\n');
                }
                }
                if(linha-1 > 3 && coluna-1 > 6){
                     do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | E - Esquerda" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                        } while(direcao != 'c' && direcao != 'e');
                    }
                    else if(linha-1 < 3 && coluna-1 > 7) {
                            do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | E - Esquerda "<< endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'b'){
                                if(verificabaixoT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                            } while(direcao != 'b' && direcao != 'e');
                    }

                else if(linha-1 > 2 && linha-1 <6 && coluna-1 < 3){
                    if(linha-1 >= 3){
                     do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direita" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                        } while(direcao != 'c' && direcao != 'd');
                    }
                }
                    else if(linha-1 < 3 && coluna-1 < 3) {
                            do {
                            cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "B - Baixo | D - Direira" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'b'){
                                if(verificabaixoT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                            } while(direcao != 'b' && direcao != 'd');
                    }
            else if(linha-1 > 6 && coluna-1 < 3 || coluna-1 > 6){
                //if(coluna-1 < 3){
                    do {
                            cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra esquerda!" << endl;
                            cout << "Para que direcao: " << endl;
                            cout << "C - Cima | D - Direira" << endl;
                            cin >> direcao;
                            cin.ignore(80,'\n');

                            if(direcao == 'c'){
                                if(verificacimaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                      }while(direcao != 'c' && direcao != 'd');
                    }
                else if(linha-1 > 3 && coluna-1 > 7){
                    do {
                        cout << "Nesta posicao a embarcacao nao pode ir para baixo nem pra direita!" << endl;
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | E - Esquerda" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                        if(direcao == 'c'){
                                if(verificacimaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'c';
                                    if(verificacimaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    } while(direcao != 'c' && direcao != 'e');
                }
                else if(linha-1 < 3 && coluna-1 < 3 || coluna-1 > 6){
                //if(coluna-1 < 3){
                    do {
                        cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra esquerda!" << endl;
                        cout << "Para que direcao: " << endl;
                        cout << "B - Baixo | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                         if(direcao == 'b'){
                                if(verificabaixoT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'd';
                                    if(verificadireitaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificadireitaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    } while(direcao != 'b' && direcao != 'd');
                }else if(linha-1 < 3 && coluna-1 > 3){
                    do {
                        cout << "Nesta posicao a embarcacao nao pode ir para cima nem pra direita!" << endl;
                        cout << "Para que direcao: " << endl;
                        cout << "B - Baixo | E - Esquerda" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                         if(direcao == 'b'){
                                if(verificabaixoT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'e';
                                    if(verificaEsquerdaT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                    }
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else{
                                    direcao = 'b';
                                    if(verificabaixoT4p2(linha, coluna) == true){
                                        cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                    }
                                }
                            }
                            if(verificaEsquerdaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    } while(direcao != 'b' && direcao != 'e');
                }
                else{
                        do{
                        cout << "Para que direcao: " << endl;
                        cout << "C - Cima | B - Baixo | E - Esquerda | D - Direita" << endl;
                        cin >> direcao;
                        cin.ignore(80,'\n');

                        if(direcao == 'c'){
                                if(verificacimaT4p2(linha, coluna) == true){
                                    cout << "Direcao dispoivel!" << endl;
                                }else if(verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) == true) {
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) == true) {
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixoT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(direcao == 'b'){
                                if(verificabaixoT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }
                                else if(verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) == true){
                                        direcao = 'c';
                                        cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }
                                else if(verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(direcao == 'd'){
                                if(verificadireitaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificadireitaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificadireitaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) == true){
                                    direcao = 'e';
                                    cout << "Direcao indisponivel! Alterado para Esquerda!" << endl;
                                }
                                else if(verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(direcao == 'e'){
                                if(verificaEsquerdaT4p2(linha, coluna) == true){
                                    cout << "Direcao disponivel!" << endl;
                                }else if(verificaEsquerdaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) == true){
                                    direcao = 'c';
                                    cout << "Direcao indisponivel! Alterado para Cima!" << endl;
                                }else if(verificaEsquerdaT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) == true){
                                    direcao = 'b';
                                    cout << "Direcao indisponivel! Alterado para Baixo!" << endl;
                                }
                                else if(verificaEsquerdaT4p2(linha, coluna) != true && verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) == true){
                                    direcao = 'd';
                                    cout << "Direcao indisponivel! Alterado para Direita!" << endl;
                                }
                                else if(verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                                }
                            }
                            else if(verificabaixoT4p2(linha, coluna) != true && verificacimaT4p2(linha, coluna) != true && verificadireitaT4p2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) != true) {
                                cout << "Direcao Indisponivel! Ja existe um barco nessa posicao..." << endl;
                                cout << "Insira a linha e coluna novamente!" << endl << endl;
                                goto retorna2;
                            }

                    }while(direcao != 'c' && direcao != 'b' && direcao != 'e' && direcao != 'd');

                    }


                switch(direcao){
                    case 'c': game2[linha-1][coluna-1] = 'X';
                              game2[linha-2][coluna-1] = 'X';
                              game2[linha-3][coluna-1] = 'X';
                              game2[linha-4][coluna-1] = 'X';
                              break;
                    case 'b': game2[linha-1][coluna-1] = 'X';
                              game2[linha][coluna-1] = 'X';
                              game2[linha+1][coluna-1] = 'X';
                              game2[linha+2][coluna-1] = 'X';
                              break;
                    case 'e': game2[linha-1][coluna-1] ='X';
                              game2[linha-1][coluna-2] = 'X';
                              game2[linha-1][coluna-3] = 'X';
                              game2[linha-1][coluna-4] = 'X';
                              break;
                    case 'd': game2[linha-1][coluna-1] = 'X';
                              game2[linha-1][coluna] = 'X';
                              game2[linha-1][coluna+1] = 'X';
                              game2[linha-1][coluna+2] = 'X';
                              break;
                }
            }
        Sleep(700);
        system("cls");
        cout << "  =====JOGADOR 2=====" << endl;
        cout << "  F - Fogo | O - Agua" << endl;
        cout << "_______________________" << endl;
            cout << "   ";
            for(int l = 0; l < 10; ++l){
                cout << l+1 << " ";
            }
            cout << endl;
            cout << "-----------------------" << endl;
            for(int i = 0; i < 10; ++i){
                if(i < 9){
                    cout << i +1 << " |";
                }else
                cout << i +1<< "|";
                for (int j = 0; j < 10 ;++j){
                    if(j == 9){
                        cout << game2[i][j];
                        cout << "|";
                    }else{
                        cout << game2[i][j];
                        cout << "|";
                    }
                }
                cout << endl;
                cout << "-----------------------" << endl;
            }
            cout << endl;
         }
         cout << "Tecle enter para continuar..." << endl;
         cin.get();
         system("cls");
         jogador = 0;
         bnavalchama(jogador);
        }

    int pontosp1 = 0, pontosp2 = 0;

    void jogarp1(){

            int linha, coluna;
            do{
                do{
                    cout << "=====JOGADOR 1=====" << endl;
                    cout << " Faca sua jogada:" << endl;
                    do{
                        cout << "Linha desejada (1 ao 10): " ;
                        cin >> linha;
                        cin.ignore(80,'\n');
                        if(linha < 1 || linha > 10){
                            system("cls");
                            cout << "Insira um numero valido, insira a linha novamente!" << endl;
                        }
                    }while(linha < 1 || linha > 10);
                    do{
                        cout << "Coluna desejada (1 ao 10): " ;
                        cin >> coluna;
                        cin.ignore(80,'\n');
                        if(coluna < 1 || coluna > 10){
                            system("cls");
                            cout << "Insira um numero valido, insira a coluna novamente! " << endl;
                        }
                    }while(coluna < 1 || coluna > 10);



                    if(game2[linha-1][coluna-1] == "F" || game2[linha-1][coluna-1] == "~"){
                        system("cls");
                        cout << "Essa jogada ja foi feita, jogue em uma outra posicao!" << endl;
                    }
                }while(game2[linha-1][coluna-1] == "F" || game2[linha-1][coluna-1] == "~");

                if(game2[linha-1][coluna-1] != " "){
                    game2[linha-1][coluna-1] = "F";
                    gamemostrap2[linha-1][coluna-1] = "F";
                    ++pontosp1;


                    cout << "-----------------------" << endl;
                    cout << "   ";
                    for(int k = 0; k < 10; ++k){
                        cout << k+1 << " ";
                    }
                    cout << endl;
                    cout << "-----------------------" << endl;
                    for(int i = 0; i < 10; ++i){
                        if(i < 9){
                            cout << i +1 << " |";
                        }else
                        cout << i +1<< "|";
                        for (int j = 0; j < 10 ;++j){
                            if(gamemostrap2[i][j] == "~"){
                                cout << "\e[0;34m"<< gamemostrap2[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                            else{
                                cout << "\e[0;31m"<< gamemostrap2[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                        }
                        cout << endl;
                        cout << "-----------------------" << endl;
                    }
                    cout << endl;


                    cout << "Voce acertou uma embarcacao!" << endl;


                    if(pontosp1 == 20){
                        Sleep(1000);
                        system("cls");
                        cout << "==============================" << endl;
                        cout << " PARABENS O JOGADOR 1 VENCEU!" << endl;
                        cout << "==============================" << endl;
                        cout << endl;
                        cout << "Tecle enter para retornar ao menu..." << endl;
                        cin.get();
                        jvelha_menu();
                        system("cls");
                    }
                    Sleep(1000);
                    cout << "Tecle enter para continuar..." << endl;
                    cin.get();
                    system("cls");
                }else{
                    alternaplayer = 2;
                    game2[linha-1][coluna-1] = "~";
                    gamemostrap2[linha-1][coluna-1] = "~";

                    cout << "-----------------------" << endl;
                    cout << "   ";
                    for(int k = 0; k < 10; ++k){
                        cout << k+1 << " ";
                    }
                    cout << endl;
                    cout << "-----------------------" << endl;
                    for(int i = 0; i < 10; ++i){
                        if(i < 9){
                            cout << i +1 << " |";
                        }else
                        cout << i +1<< "|";
                        for (int j = 0; j < 10 ;++j){
                            if(gamemostrap2[i][j] == "~"){
                                cout << "\e[0;34m"<< gamemostrap2[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                            else{
                                cout << "\e[0;31m"<< gamemostrap2[i][j] << "\e[0;0m";
                                cout << "|";
                            }

                        }
                        cout << endl;
                        cout << "-----------------------" << endl;
                    }
                    cout << endl;

                    cout << "Nenhuma embarcacao nesta posicao!" << endl;
                    cout << "Vez do jogador 2!" << endl;
                    cout << "Tecle enter para continuar..." << endl;
                    cin.get();
                    system("cls");
                }
            }while(alternaplayer == 1);
            alternajogador();
        }

    void jogarp2(){

            int linha, coluna;
            do{

                do{
                    cout << "=====JOGADOR 2=====" << endl;
                    cout << " Faca sua jogada:" << endl;

                    do{
                        cout << "Linha desejada (1 ao 10): " ;
                        cin >> linha;
                        cin.ignore(80,'\n');
                        if(linha < 1 || linha > 10){
                            system("cls");
                            cout << "Insira um numero valido, insira a linha novamente!" << endl;
                        }
                    }while(linha < 1 || linha > 10);
                    do{
                        cout << "Coluna desejada (1 ao 10): " ;
                        cin >> coluna;
                        cin.ignore(80,'\n');
                        if(coluna < 1 || coluna > 10){
                            system("cls");
                            cout << "Insira um numero valido, insira a coluna novamente! " << endl;
                        }
                    }while(coluna < 1 || coluna > 10);
                     if(game[linha-1][coluna-1] == "F" || game[linha-1][coluna-1] == "~"){
                        system("cls");
                        cout << "Essa jogada ja foi feita, jogue em uma outra posicao!" << endl;
                     }
                }while(game[linha-1][coluna-1] == "F" || game[linha-1][coluna-1] == "~");

                if(game[linha-1][coluna-1] == "X"){
                    game[linha-1][coluna-1] = "F";
                    gamemostrap1[linha-1][coluna-1] = "F";
                    ++pontosp2;

                    cout << "-----------------------" << endl;
                    cout << "   ";
                    for(int k = 0; k < 10; ++k){
                        cout << k+1 << " ";
                    }
                    cout << endl;
                    cout << "-----------------------" << endl;
                    for(int i = 0; i < 10; ++i){
                        if(i < 9){
                            cout << i +1 << " |";
                        }else
                        cout << i +1<< "|";
                        for (int j = 0; j < 10 ;++j){
                            if(gamemostrap1[i][j] == "~"){
                                cout << "\e[0;34m"<< gamemostrap1[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                            else{
                                cout << "\e[0;31m"<< gamemostrap1[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                        }
                        cout << endl;
                        cout << "-----------------------" << endl;
                    }
                    cout << endl;

                    cout << "Voce acertou uma embarcacao!" << endl;


                    if(pontosp2 == 20){
                        Sleep(1000);
                        system("cls");
                        cout << "==============================" << endl;
                        cout << " PARABENS O JOGADOR 2 VENCEU!" << endl;
                        cout << "==============================" << endl;
                        cout << endl;
                        cout << "Tecle enter para retornar ao menu..." << endl;
                        cin.get();
                        jvelha_menu();
                    }
                     Sleep(1000);
                    cout << "Tecle enter para continuar..." << endl;
                    cin.get();
                    system("cls");
                }else{
                    alternaplayer = 1;
                    game[linha-1][coluna-1] = "~";
                    gamemostrap1[linha-1][coluna-1] = "~";

                    cout << "-----------------------" << endl;
                    cout << "   ";
                    for(int k = 0; k < 10; ++k){
                        cout << k+1 << " ";
                    }
                    cout << endl;
                    cout << "-----------------------" << endl;
                    for(int i = 0; i < 10; ++i){
                        if(i < 9){
                            cout << i +1 << " |";
                        }else
                        cout << i +1<< "|";
                        for (int j = 0; j < 10 ;++j){
                            if(gamemostrap1[i][j] == "~"){
                                cout << "\e[0;34m"<< gamemostrap1[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                            else{
                                cout << "\e[0;31m"<< gamemostrap1[i][j] << "\e[0;0m";
                                cout << "|";
                            }
                        }
                        cout << endl;
                        cout << "-----------------------" << endl;
                    }
                    cout << endl;


                    cout << "Nenhuma embarcacao nesta posicao!" << endl;
                    cout << "Vez do jogador 1!" << endl;
                    cout << "Tecle enter para continuar..." << endl;
                    cin.get();
                    system("cls");
                }
            }while(alternaplayer == 2);
            alternajogador();
        }

    void alternajogador(){

            cout << "-----------------------" << endl;
            cout << "   ";
            for(int k = 0; k < 10; ++k){
                cout << k+1 << " ";
            }
            cout << endl;
            cout << "-----------------------" << endl;
            for(int i = 0; i < 10; ++i){
                if(i < 9){
                    cout << i +1 << " |";
                }else
                cout << i +1<< "|";
                for (int j = 0; j < 10 ;++j){
                    if(j == 9){
                        cout << gamemostra[i][j];
                        cout << "|";
                    }else{
                        cout << gamemostra[i][j];
                        cout << "|";
                    }
                }
                cout << endl;
                cout << "-----------------------" << endl;
            }
            cout << endl;
            if(alternaplayer == 1){
                jogarp1();
            }else if(alternaplayer == 2){
                jogarp2();
            }
        }



};

//Esta Struct possui todos as fun��es e elementos necessario para um bom desempenho da estrututra de FILA.
struct Fila_struct{

    int Fila[50];

    void Fila_menu( ){
        int contador = 0;
        int opcao;
        Fila_struct itemMenu;

        do{
            cout << "===========================" << endl;
            cout << "        MENU - FILA" << endl;
            cout << "===========================" << endl;
            cout << " 1 - Adicionar Elemento. " << endl;
            cout << " 2 - Remover Elemento. " << endl;
            cout << " 3 - Visualizar Elementos. " << endl;
            cout << " 0 - Sair " << endl;
            cin >> opcao;
            cin.ignore(80,'\n');
            Sleep(200);
            system("cls");
            if(opcao == 1){
                contador += 1;
            }
            if(opcao == 2)
            {
                contador--;
            }

            switch(opcao){

                case 1: itemMenu.Adicionar_Elementos_Fila(contador);
                break;
                case 2: itemMenu.Remover_Elemento_Fila(contador);
                break;
                case 3: itemMenu.Visualizar_Elementos_Fila(contador);
                break;

            }

        }while(opcao != 0);
    }

        void Adicionar_Elementos_Fila(int contador){
            cout<<"----------------------"<<endl;
            cout<<" Inserindo elementos:"<<endl;
            cout<<"----------------------"<<endl;
            for(int i = contador-1; i <= contador-1; ++i){
                    cout << i+1 << "* elemento:";
                    cin >> Fila[i] ;
            }
            Sleep(200);
            system("cls");
        }

         void Visualizar_Elementos_Fila(int contador){
             if(contador == -1 || contador == 0){
                cout << "Nao existe elementos na fila." << endl;
                cout << endl;
                cout << "Tecle <Enter> para voltar ao menu.";
                cin.get();
                system("cls");
                }
                else{
                    cout << "--------------------" << endl;
                    cout << "Elementos inseridos:" << endl;
                    cout << "--------------------" << endl;

                    for(int i = 0; i <= contador-1; ++i){
                        cout << i+1 << "* elemento:" << Fila[i] << endl;
                        }
                    cout << endl;
                    cout << "Tecle <Enter> para voltar ao menu.";
                    cin.get();
                    system("cls");
                }
                ;

         };

          void Remover_Elemento_Fila(int contador){
            if(contador == -1){
                cout << "Nao existe elementos na fila." << endl;
                Sleep(300);
                system("cls");}
            else
            {
                cout << "-------------------" << endl;
                cout << " Elemento Removido " << endl;
                cout << "-------------------" << endl;
            }
           for(int i = 0; i <= contador-1; ++i){
                    Fila[i] = Fila[i+1];
            }
            Sleep(500);
            system("cls");

        }

};

//Esta Struct possui todos as fun��es e elementos necessario para um bom desempenho da estrututra de PILHA.
struct Pilha_struct{
    int Pilha[50];


        void Adicionar_Elementos_Pilha(int contador){
            cout<<"----------------------"<<endl;
            cout<<" Inserindo elementos:"<<endl;
            cout<<"----------------------"<<endl;
                for(int i = contador-1; i <= contador-1; ++i){
                        cout << i+1 << "* Elemento:";
                        cin >> Pilha[i] ;
                }
            Sleep(200);
            system("cls");
            }

         void Visualizar_Elementos_Pilha(int contador){

             if(contador == -1 || contador == 0){
                cout << "Nao existe elementos na pilha." << endl;
                cout << "Tecle <Enter> para voltar ao menu.";
                cin.get();
                system("cls");}

             else{
                    cout << "--------------------" << endl;
                    cout << "Elementos inseridos: " << endl;
                    cout << "--------------------" << endl;

                    for(int i = 0; i <= contador-1; ++i){

                        cout << i+1 << "* elementos:" << Pilha[i] << endl;
                    }
                cout << "Tecle <Enter> para voltar ao menu.";
                cin.get();
                system("cls");

             }


         }

          void Remover_Elemento_Pilha(int contador){

            if(contador == -1){
                cout << "Nao existe elementos na pilha." << endl;
                Sleep(300);
                system("cls");}
            else
            {
                cout << "-------------------" << endl;
                cout << " Elemento Removido " << endl;
                cout << "-------------------" << endl;
            }
            Sleep(500);
            system("cls");

        }

        void Pilha_menu( ){
            int contador = 0;
            int opcao;
            Pilha_struct itemMenu;

            do{
                cout << "===========================" << endl;
                cout << "       MENU - PILHA" << endl;
                cout << "===========================" << endl;
                cout << " 1 - Adicionar Elemento. " << endl;
                cout << " 2 - Remover Elemento. " << endl;
                cout << " 3 - Visualizar Elementos. " << endl;
                cout << " 0 - Sair " << endl;
                cin >> opcao;
                cin.ignore(80,'\n');
                Sleep(200);
                system("cls");
                if(opcao == 1){
                    contador += 1;
                }
                if(opcao == 2)
                {
                    contador--;
                }

                switch(opcao){

                    case 1: itemMenu.Adicionar_Elementos_Pilha(contador);
                    break;
                    case 2: itemMenu.Remover_Elemento_Pilha(contador);
                    break;
                    case 3: itemMenu.Visualizar_Elementos_Pilha(contador);
                    break;

                }
            }while(opcao != 0);

    }
};

struct Ponteiros_struct{

    void exercicio1(){
        int a, b, c, d, e, f, g, h, i, j;

        cout << "O endereco da variavel A e:" << &a << " | O conteudo da variavel A e:" << a << endl;
        cout << "O endereco da variavel B e:" << &b << " | O conteudo da variavel B e:" << b << endl;
        cout << "O endereco da variavel C e:" << &c << " | O conteudo da variavel C e:" << c << endl;
        cout << "O endereco da variavel D e:" << &d << " | O conteudo da variavel D e:" << d << endl;
        cout << "O endereco da variavel E e:" << &e << " | O conteudo da variavel E e:" << e << endl;
        cout << "O endereco da variavel F e:" << &f << " | O conteudo da variavel F e:" << f << endl;
        cout << "O endereco da variavel G e:" << &g << " | O conteudo da variavel G e:" << g << endl;
        cout << "O endereco da variavel H e:" << &h << " | O conteudo da variavel H e:" << h << endl;
        cout << "O endereco da variavel I e:" << &i << " | O conteudo da variavel I e:" << i << endl;
        cout << "O endereco da variavel J e:" << &j << " | O conteudo da variavel J e:" << j << endl;

        cout << endl;
        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");

        cout << "===============" << endl;
        cout << "INSERINDO DADOS" << endl;
        cout << "===============" << endl;
        cout << endl;
        cout << "Variavel A: ";
        cin >> a;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel B: ";
        cin >> b;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel C: ";
        cin >> c;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel D: ";
        cin >> d;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel E: ";
        cin >> e;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel F: ";
        cin >> f;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel G: ";
        cin >> g;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel H: ";
        cin >> h;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel I: ";
        cin >> i;
        cin.ignore(80,'\n');
        cout << endl;
        cout << "Variavel J: ";
        cin >> j;
        cin.ignore(80,'\n');
        cout << endl;
        system("cls");

        cout << "O endereco da variavel A e:" << &a << " | O conteudo da variavel A e:" << a << endl;
        cout << "O endereco da variavel B e:" << &b << " | O conteudo da variavel B e:" << b << endl;
        cout << "O endereco da variavel C e:" << &c << " | O conteudo da variavel C e:" << c << endl;
        cout << "O endereco da variavel D e:" << &d << " | O conteudo da variavel D e:" << d << endl;
        cout << "O endereco da variavel E e:" << &e << " | O conteudo da variavel E e:" << e << endl;
        cout << "O endereco da variavel F e:" << &f << " | O conteudo da variavel F e:" << f << endl;
        cout << "O endereco da variavel G e:" << &g << " | O conteudo da variavel G e:" << g << endl;
        cout << "O endereco da variavel H e:" << &h << " | O conteudo da variavel H e:" << h << endl;
        cout << "O endereco da variavel I e:" << &i << " | O conteudo da variavel I e:" << i << endl;
        cout << "O endereco da variavel J e:" << &j << " | O conteudo da variavel J e:" << j << endl;

        cout << endl;
        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");
    }

    void exercicio2(){

        int vetor[10];

        for(int i = 0; i < 10; ++i){
            cout << "O conteudo do indice " << i << " do vetor e:" << vetor[i] << endl;
            cout << "O endereco do indice " << i << " do vetor e:" << &vetor[i] << endl;
            cout << endl;
        }

        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");


        for(int i = 0; i < 10; ++i){
            cout << "===================" << endl;
            cout << "Inserindo elementos" << endl;
            cout << "===================" << endl;
            cout << "Insira o elemento do indice " << i << " do vetor..." << endl;
            cin >> vetor[i];
            cin.ignore(80, '\n');

            system("cls");
        }

        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");

        for(int i = 0; i < 10; ++i){
            cout << "O conteudo do indice " << i << " do vetor e:" << vetor[i] << endl;
            cout << "O endereco do indice " << i << " do vetor e:" << &vetor[i] << endl;
            cout << endl;
        }

        cout << endl;
        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");
    }

    void exercicio3(){

        int vetor[5][2];

        for(int i = 0; i < 5; ++i){
            for(int j = 0; j < 2; ++j){
                cout << "O conteudo da linha indice " << i << ", e da coluna indice " << j   <<", da matriz e:" << vetor[i][j] << endl;
                cout << "O endereco da linha indice " << i << ", e da coluna indice " << j   <<", da matriz e:" << &vetor[i][j] << endl;
                cout << endl;
            }
        }

        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");

        for(int i = 0; i < 5; ++i){
            for(int j = 0; j < 2; ++j){
                cout << "===================" << endl;
                cout << "Inserindo elementos" << endl;
                cout << "===================" << endl;
                cout << "Insira o elemento da linha indice " << i << ", e da coluna indice " << j << ", da matriz..." << endl;
                cin >> vetor[i][j];
                cin.ignore(80, '\n');

                system("cls");
            }
        }

        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");

        for(int i = 0; i < 5; ++i){
            for(int j = 0; j < 2; ++j){
                cout << "O conteudo da linha indice " << i << ", e da coluna indice " << j   <<", da matriz e:" << vetor[i][j] << endl;
                cout << "O endereco da linha indice " << i << ", e da coluna indice " << j   <<", da matriz e:" << &vetor[i][j] << endl;
                cout << endl;
            }
        }
        cout << endl;
        cout << "Tecle <enter> para continuar..." << endl;
        cin.get();
        system("cls");
    }
};

void jvelha_menu(){
    int jogador = 1;
    int opcao;
    do{
        jg_velha escolha1;
        BNaval escolha2;
        cout << "===================" << endl;
        cout << "MENU - VETOR/MATRIZ" << endl;
        cout << "===================" << endl;
        cout << " 1 - JOGO DA VELHA " << endl;
        cout << " 2 - BATALHA NAVAL " << endl;
        cout << " 0 - SAIR " << endl;
        cin >> opcao;
        cin.ignore(80,'\n');
        Sleep(200);
        system("cls");

        switch(opcao){
            case 1: escolha1.jogovelhachama();
            break;
                case 2: escolha2.bnavalchama(jogador);
                break;
            case 0: cout << "Retornando ao Menu Principal..." <<endl;
                    Sleep(700);
                    system("cls");
            break;
            default:
                cout << "Opcao Invalida." <<endl;
                Sleep(500);
                system("cls");
                break;
        }
    } while(opcao != 0);
}

void ponteiros_menu(){

    int opcao;
    do{

        Ponteiros_struct escolha1;
        cout << "================" << endl;
        cout << "MENU - PONTEIROS" << endl;
        cout << "================" << endl;
        cout << " 1 - EXERCICIO 1" << endl;
        cout << " 2 - EXERCICIO 2" << endl;
        cout << " 3 - EXERCICIO 3" << endl;
        cout << " 0 - SAIR " << endl;
        cin >> opcao;
        cin.ignore(80,'\n');
        Sleep(200);
        system("cls");

        switch(opcao){

            case 1: escolha1.exercicio1();
            break;
            case 2: escolha1.exercicio2();
            break;
            case 3: escolha1.exercicio3();
            break;
            case 0: break;
            default:
                cout << "Opcao Invalida." <<endl; Sleep(500); system("cls");
            break;

        }
    }while(opcao != 0);
}

struct NoLista {
    int dado;
    NoLista* prox;
};

NoLista* inicializar() {
    return nullptr;
}

void inserirInicio(NoLista*& l) {
    int info;
    NoLista* novo = new NoLista;
    std::cout << "Insira o valor:";
    std::cin >> info;
    novo->dado = info;
    novo->prox = l;
    l = novo;
    system("cls");
}

void inserirFim(NoLista*& l) {
    int info;
    NoLista* novo = new NoLista;
    std::cout << "Insira o valor:";
    std::cin >> info;
    novo->dado = info;
    novo->prox = nullptr;

    if (l == nullptr) {
        l = novo; // Lista vazia, o novo nó é o primeiro
    } else {
        NoLista* p = l;
        while (p->prox != nullptr) {
            p = p->prox;
        }
        p->prox = novo;
    }
    system("cls");
}

bool removerInicio(NoLista*& apontadorInicioLista) {
    system("cls");
    if (apontadorInicioLista != nullptr) {
        NoLista* ponteiroPegaPosicaoExcluir = apontadorInicioLista;
        apontadorInicioLista = apontadorInicioLista->prox;
        delete ponteiroPegaPosicaoExcluir;
        return true;
    } else {
        return false;
    }
   system("cls");
}

bool removerFim(NoLista*& apontadorInicioLista) {
    system("cls");
    if (apontadorInicioLista == nullptr) {
        return false; // Lista vazia
    } else if (apontadorInicioLista->prox == nullptr) {
        delete apontadorInicioLista;
        apontadorInicioLista = nullptr;
        return true; // Lista com apenas um nó
    } else {
        NoLista* anterior = nullptr;
        NoLista* atual = apontadorInicioLista;
        while (atual->prox != nullptr) {
            anterior = atual;
            atual = atual->prox;
        }
        delete atual;
        anterior->prox = nullptr;
        return true;
    }
    system("cls");
}

void imprimir(NoLista* l) {
   // clear("cls");
   if(l != nullptr){
        while (l != nullptr) {
            std::cout << l->dado << " ";
            l = l->prox;
        }
   }
   else{
       std::cout << "A lista nao possui nenhum numero!, insira um numero para que possa ser visualizado." << std::endl;
   }

    std::cout << std::endl;
}

void buscar(NoLista* l){
    int num;
    bool verifica= false;

    std::cout << "Insira o numero que deseja buscar:";
    std::cin >> num;


    while (l != nullptr) {
         if(num == l->dado){
            std::cout << "Numero encontrado!, esse numero faz parte da lista." << std::endl;
            verifica = true;
         }
         l = l->prox;

    }
    if(verifica != true){
      std::cout << "Numero nao encontrado!, esse numero nao faz parte da lista." << std::endl;
    }

    std::cout << std::endl;


}

void ordenarCrescente(NoLista*& l) {
    if (l == nullptr || l->prox == nullptr) return; // Lista vazia ou com um único elemento

    bool trocou;
    do {
        trocou = false;
        NoLista* atual = l;
        NoLista* anterior = nullptr;
        NoLista* prox = l->prox;

        while (prox != nullptr) {
            if (atual->dado > prox->dado) {
                trocou = true;
                if (anterior != nullptr) {
                    NoLista* tmp = prox->prox;
                    anterior->prox = prox;
                    prox->prox = atual;
                    atual->prox = tmp;
                } else {
                    NoLista* tmp = prox->prox;
                    l = prox;
                    prox->prox = atual;
                    atual->prox = tmp;
                }
                anterior = prox;
                prox = atual->prox;
            } else {
                anterior = atual;
                atual = prox;
                prox = prox->prox;
            }
        }
    } while (trocou);
}

void ordenarDecrescente(NoLista*& l) {
    if (l == nullptr || l->prox == nullptr) return; // Lista vazia ou com um único elemento

    bool trocou;
    do {
        trocou = false;
        NoLista* atual = l;
        NoLista* anterior = nullptr;
        NoLista* prox = l->prox;

        while (prox != nullptr) {
            if (atual->dado < prox->dado) {
                trocou = true;
                if (anterior != nullptr) {
                    NoLista* tmp = prox->prox;
                    anterior->prox = prox;
                    prox->prox = atual;
                    atual->prox = tmp;
                } else {
                    NoLista* tmp = prox->prox;
                    l = prox;
                    prox->prox = atual;
                    atual->prox = tmp;
                }
                anterior = prox;
                prox = atual->prox;
            } else {
                anterior = atual;
                atual = prox;
                prox = prox->prox;
            }
        }
    } while (trocou);
}

int submenuEncadeado() {
    NoLista* minhaLista = inicializar();
    int escolha;

    do{

    cout << "============================" << endl;
    cout << "         MENU - LISTA    " << endl;
    cout << "============================" << endl;

    cout << " 1 - Adicionar Elemento Comeco" << endl;
    cout << " 2 - Adicionar Elemento Fim" << endl;
    cout << " 3 - Remover Elemento Comeco" << endl;
    cout << " 4 - Remover Elemento Fim" << endl;
    cout << " 5 - Visualizar Elementos" << endl;
    cout << " 6 - Buscar Elementos" << endl;
    cout << " 7 - Ordenacao Crescente" << endl;
    cout << " 8 - Ordenacao Decrescente" << endl;
    cout << " 0 - Sair" << endl;
    cin >> escolha;
    cin.ignore(80, '\n');



    switch(escolha){
        case 1: inserirInicio(minhaLista); break;
        case 2: inserirFim(minhaLista); break;
        case 3: removerInicio(minhaLista); break;
        case 4: removerFim(minhaLista); break;
        case 5: imprimir(minhaLista); break;
        case 6: buscar(minhaLista); break;
        case 7: ordenarCrescente(minhaLista); break;
        case 8: ordenarDecrescente(minhaLista); break;
    }
    }while(escolha != 0);
    system("cls");
    return 0;
}

class GrafoTes{

  private:
      int arestaNula;
      int numVertices;
      int MaxVertices;
      int ** MatrizArestas;
      string * linhaVertice;
      int colunaAresta;


  public:
        GrafoTes(int TamVertices);
        ~GrafoTes();
        void inserirVertice();
        void inserirArestas();
        int obterIndice(string vertice);
        void apresentar();

};

     GrafoTes::GrafoTes(int TamVertices){
         numVertices = 0;
         MaxVertices = TamVertices;


         linhaVertice = new string[MaxVertices];
         MatrizArestas = new int*[MaxVertices];

         for(int i = 0; i<MaxVertices;++i)
            MatrizArestas[i] = new int [MaxVertices];


         for(int i = 0; i<MaxVertices;++i){
            for(int j = 0; j<MaxVertices;++j)
                MatrizArestas[i][j] = -1;
         }

     }

     GrafoTes::~GrafoTes(){
        delete[]linhaVertice;
        for(int i = 0; i<MaxVertices;++i){
            delete[]MatrizArestas[i];
        }
        delete[]MatrizArestas;
     }

     void GrafoTes::inserirVertice(){

        string nomeVertice;
        cout << "Insira o nome do No: " << endl;
        cin >> nomeVertice;
        linhaVertice[numVertices] = nomeVertice;
        system("cls");
        ++numVertices;
     }

     void GrafoTes::inserirArestas(){

        string Vertice1,Vertice2;
        int linha,coluna;
        cout << "Insira o 1- No: ";
        cin >> Vertice1;
        system("cls");
        cout << "Insira o 2- No: ";
        cin >> Vertice2;
        system("cls");

        linha = obterIndice(Vertice1);
        coluna = obterIndice(Vertice2);
        if(linha <= MaxVertices && coluna <= MaxVertices){
            MatrizArestas[linha][coluna] = 1;
            MatrizArestas[coluna][linha] = 1;
        }
        else{
            cout << "Vertices não encontrados, insira novamente" << endl;
        }


     }

    //validacao se inserir denovo no mesmo indice
     int GrafoTes::obterIndice(string vertice){
        int cont = 0;
        /*
        cout << "Entrou";
        cout << vertice;
        cout << endl;*/
        do{

            if(vertice == linhaVertice[cont]){
                /*cout <<"Teste: "<< cont;*/
                break;
            }
            ++cont;
        }while(cont != MaxVertices);
        return cont;
     }

     void GrafoTes::apresentar(){

             cout <<"-------------------------------" << endl;
             cout << "           Tabela            " << endl;
             cout <<"-------------------------------" << endl;
             cout << "  Nos    |    Segmentos   " << endl;
             for(int i = 0;i < MaxVertices;++i){
                cout << "   " << linhaVertice[i] << "             ";
                for(int j = 0; j < MaxVertices; ++j){
                    if(MatrizArestas[i][j] != -1){
                        cout << "(" << linhaVertice[i] << linhaVertice[j] << ") ";
                    }
                }
                cout << endl;

            }


     }

    void menugrafos(){

    GrafoTes teste(3);
    string item;
    int opcao;

     do{
        cout << "=======================" << endl;
        cout << "      MENU - GRAFOS" << endl;
        cout << "=======================" << endl;
        cout << "1 - Inserir um No" << endl;
        cout << "2 - Inserir um Segmento" << endl;
        cout << "3 - Vizualizar Tabela" << endl;
        cout << "0 - Parar algoritmo" << endl;
        cin >> opcao;

        system("cls");
        if (opcao == 1){
             teste.inserirVertice();
        } else if (opcao == 2){
            teste.inserirArestas();
        } else if (opcao == 3){
            cout << endl;
                teste.apresentar();
        }


    } while (opcao != 0);



}


int main(void){
    int opcao;


    do{

        Fila_struct escolha1;
        Pilha_struct escolha2;
        Ponteiros_struct escolha3;
        cout << "=================" << endl;
        cout << "       MENU" << endl;
        cout << "=================" << endl;
        cout << " 1 - FILA " << endl;
        cout << " 2 - PILHA " << endl;
        cout << " 3 - VETOR/MATRIZ" <<endl;
        cout << " 4 - PONTEIROS" <<endl;
        cout << " 5 - LISTA" <<endl;
        cout << " 6 - GRAFOS" << endl;
        cout << " 0 - SAIR " << endl;
        cin >> opcao;
        cin.ignore(80,'\n');
        Sleep(200);
        system("cls");

        switch(opcao){

            case 1: escolha1.Fila_menu();
            break;
            case 2: escolha2.Pilha_menu();
            break;
            case 3: jvelha_menu();
            break;
            case 4: ponteiros_menu();
            break;
            case 5: submenuEncadeado();
            break;
            case 6: menugrafos();
            break;
            case 0: break;
            default:
                cout << "Opcao Invalida." <<endl; Sleep(500); system("cls");
            break;
        }
    }while(opcao != 0);
}
