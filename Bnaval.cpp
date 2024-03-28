#include<iostream>
#include<stdlib.h>
#include<windows.h>
using namespace std;

struct jg_velha{
    string game[3][3] = {{ " "," "," "},{" "," "," "},{" "," "," "}};
    int linha, coluna;
    char jogador;

    //Este construtor inicializa as variaveis necessarias para um bom desempenho do restante do código.
    jg_velha() {
        jogador = 'X'; // cmc jogador em X
        coluna = -1;
        linha = -1;
    }

    //Esta função chama a estrutura do jogo da velha.
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

    //Esta função lê a linha/coluna em que o jogador deseja posicionar o X ou O.
    void joga(){

        cout<< "Jogador " << jogador << "_" << endl;
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
        //Este if verifica se há ganhador através da função "verifica()".
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
        //Este if verifica se há empate através da função "verifica()".
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

    //Esta função vefifica todas as possibilidades de vitoria e empate.
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

        //Verifica se há Empate.
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
    int jogador;
    string game[10][10] = {{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "}, { " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "}};
    string game2[10][10] = {{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "}, { " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "}};
    string gamemostra[10][10] = {{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "}, { " "," "," ", " ", " ", " ", " ", " ", " ", " "},{ " "," "," ", " ", " ", " ", " ", " ", " ", " "},
    { " "," "," ", " ", " ", " ", " ", " ", " ", " "}};


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
                                    cout << "Direcao Indiponivel! Já existe um barco nessa posicao..." << endl;
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
                     else if(linha-1 == 9 && coluna == 9) {
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
                if(linha-1 >= 3 || linha-1 <=6 && coluna-1 > 6){
                    if(linha-1 >= 3){
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
                    else{
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
                }
                else if(linha-1 >= 3 || linha-1 <=6 && coluna-1 < 3){
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
                    else{
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
            }else if(linha-1 > 6 && coluna-1 < 3 || coluna-1 > 6){
                if(coluna-1 < 3){
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

                    } while(direcao != 'c' && direcao != 'd');
                }else{
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
            }else if(linha-1 < 3 && coluna-1 < 3 || coluna-1 > 6){
                if(coluna-1 < 3){
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
                }else{
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
            }else{
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
                                else if(verificabaixo(linha, coluna) != true && verificacima(linha, coluna) != true && verificadireita(linha, coluna) != true && verificaEsquerdaT4(linha, coluna) != true) {
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
                                    cout << "Direcao Indiponivel! Já existe um barco nessa posicao..." << endl;
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
                     else if(linha-1 == 9 && coluna == 9) {
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
                if(linha-1 >= 3 || linha-1 <=6 && coluna-1 > 6){
                    if(linha-1 >= 3){
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
                    else{
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
                }
                else if(linha-1 >= 3 || linha-1 <=6 && coluna-1 < 3){
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
                    else{
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
            }else if(linha-1 > 6 && coluna-1 < 3 || coluna-1 > 6){
                if(coluna-1 < 3){
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

                    } while(direcao != 'c' && direcao != 'd');
                }else{
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
            }else if(linha-1 < 3 && coluna-1 < 3 || coluna-1 > 6){
                if(coluna-1 < 3){
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
                }else{
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
            }else{
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
                                else if(verificabaixop2(linha, coluna) != true && verificacimap2(linha, coluna) != true && verificadireitap2(linha, coluna) != true && verificaEsquerdaT4p2(linha, coluna) != true) {
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
                        cout << game[i][j];
                    }else{
                        cout << game[i][j];
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




};


int main(){
    int jogador = 1;
    int opcao;
    do{
        jg_velha escolha1;
        BNaval escolha2;
        cout << "===================" << endl;
        cout << "        Menu" << endl;
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
            default:
                cout << "Opcao Invalida." <<endl;
                Sleep(500);
                system("cls");
           break;
        }
    } while(opcao != 0);
}
