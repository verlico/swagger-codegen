/**
 * Swagger Petstore
 * This is a sample server Petstore server.  You can find out more about Swagger at [http://swagger.io](http://swagger.io) or on [irc.freenode.net, #swagger](http://swagger.io/irc/).  For this sample, you can use the api key `special-key` to test the authorization filters.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: apiteam@swagger.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Tag.h
 * 
 * A tag for a pet
 */

#ifndef Tag_H_
#define Tag_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"


namespace Swagger {

class Tag: public SWGObject {
public:
    Tag();
    Tag(QString* json);
    virtual ~Tag();
    void init();
    void cleanup();

    QString asJson ();
    QJsonObject* asJsonObject();
    void fromJsonObject(QJsonObject &json);
    Tag* fromJson(QString &jsonString);

    qint64 getId();
    void setId(qint64 id);

    QString* getName();
    void setName(QString* name);


private:
    qint64 id;
    QString* name;
};

} /* namespace Swagger */

#endif /* Tag_H_ */