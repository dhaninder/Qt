#ifndef GUESSGAME_H
#define GUESSGAME_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class GuessGame; }
QT_END_NAMESPACE

class GuessGame : public QWidget
{
    Q_OBJECT

public:
    GuessGame(QWidget *parent = nullptr);
    ~GuessGame();

private slots:
    void on_guessBtn_clicked();

    void on_startOverBtn_clicked();

private:
    Ui::GuessGame *ui;
    int secretNo;
};
#endif // GUESSGAME_H
