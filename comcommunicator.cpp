#include "comcommunicator.h"

COMCommunicator::COMCommunicator(QWidget *parent) : QWidget(parent)
{
    //Setting widgets

    //-------------Column 0--------------
    m_baudLabel=new QLabel(this);
    m_baudLabel->setText("Baud rate");
    m_baudLabel->setStyleSheet("padding-top: 33px;");

    m_baudRateList=new QComboBox(this);
    QStringList baudList;
    baudList << "300" << "1200" << "9600" << "19200" << "38400" << "57600";
    m_baudRateList->addItems(baudList);
    m_baudRateList->setMaximumWidth(100);
    //-------------Column 1--------------
    m_COMLabel=new QLabel(this);
    m_COMLabel->setText("Choose COM port:");


    m_COMList=new QListView(this);
    m_COMList->setMaximumHeight(100);
    m_COMList->setMaximumWidth(110);

    m_COMListModel=new QStringListModel(this);
    QStringList list;
    list << "COM 1" << "COM 2" << "COM 3";
    m_COMListModel->setStringList(list);
    m_COMList->setModel(m_COMListModel);
    m_COMList->setEditTriggers(QAbstractItemView::NoEditTriggers);

    m_connectButton=new QPushButton(this);
    m_connectButton->setText("Connect");

    m_scanButton=new QPushButton(this);
    m_scanButton->setText("Scan");

    m_status=new QLabel(this);
    m_status->setText("Status: ");
    //-------------Column 2--------------
    m_messageBoxLabel=new QLabel(this);
    m_messageBoxLabel->setText("Messages window");
    m_messageBoxLabel->setWordWrap(true);
    m_messageBoxLabel->setAlignment(Qt::AlignCenter);
    m_messageBoxLabel->setStyleSheet("font-family:Rockwell;font-size: 16px;");

    m_messageBox=new QLabel(this);
    m_messageBox->setStyleSheet("background-color: rgb(255, 255, 255);padding-bottom: 20px;"
                                "border-style: solid;"
                                "border-width: 1px;");
    m_messageBox->setMinimumSize(QSize(300,300));
    m_messageBox->setSizePolicy(QSizePolicy::Fixed,QSizePolicy::Expanding);

    //-------------Column 3--------------
    m_sendLabel=new QLabel(this);
    m_sendLabel->setText("Send command");
    m_sendLabel->setWordWrap(true);
    m_sendLabel->setAlignment(Qt::AlignCenter);

    m_sendEditBox=new QTextEdit(this);
    m_sendEditBox->setMaximumWidth(150);
    m_sendEditBox->setMaximumHeight(25);

    m_sendButton=new QPushButton(this);
    m_sendButton->setText("Send");

    m_sendStatus=new QLabel(this);
    m_sendStatus->setText("Status: ");

    //Setting layouts
    m_col0=new QVBoxLayout();
    m_col0->addWidget(m_baudLabel);
    m_col0->addWidget(m_baudRateList);
    m_col0->setSpacing(10);
    m_col0->addStretch(1);

    m_col1=new QVBoxLayout();
    m_col1->addWidget(m_scanButton);
    m_col1->addWidget(m_COMLabel);
    m_col1->addWidget(m_COMList);
    m_col1->addWidget(m_connectButton);
    m_col1->addWidget(m_status);
    m_col1->setSpacing(10);
    m_col1->addStretch(1);

    m_col2=new QVBoxLayout();
    m_col2->addWidget(m_messageBoxLabel);
    m_col2->addWidget(m_messageBox);
    m_col2->setSpacing(1);

    m_col3=new QVBoxLayout();
    m_col3->addWidget(m_sendLabel);
    m_col3->addWidget(m_sendEditBox);
    m_col3->addWidget(m_sendButton);
    m_col3->addWidget(m_sendStatus);
    m_col3->setSpacing(1);
    m_col3->addStretch(1);

    m_mainLayout=new QHBoxLayout();
    m_mainLayout->addLayout(m_col0);
    m_mainLayout->addLayout(m_col1);
    m_mainLayout->addLayout(m_col2);
    m_mainLayout->addLayout(m_col3);
    m_mainLayout->addStretch(0);
    setLayout(m_mainLayout);


}
