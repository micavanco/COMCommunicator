#ifndef COMCOMMUNICATOR_H
#define COMCOMMUNICATOR_H

#include <QWidget>
#include <QLayout>
#include <QStringListModel>
#include <QListView>
#include <QLabel>
#include <QPushButton>
#include <QComboBox>
#include <QTextEdit>

class COMCommunicator : public QWidget
{
    Q_OBJECT
public:
    explicit COMCommunicator(QWidget *parent = nullptr);

signals:

public slots:
private:
    //Layouts
    QHBoxLayout *m_mainLayout;
    QVBoxLayout *m_col0;
    QVBoxLayout *m_col1;
    QVBoxLayout *m_col2;
    QVBoxLayout *m_col3;

    //Widgets
    QListView        *m_COMList;
    QStringListModel *m_COMListModel;
    QComboBox        *m_baudRateList;
    QPushButton      *m_connectButton;
    QPushButton      *m_scanButton;
    QPushButton      *m_sendButton;
    QTextEdit        *m_sendEditBox;

    //Labels
    QLabel    *m_COMLabel;
    QLabel    *m_baudLabel;
    QLabel    *m_messageBox;
    QLabel    *m_status;
    QLabel    *m_messageBoxLabel;
    QLabel    *m_sendLabel;
    QLabel    *m_sendStatus;
};

#endif // COMCOMMUNICATOR_H
