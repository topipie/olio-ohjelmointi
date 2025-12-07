#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    //Ei pidä erikseen connectaa kun käyttää näitä, QT osaa hoitaa asian silloin itse
    //löytämänmi nimeämiskäytäntö oli siis on_<widgetinObjectName>_<signaalinNimi>()
    //tuossa automaatti connectaus käytössä
    void on_btnCount_clicked();
    void on_btnReset_clicked();

private:
    Ui::MainWindow *ui;
    int counter = 0;
};
#endif // MAINWINDOW_H
