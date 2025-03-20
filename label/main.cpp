#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *label = new QLabel(QString::fromUtf8("Привет, Qt!"));
    label->show();

    return a.exec();
}
