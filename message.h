#ifndef MESSAGE_H
#define MESSAGE_H

#include <QObject>
#include <QString>

class Message : public QObject
{
    Q_OBJECT
public:
    explicit Message(QObject *parent = nullptr);

    const QString &getHeader() const;
    void setHeader(const QString &newHeader);

    const QString &getBody() const;
    void setBody(const QString &newBody);

private:
    QString header;
    QString body;

signals:

};

#endif // MESSAGE_H
