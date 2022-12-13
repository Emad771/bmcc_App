#include "about.h"
#include "ui_about.h"
#include "selectprogram.h"

About::About(QWidget *parent) : QDialog(parent), ui(new Ui::About) {

    ui->setupUi(this);
    getTextFile();
}

About::~About() {

    delete ui;
}

void About::on_pushButton_Return_clicked() {

    hide();
    SelectProgram *select_Program = new SelectProgram;
    select_Program->setWindowTitle("Select Program");
    select_Program->show();
}


void About::on_pushButton_Enter_clicked() {

    QString word = ui->lineEdit_SearchWord->text();
    // Operator overloading.
    ui->textEdit_FileDisplay->find(word, QTextDocument::FindWholeWords);
}


void About::getTextFile() {
    QFile myFile(":/about_BMCC.txt");
    myFile.open(QIODevice::ReadOnly);

    QTextStream textStream(&myFile);
    QString line = textStream.readAll();
    myFile.close();

    ui->textEdit_FileDisplay->setPlainText(line);
    QTextCursor textCursor = ui->textEdit_FileDisplay->textCursor();
    textCursor.movePosition(QTextCursor::Start, QTextCursor::MoveAnchor, 1);
}
