#ifndef RAPIDNOTES_FILECRYPTOHELPER_H
#define RAPIDNOTES_FILECRYPTOHELPER_H

#include <QString>
#include <QByteArray>
#include <QFile>

class FileCryptoHelper {
public:
    static bool encryptFile(const QString& sourcePath, const QString& destPath, const QString& password);
    static bool decryptFile(const QString& sourcePath, const QString& destPath, const QString& password);
    static bool encryptFileWithShell(const QString& sourcePath, const QString& destPath, const QString& password);
    static bool decryptFileWithShell(const QString& sourcePath, const QString& destPath, const QString& password);
    static bool decryptFileLegacy(const QString& sourcePath, const QString& destPath, const QString& password);
    static QString getCombinedKey();
    static QString getSystemSerialNumber_Fixed();
    static bool secureDelete(const QString& filePath);

private:
    static QByteArray deriveKey(const QString& password, const QByteArray& salt);
};

#endif // RAPIDNOTES_FILECRYPTOHELPER_H
