#include <QApplication>
#include <QFont>
#include <QPushButton>
#include <QtWidgets>
#include <QMainWindow>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget * window = new QWidget;
    window->resize(640, 480);
    window->setWindowTitle(QApplication::translate("Studentattedence", "StudentAttendenceManagement"));

    QVBoxLayout *vlay = new QVBoxLayout(window);
    QPushButton *btn1 = new QPushButton("Admin");
    vlay->addWidget(btn1);
    QPushButton *btn2 = new QPushButton("Student");
    vlay->addWidget(btn2);
    window->setLayout(vlay);
    window->show();


    //QPushButton quit("Quit");

    //quit.resize(75, 30);
    //quit.setFont(QFont("Times", 18, QFont::Bold));

    //QObject::connect(&quit, SIGNAL(clicked()), &app, SLOT(quit()));

    //quit.show();

    return app.exec();
}
