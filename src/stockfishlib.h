#pragma once
#include <string>

#if defined(__GNUC__) || defined(__ANDROID__)
    #define LIB_EXPORT
#elif defined(_MSC_VER)  // MSVC
    #if LIBRARY_BUILD
    #define LIB_EXPORT __declspec(dllexport)
    #else 
    #define LIB_EXPORT __declspec(dllimport) 
    #endif
#endif

extern "C"
{
    LIB_EXPORT int32_t test_method();
    LIB_EXPORT void init_stockfish();
    LIB_EXPORT void new_game(std::string fen);
    LIB_EXPORT void send_uci_command(std::string command);
    LIB_EXPORT void start_listening_uci();
    LIB_EXPORT void stop_listening_uci();
}