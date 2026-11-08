#ifndef PHOTOVIEWER_H
#define PHOTOVIEWER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class photoviewer;
}
QT_END_NAMESPACE

class photoviewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit photoviewer(QWidget *parent = nullptr);
    ~photoviewer() override;

private:
    Ui::photoviewer *ui;
};
#endif // PHOTOVIEWER_H
