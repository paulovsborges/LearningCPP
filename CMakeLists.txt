cmake_minimum_required(VERSION 3.26)
project(LearnC__)

set(CMAKE_CXX_STANDARD 17)

add_executable(LearnC__ code/main.cpp
        code/namespaceDeclaration.cpp
        code/typeDefDeclaration.cpp
        code/MiniBank.cpp
        code/RockPaperScissors.cpp
        code/SortAlgorithms.cpp
        code/creditCardValidator/CreditCardValidator.h
        code/creditCardValidator/CreditCardValidator.cpp
        code/ticTacToeGame/TicTacToeGame.h
        code/ticTacToeGame/TicTacToeGame.cpp
)
