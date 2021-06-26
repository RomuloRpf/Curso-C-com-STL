// Neste programa voc� vai fazer um exerc�cio usando Deques.
// Trata-se da simula��o de um jogo:
// � dada uma sequ�ncia de n�meros e o jogo ser� jogado por
// 2 jogadores. Cada jogador, ao in�cio do jogo, escolhe uma
// das pontas do deque, para tirar 1, 2 ou 3 elementos a cada
// turno. Quando terminar o deque termina o jogo.
// Quem tirar mais pontos vence.
// Voc� pode inventar uma estrat�gia qualquer e mostrar a evolu��o
// do jogo. No futuro voc� pode pensar em uma estrat�gia �tima para
// o primeiro jogador.  O deque ter� 10 elementos, j� gerados.

#include <iostream>
#include <deque>
#include <cstdlib>
using namespace std;

int main()
{   int i;  deque<int> dq;
    for (i=0; i<10;i++) dq.push_back(rand()%100-50);
    for (i=0; i<10;i++) cout << dq[i] << " ";  cout <<endl;

    int p1=0,p2=0,num;
    string l1;
    string l2;
    cout << "Escolha inicio ou fim: ";
    cin >> l1;
    cout << "Escolha inicio ou fim: ";
    cin >> l2;
    if(l1=="inicio" && l2=="fim")
    {
        while(!dq.empty())
        {
            cin>>num;
            if(num>3)
            {
                num=3;
            }
            else if(num>dq.size())
            {
                num=dq.size();
            }
            for(i=1;i<=num;i++)
            {
                p1=p1+(dq.front());
                dq.pop_front();
            }
            cin>>num;
            if(num>3)
            {
                num=3;
            }
            else if(num>dq.size())
            {
                num=dq.size();
            }
            for(i=1;i<=num;i++)
            {
                p2=p2+(dq.back());
                dq.pop_back();
            }
        }
    }
    else if(l1=="fim" && l2=="inicio")
    {
        while(!dq.empty())
        {
            cin>>num;
            if(num>3)
            {
                num=3;
            }
            else if(num>dq.size())
            {
                num=dq.size();
            }
            for(i=1;i<=num;i++)
            {
                p1=p1+(dq.back());
                dq.pop_back();
            }
            cin>>num;
            if(num>3)
            {
                num=3;
            }
            else if(num>dq.size())
            {
                num=dq.size();
            }
            for(i=1;i<=num;i++)
            {
                p2=p2+(dq.front());
                dq.pop_front();
            }
        }
    }
    if(p1>p2){cout<<"Jogador1 venceu";}
    else if(p1<p2){cout<<"Jogador2 venceu";}

	return 0;
}
