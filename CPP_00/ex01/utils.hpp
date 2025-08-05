#ifndef UTILS_HPP
#define UTILS_HPP

#include <iostream>
#include <cstdlib>
#include <csignal>

std::string promptUser();
std::string getUserData(const std::string &field);
void endProgram();
void invalidInpit();
void signalHandler(int signal);
bool isNumber(const std::string &str);

#endif // UTILS_HPP
