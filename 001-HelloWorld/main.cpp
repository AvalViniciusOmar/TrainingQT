#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QLabel text;

    text.setText("Hello World!");
    text.show();

    return a.exec();
}
