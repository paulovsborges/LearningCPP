class TicTacToeGame{
public:
    void start();
    void drawBoard(char *spaces);
    void playerMove(char *spaces, char player);
    void computerMove(char *spaces, char computer);
    bool checkWinner(char *spaces,char &winner);
    bool checkTie(char *spaces);
};