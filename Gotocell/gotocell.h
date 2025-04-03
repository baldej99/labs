    #ifndef GOTOCELL_H
#define GOTOCELL_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class Gotocell;
}
QT_END_NAMESPACE

class Gotocell : public QDialog
{
    Q_OBJECT

public:
    Gotocell(QWidget *parent = nullptr);
    ~Gotocell();

private:
    Ui::Gotocell *ui;
private slots:
    void on_lineEdit_textChanged();
};
#endif // GOTOCELL_H
