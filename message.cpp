#include "message.h"

Message::Message(QObject *parent) : QObject(parent)
{

}

const QString &Message::getHeader() const
{
    return header;
}

void Message::setHeader(const QString &newHeader)
{
    header = newHeader;
}

const QString &Message::getBody() const
{
    return body;
}

void Message::setBody(const QString &newBody)
{
    body = newBody;
}
