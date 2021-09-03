#ifndef NOTE_H
#define NOTE_H

#include <QString>
#include <QMetaType>

class Note
{
public:
    Note() = default;
    ~Note() = default;
    Note(const Note &) = default;
    Note &operator=(const Note &) = default;

    Note(const QString &header, const QString &body);

    const QString &getHeader() const;

    const QString &getBody() const;

    void setBody(const QString &newBody);

private:
    QString header;
    QString body;
};
Q_DECLARE_METATYPE(Note);

#endif // NOTE_H
