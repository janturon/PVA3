struct hra
{
    virtual bool checkWin() = 0;
    virtual void makeMove() = 0;
    virtual void printResult() = 0;

    bool turn = true;

    void startGame(){
        while(checkWin() == false){
            turn = !turn;
            makeMove();
        }
        printResult();
    }
};