#include <QApplication>
#include <QLabel>

int main(argc, char* argv[]){
    QApplication app(argc, argv);
    QLabel *label = new QLabel("hello world");
    label->show();
    return app.exec();
}