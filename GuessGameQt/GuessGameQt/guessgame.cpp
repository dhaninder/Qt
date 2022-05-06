#include "guessgame.h"
#include "ui_guessgame.h"
#include <stdlib.h>
#include <time.h>

GuessGame::GuessGame(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GuessGame)
{
    ui->setupUi(this);

    ui->guessedNo->setValue(1);
    ui->startOverBtn->setDisabled(true);

    srand(time(nullptr));
    secretNo = rand() % 10 + 1;
}

GuessGame::~GuessGame()
{
    delete ui;
}


void GuessGame::on_guessBtn_clicked()
{
    auto guessed = ui->guessedNo->value();


    if (guessed == secretNo)
    {
        ui->info->setText("CONGRATULATIONS....The secret no is " + QString::number(secretNo));
        ui->guessBtn->setDisabled(true);
        ui->startOverBtn->setEnabled(true);
    }
    else if (guessed < secretNo)
    {
        ui->info->setText("The secret number is larger than this");
    }
    else
    {
        ui->info->setText("The secret number is smaller than this");
    }
}

void GuessGame::on_startOverBtn_clicked()
{
    secretNo = rand() % 10 + 1;

    ui->startOverBtn->setDisabled(true);
    ui->guessBtn->setEnabled(true);
    ui->guessedNo->setValue(1);
    ui->info->setText("");
}
