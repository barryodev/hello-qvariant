#include <QCoreApplication>
#include <QDebug>
#include <QVariant>
#include "message.h"
#include "note.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Message *beforeMessage = new Message();
    beforeMessage->setHeader(QString("Hello World"));
    beforeMessage->setBody("I wonder if QVarient casting will work");

    QVariant myVariant = QVariant::fromValue(beforeMessage);

    QObject *qObject = qvariant_cast<QObject*>(myVariant);
    Message *afterMessage = qobject_cast<Message*>(qObject);

    qDebug() << "Stored as pointer to QObject Header: " << afterMessage->getHeader() << " Body: " << afterMessage->getBody();

    beforeMessage->setBody(QString("I Am Altering the Message, Pray I Don't Alter It Any Further."));

    qDebug() << "Stored as pointer to QObject Header: " << afterMessage->getHeader() << " Body: " << afterMessage->getBody();

    Note beforeNote(QString("QVariant Custom Type"), QString("Let's see if we can store a custom type in a QVariant"));

    QVariant myOtherVariant = QVariant::fromValue(beforeNote);

    Note afterNote = myOtherVariant.value<Note>();

    qDebug() << "Stored as custom type Header: " << afterNote.getHeader() << " Body: " << afterNote.getBody();

    beforeNote.setBody(QString("Was that a shallow or deep copy"));

    qDebug() << "Stored as custom type Header: " << afterNote.getHeader() << " Body: " << afterNote.getBody();

    return a.exec();
}
