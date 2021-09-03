#include "note.h"

Note::Note(const QString &header, const QString &body)
{
    this->body = body;
    this->header = header;
}

const QString &Note::getHeader() const
{
    return header;
}

const QString &Note::getBody() const
{
    return body;
}

void Note::setBody(const QString &newBody)
{
    body = newBody;
}
