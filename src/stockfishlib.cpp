#include "stockfishlib.h"
#include <stdio.h>
#include <iostream>

using namespace std;

int test_method()
{
    return 888444;
}

void init_stockfish()
{
    
}

void new_game(std::string fen)
{
    cout << "fen: " << fen << endl;
}

void send_uci_command(std::string command)
{
    cout << command << endl;
}

void start_listening_uci()
{

}

void stop_listening_uci()
{

}