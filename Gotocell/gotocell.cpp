#include "gotocell.h"
#include "ui_gotocell.h"
#include <QRegularExpression>
#include <QRegularExpressionValidator>
Gotocell::Gotocell(QWidget *parent) :
    QDialog(parent), ui(new Ui::Gotocell)
{
    ui->setupUi(this);//инициализация формы
    QRegularExpression regExp("[A-Za-z][1-9][0-9]{0,2}");
    QValidator *validator = new QRegularExpressionValidator(regExp, this);
    ui->lineEdit->setValidator(validator);
    connect(ui->okButton, SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->canselButton, SIGNAL(clicked()), this, SLOT(reject()));
    connect(ui->lineEdit, SIGNAL(textChanged(const QString &)), this, SLOT(on_lineEdit_textChanged()));
}

Gotocell::~Gotocell()
{
    delete ui;
}

void Gotocell::on_lineEdit_textChanged(){
    ui->okButton->setEnabled(ui->lineEdit->hasAcceptableInput());
}
