/********************************************************************************
** Form generated from reading UI file 'teacher_semester_entry.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEACHER_SEMESTER_ENTRY_H
#define UI_TEACHER_SEMESTER_ENTRY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_academic_screen_entry
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *semester1;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *semester2;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *semester3;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *semester4;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *semester5;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *semester6;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *semester7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *semester8;
    QFrame *line_5;
    QFrame *line_2;
    QFrame *line_41;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFrame *line_27;
    QSpacerItem *verticalSpacer_5;
    QFrame *line_21;
    QFrame *line_31;
    QLabel *course1;
    QFrame *line_23;
    QSpacerItem *verticalSpacer;
    QFrame *line_20;
    QFrame *line_30;
    QLabel *course2;
    QFrame *line_19;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_15;
    QFrame *line_29;
    QLabel *course3;
    QFrame *line_22;
    QSpacerItem *verticalSpacer_3;
    QFrame *line_16;
    QFrame *line_28;
    QLabel *course4;
    QFrame *line_24;
    QSpacerItem *verticalSpacer_4;
    QFrame *line_33;
    QFrame *line_17;
    QLabel *course5;
    QFrame *line_26;
    QSpacerItem *verticalSpacer_6;
    QFrame *line_32;
    QFrame *line_18;
    QLabel *course6;
    QFrame *line_25;
    QFrame *line_34;
    QFrame *line;
    QFrame *line_35;
    QFrame *line_40;
    QFrame *line_6;
    QFrame *line_36;
    QFrame *line_9;
    QFrame *line_37;
    QFrame *line_4;
    QFrame *line_38;
    QFrame *line_39;
    QFrame *line_3;
    QFrame *line_10;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line_42;
    QFrame *line_43;
    QFrame *line_44;
    QFrame *line_45;
    QFrame *line_46;
    QFrame *line_47;
    QLineEdit *quiz1;
    QLineEdit *quiz2;
    QLineEdit *quiz3;
    QLineEdit *quiz4;
    QLineEdit *quiz5;
    QLineEdit *quiz6;
    QLineEdit *assign6;
    QLineEdit *assign5;
    QLineEdit *assign4;
    QLineEdit *assign3;
    QLineEdit *assign2;
    QLineEdit *assign1;
    QLineEdit *mids1;
    QLineEdit *mids4;
    QLineEdit *mids6;
    QLineEdit *mids2;
    QLineEdit *mids5;
    QLineEdit *mids3;
    QLineEdit *finals4;
    QLineEdit *finals6;
    QLineEdit *finals3;
    QLineEdit *finals1;
    QLineEdit *finals5;
    QLineEdit *finals2;
    QLineEdit *total4;
    QLineEdit *total6;
    QLineEdit *total3;
    QLineEdit *total1;
    QLineEdit *total5;
    QLineEdit *total2;
    QPushButton *pushButton;
    QLineEdit *enrollment;
    QLabel *label_7;

    void setupUi(QDialog *academic_screen_entry)
    {
        if (academic_screen_entry->objectName().isEmpty())
            academic_screen_entry->setObjectName("academic_screen_entry");
        academic_screen_entry->resize(1350, 780);
        layoutWidget = new QWidget(academic_screen_entry);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(31, 117, 130, 581));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        semester1 = new QPushButton(layoutWidget);
        semester1->setObjectName("semester1");

        verticalLayout_2->addWidget(semester1);

        horizontalSpacer_13 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_13);

        semester2 = new QPushButton(layoutWidget);
        semester2->setObjectName("semester2");

        verticalLayout_2->addWidget(semester2);

        horizontalSpacer_11 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_11);

        semester3 = new QPushButton(layoutWidget);
        semester3->setObjectName("semester3");

        verticalLayout_2->addWidget(semester3);

        horizontalSpacer_10 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_10);

        semester4 = new QPushButton(layoutWidget);
        semester4->setObjectName("semester4");

        verticalLayout_2->addWidget(semester4);

        horizontalSpacer_9 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_9);

        semester5 = new QPushButton(layoutWidget);
        semester5->setObjectName("semester5");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setBold(false);
        font.setUnderline(false);
        font.setStrikeOut(false);
        semester5->setFont(font);
        semester5->setCursor(QCursor(Qt::OpenHandCursor));
        semester5->setMouseTracking(false);
        semester5->setAutoFillBackground(false);

        verticalLayout_2->addWidget(semester5);

        horizontalSpacer_7 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_7);

        semester6 = new QPushButton(layoutWidget);
        semester6->setObjectName("semester6");

        verticalLayout_2->addWidget(semester6);

        horizontalSpacer_8 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_8);

        semester7 = new QPushButton(layoutWidget);
        semester7->setObjectName("semester7");

        verticalLayout_2->addWidget(semester7);

        horizontalSpacer_6 = new QSpacerItem(128, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_6);

        semester8 = new QPushButton(layoutWidget);
        semester8->setObjectName("semester8");

        verticalLayout_2->addWidget(semester8);

        line_5 = new QFrame(academic_screen_entry);
        line_5->setObjectName("line_5");
        line_5->setGeometry(QRect(562, 80, 41, 611));
        line_5->setFrameShape(QFrame::Shape::VLine);
        line_5->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(academic_screen_entry);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(160, 80, 41, 611));
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        line_41 = new QFrame(academic_screen_entry);
        line_41->setObjectName("line_41");
        line_41->setGeometry(QRect(181, 70, 1091, 31));
        line_41->setFrameShape(QFrame::Shape::HLine);
        line_41->setFrameShadow(QFrame::Shadow::Sunken);
        layoutWidget_2 = new QWidget(academic_screen_entry);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(198, 92, 228, 571));
        verticalLayout = new QVBoxLayout(layoutWidget_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(16);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        verticalLayout->addWidget(label);

        line_27 = new QFrame(layoutWidget_2);
        line_27->setObjectName("line_27");
        line_27->setFrameShape(QFrame::Shape::HLine);
        line_27->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_27);

        verticalSpacer_5 = new QSpacerItem(178, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        line_21 = new QFrame(layoutWidget_2);
        line_21->setObjectName("line_21");
        line_21->setFrameShape(QFrame::Shape::HLine);
        line_21->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_21);

        line_31 = new QFrame(layoutWidget_2);
        line_31->setObjectName("line_31");
        line_31->setFrameShape(QFrame::Shape::HLine);
        line_31->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_31);

        course1 = new QLabel(layoutWidget_2);
        course1->setObjectName("course1");
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        course1->setFont(font2);
        course1->setAlignment(Qt::AlignCenter);
        course1->setWordWrap(true);

        verticalLayout->addWidget(course1);

        line_23 = new QFrame(layoutWidget_2);
        line_23->setObjectName("line_23");
        line_23->setFrameShape(QFrame::Shape::HLine);
        line_23->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_23);

        verticalSpacer = new QSpacerItem(226, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line_20 = new QFrame(layoutWidget_2);
        line_20->setObjectName("line_20");
        line_20->setFrameShape(QFrame::Shape::HLine);
        line_20->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_20);

        line_30 = new QFrame(layoutWidget_2);
        line_30->setObjectName("line_30");
        line_30->setFrameShape(QFrame::Shape::HLine);
        line_30->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_30);

        course2 = new QLabel(layoutWidget_2);
        course2->setObjectName("course2");
        course2->setFont(font2);
        course2->setAlignment(Qt::AlignCenter);
        course2->setWordWrap(true);

        verticalLayout->addWidget(course2);

        line_19 = new QFrame(layoutWidget_2);
        line_19->setObjectName("line_19");
        line_19->setFrameShape(QFrame::Shape::HLine);
        line_19->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_19);

        verticalSpacer_2 = new QSpacerItem(178, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line_15 = new QFrame(layoutWidget_2);
        line_15->setObjectName("line_15");
        line_15->setFrameShape(QFrame::Shape::HLine);
        line_15->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_15);

        line_29 = new QFrame(layoutWidget_2);
        line_29->setObjectName("line_29");
        line_29->setFrameShape(QFrame::Shape::HLine);
        line_29->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_29);

        course3 = new QLabel(layoutWidget_2);
        course3->setObjectName("course3");
        course3->setFont(font2);
        course3->setAlignment(Qt::AlignCenter);
        course3->setWordWrap(true);

        verticalLayout->addWidget(course3);

        line_22 = new QFrame(layoutWidget_2);
        line_22->setObjectName("line_22");
        line_22->setFrameShape(QFrame::Shape::HLine);
        line_22->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_22);

        verticalSpacer_3 = new QSpacerItem(175, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        line_16 = new QFrame(layoutWidget_2);
        line_16->setObjectName("line_16");
        line_16->setFrameShape(QFrame::Shape::HLine);
        line_16->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_16);

        line_28 = new QFrame(layoutWidget_2);
        line_28->setObjectName("line_28");
        line_28->setFrameShape(QFrame::Shape::HLine);
        line_28->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_28);

        course4 = new QLabel(layoutWidget_2);
        course4->setObjectName("course4");
        course4->setFont(font2);
        course4->setAlignment(Qt::AlignCenter);
        course4->setWordWrap(true);

        verticalLayout->addWidget(course4);

        line_24 = new QFrame(layoutWidget_2);
        line_24->setObjectName("line_24");
        line_24->setFrameShape(QFrame::Shape::HLine);
        line_24->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_24);

        verticalSpacer_4 = new QSpacerItem(178, 48, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        line_33 = new QFrame(layoutWidget_2);
        line_33->setObjectName("line_33");
        line_33->setFrameShape(QFrame::Shape::HLine);
        line_33->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_33);

        line_17 = new QFrame(layoutWidget_2);
        line_17->setObjectName("line_17");
        line_17->setFrameShape(QFrame::Shape::HLine);
        line_17->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_17);

        course5 = new QLabel(layoutWidget_2);
        course5->setObjectName("course5");
        course5->setFont(font2);
        course5->setAlignment(Qt::AlignCenter);
        course5->setWordWrap(true);

        verticalLayout->addWidget(course5);

        line_26 = new QFrame(layoutWidget_2);
        line_26->setObjectName("line_26");
        line_26->setFrameShape(QFrame::Shape::HLine);
        line_26->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_26);

        verticalSpacer_6 = new QSpacerItem(175, 44, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_6);

        line_32 = new QFrame(layoutWidget_2);
        line_32->setObjectName("line_32");
        line_32->setFrameShape(QFrame::Shape::HLine);
        line_32->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_32);

        line_18 = new QFrame(layoutWidget_2);
        line_18->setObjectName("line_18");
        line_18->setFrameShape(QFrame::Shape::HLine);
        line_18->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_18);

        course6 = new QLabel(layoutWidget_2);
        course6->setObjectName("course6");
        course6->setFont(font2);
        course6->setAlignment(Qt::AlignCenter);
        course6->setWordWrap(true);

        verticalLayout->addWidget(course6);

        line_25 = new QFrame(layoutWidget_2);
        line_25->setObjectName("line_25");
        line_25->setFrameShape(QFrame::Shape::HLine);
        line_25->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line_25);

        line_34 = new QFrame(academic_screen_entry);
        line_34->setObjectName("line_34");
        line_34->setGeometry(QRect(171, 675, 1091, 31));
        line_34->setFrameShape(QFrame::Shape::HLine);
        line_34->setFrameShadow(QFrame::Shadow::Sunken);
        line = new QFrame(academic_screen_entry);
        line->setObjectName("line");
        line->setGeometry(QRect(160, 80, 20, 611));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_35 = new QFrame(academic_screen_entry);
        line_35->setObjectName("line_35");
        line_35->setGeometry(QRect(441, 590, 821, 16));
        line_35->setFrameShape(QFrame::Shape::HLine);
        line_35->setFrameShadow(QFrame::Shadow::Sunken);
        line_40 = new QFrame(academic_screen_entry);
        line_40->setObjectName("line_40");
        line_40->setGeometry(QRect(441, 140, 821, 16));
        line_40->setFrameShape(QFrame::Shape::HLine);
        line_40->setFrameShadow(QFrame::Shadow::Sunken);
        line_6 = new QFrame(academic_screen_entry);
        line_6->setObjectName("line_6");
        line_6->setGeometry(QRect(561, 80, 20, 611));
        line_6->setFrameShape(QFrame::Shape::VLine);
        line_6->setFrameShadow(QFrame::Shadow::Sunken);
        line_36 = new QFrame(academic_screen_entry);
        line_36->setObjectName("line_36");
        line_36->setGeometry(QRect(441, 500, 821, 16));
        line_36->setFrameShape(QFrame::Shape::HLine);
        line_36->setFrameShadow(QFrame::Shadow::Sunken);
        line_9 = new QFrame(academic_screen_entry);
        line_9->setObjectName("line_9");
        line_9->setGeometry(QRect(921, 80, 21, 611));
        line_9->setFrameShape(QFrame::Shape::VLine);
        line_9->setFrameShadow(QFrame::Shadow::Sunken);
        line_37 = new QFrame(academic_screen_entry);
        line_37->setObjectName("line_37");
        line_37->setGeometry(QRect(441, 410, 821, 16));
        line_37->setFrameShape(QFrame::Shape::HLine);
        line_37->setFrameShadow(QFrame::Shadow::Sunken);
        line_4 = new QFrame(academic_screen_entry);
        line_4->setObjectName("line_4");
        line_4->setGeometry(QRect(431, 90, 16, 601));
        line_4->setFrameShape(QFrame::Shape::VLine);
        line_4->setFrameShadow(QFrame::Shadow::Sunken);
        line_38 = new QFrame(academic_screen_entry);
        line_38->setObjectName("line_38");
        line_38->setGeometry(QRect(441, 320, 821, 16));
        line_38->setFrameShape(QFrame::Shape::HLine);
        line_38->setFrameShadow(QFrame::Shadow::Sunken);
        line_39 = new QFrame(academic_screen_entry);
        line_39->setObjectName("line_39");
        line_39->setGeometry(QRect(441, 230, 821, 16));
        line_39->setFrameShape(QFrame::Shape::HLine);
        line_39->setFrameShadow(QFrame::Shadow::Sunken);
        line_3 = new QFrame(academic_screen_entry);
        line_3->setObjectName("line_3");
        line_3->setGeometry(QRect(438, 90, 20, 601));
        line_3->setFrameShape(QFrame::Shape::VLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);
        line_10 = new QFrame(academic_screen_entry);
        line_10->setObjectName("line_10");
        line_10->setGeometry(QRect(910, 80, 21, 611));
        line_10->setFrameShape(QFrame::Shape::VLine);
        line_10->setFrameShadow(QFrame::Shadow::Sunken);
        label_5 = new QLabel(academic_screen_entry);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(970, 100, 71, 41));
        label_5->setFont(font1);
        label_5->setAlignment(Qt::AlignCenter);
        label_5->setWordWrap(false);
        label_4 = new QLabel(academic_screen_entry);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(820, 100, 61, 41));
        label_4->setFont(font1);
        label_4->setAlignment(Qt::AlignCenter);
        label_4->setWordWrap(false);
        label_6 = new QLabel(academic_screen_entry);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(1130, 100, 71, 41));
        label_6->setFont(font1);
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setWordWrap(false);
        label_2 = new QLabel(academic_screen_entry);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(460, 100, 91, 41));
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignCenter);
        label_2->setWordWrap(false);
        label_3 = new QLabel(academic_screen_entry);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(600, 100, 141, 41));
        label_3->setFont(font1);
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setWordWrap(false);
        line_42 = new QFrame(academic_screen_entry);
        line_42->setObjectName("line_42");
        line_42->setGeometry(QRect(769, 80, 21, 611));
        line_42->setFrameShape(QFrame::Shape::VLine);
        line_42->setFrameShadow(QFrame::Shadow::Sunken);
        line_43 = new QFrame(academic_screen_entry);
        line_43->setObjectName("line_43");
        line_43->setGeometry(QRect(780, 80, 21, 611));
        line_43->setFrameShape(QFrame::Shape::VLine);
        line_43->setFrameShadow(QFrame::Shadow::Sunken);
        line_44 = new QFrame(academic_screen_entry);
        line_44->setObjectName("line_44");
        line_44->setGeometry(QRect(1069, 80, 21, 611));
        line_44->setFrameShape(QFrame::Shape::VLine);
        line_44->setFrameShadow(QFrame::Shadow::Sunken);
        line_45 = new QFrame(academic_screen_entry);
        line_45->setObjectName("line_45");
        line_45->setGeometry(QRect(1080, 80, 21, 611));
        line_45->setFrameShape(QFrame::Shape::VLine);
        line_45->setFrameShadow(QFrame::Shadow::Sunken);
        line_46 = new QFrame(academic_screen_entry);
        line_46->setObjectName("line_46");
        line_46->setGeometry(QRect(1239, 80, 21, 611));
        line_46->setFrameShape(QFrame::Shape::VLine);
        line_46->setFrameShadow(QFrame::Shadow::Sunken);
        line_47 = new QFrame(academic_screen_entry);
        line_47->setObjectName("line_47");
        line_47->setGeometry(QRect(1250, 80, 21, 611));
        line_47->setFrameShape(QFrame::Shape::VLine);
        line_47->setFrameShadow(QFrame::Shadow::Sunken);
        quiz1 = new QLineEdit(academic_screen_entry);
        quiz1->setObjectName("quiz1");
        quiz1->setGeometry(QRect(460, 170, 91, 51));
        quiz2 = new QLineEdit(academic_screen_entry);
        quiz2->setObjectName("quiz2");
        quiz2->setGeometry(QRect(460, 260, 91, 51));
        quiz3 = new QLineEdit(academic_screen_entry);
        quiz3->setObjectName("quiz3");
        quiz3->setGeometry(QRect(460, 350, 91, 51));
        quiz4 = new QLineEdit(academic_screen_entry);
        quiz4->setObjectName("quiz4");
        quiz4->setGeometry(QRect(460, 440, 91, 51));
        quiz5 = new QLineEdit(academic_screen_entry);
        quiz5->setObjectName("quiz5");
        quiz5->setGeometry(QRect(460, 530, 91, 51));
        quiz6 = new QLineEdit(academic_screen_entry);
        quiz6->setObjectName("quiz6");
        quiz6->setGeometry(QRect(460, 620, 91, 51));
        assign6 = new QLineEdit(academic_screen_entry);
        assign6->setObjectName("assign6");
        assign6->setGeometry(QRect(620, 620, 121, 51));
        assign5 = new QLineEdit(academic_screen_entry);
        assign5->setObjectName("assign5");
        assign5->setGeometry(QRect(620, 520, 121, 51));
        assign4 = new QLineEdit(academic_screen_entry);
        assign4->setObjectName("assign4");
        assign4->setGeometry(QRect(620, 440, 121, 51));
        assign3 = new QLineEdit(academic_screen_entry);
        assign3->setObjectName("assign3");
        assign3->setGeometry(QRect(620, 350, 121, 51));
        assign2 = new QLineEdit(academic_screen_entry);
        assign2->setObjectName("assign2");
        assign2->setGeometry(QRect(620, 260, 121, 51));
        assign1 = new QLineEdit(academic_screen_entry);
        assign1->setObjectName("assign1");
        assign1->setGeometry(QRect(620, 170, 121, 51));
        mids1 = new QLineEdit(academic_screen_entry);
        mids1->setObjectName("mids1");
        mids1->setGeometry(QRect(810, 170, 91, 51));
        mids4 = new QLineEdit(academic_screen_entry);
        mids4->setObjectName("mids4");
        mids4->setGeometry(QRect(810, 440, 91, 51));
        mids6 = new QLineEdit(academic_screen_entry);
        mids6->setObjectName("mids6");
        mids6->setGeometry(QRect(810, 620, 91, 51));
        mids2 = new QLineEdit(academic_screen_entry);
        mids2->setObjectName("mids2");
        mids2->setGeometry(QRect(810, 260, 91, 51));
        mids5 = new QLineEdit(academic_screen_entry);
        mids5->setObjectName("mids5");
        mids5->setGeometry(QRect(810, 530, 91, 51));
        mids3 = new QLineEdit(academic_screen_entry);
        mids3->setObjectName("mids3");
        mids3->setGeometry(QRect(810, 350, 91, 51));
        finals4 = new QLineEdit(academic_screen_entry);
        finals4->setObjectName("finals4");
        finals4->setGeometry(QRect(960, 440, 91, 51));
        finals6 = new QLineEdit(academic_screen_entry);
        finals6->setObjectName("finals6");
        finals6->setGeometry(QRect(960, 620, 91, 51));
        finals3 = new QLineEdit(academic_screen_entry);
        finals3->setObjectName("finals3");
        finals3->setGeometry(QRect(960, 350, 91, 51));
        finals1 = new QLineEdit(academic_screen_entry);
        finals1->setObjectName("finals1");
        finals1->setGeometry(QRect(960, 170, 91, 51));
        finals5 = new QLineEdit(academic_screen_entry);
        finals5->setObjectName("finals5");
        finals5->setGeometry(QRect(960, 530, 91, 51));
        finals2 = new QLineEdit(academic_screen_entry);
        finals2->setObjectName("finals2");
        finals2->setGeometry(QRect(960, 260, 91, 51));
        total4 = new QLineEdit(academic_screen_entry);
        total4->setObjectName("total4");
        total4->setGeometry(QRect(1120, 440, 91, 51));
        total6 = new QLineEdit(academic_screen_entry);
        total6->setObjectName("total6");
        total6->setGeometry(QRect(1120, 620, 91, 51));
        total3 = new QLineEdit(academic_screen_entry);
        total3->setObjectName("total3");
        total3->setGeometry(QRect(1120, 350, 91, 51));
        total1 = new QLineEdit(academic_screen_entry);
        total1->setObjectName("total1");
        total1->setGeometry(QRect(1120, 170, 91, 51));
        total5 = new QLineEdit(academic_screen_entry);
        total5->setObjectName("total5");
        total5->setGeometry(QRect(1120, 530, 91, 51));
        total2 = new QLineEdit(academic_screen_entry);
        total2->setObjectName("total2");
        total2->setGeometry(QRect(1120, 260, 91, 51));
        pushButton = new QPushButton(academic_screen_entry);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1150, 20, 121, 51));
        enrollment = new QLineEdit(academic_screen_entry);
        enrollment->setObjectName("enrollment");
        enrollment->setGeometry(QRect(320, 20, 161, 41));
        enrollment->setAutoFillBackground(false);
        enrollment->setInputMask(QString::fromUtf8(""));
        label_7 = new QLabel(academic_screen_entry);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(170, 20, 121, 41));
        label_7->setFont(font1);
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setWordWrap(false);
        line_41->raise();
        layoutWidget->raise();
        layoutWidget_2->raise();
        line_34->raise();
        line_35->raise();
        line_40->raise();
        line_36->raise();
        line_37->raise();
        line_4->raise();
        line_38->raise();
        line_39->raise();
        line_3->raise();
        label_5->raise();
        label_4->raise();
        label_6->raise();
        label_2->raise();
        label_3->raise();
        line_5->raise();
        line_6->raise();
        line_10->raise();
        line_9->raise();
        line_42->raise();
        line_43->raise();
        line_44->raise();
        line_45->raise();
        line_46->raise();
        line_47->raise();
        quiz1->raise();
        quiz2->raise();
        quiz3->raise();
        quiz4->raise();
        quiz5->raise();
        quiz6->raise();
        assign6->raise();
        assign5->raise();
        assign4->raise();
        assign3->raise();
        assign2->raise();
        assign1->raise();
        mids1->raise();
        mids4->raise();
        mids6->raise();
        mids2->raise();
        mids5->raise();
        mids3->raise();
        finals4->raise();
        finals6->raise();
        finals3->raise();
        finals1->raise();
        finals5->raise();
        finals2->raise();
        total4->raise();
        total6->raise();
        total3->raise();
        total1->raise();
        total5->raise();
        total2->raise();
        pushButton->raise();
        enrollment->raise();
        label_7->raise();
        line->raise();
        line_2->raise();

        retranslateUi(academic_screen_entry);

        QMetaObject::connectSlotsByName(academic_screen_entry);
    } // setupUi

    void retranslateUi(QDialog *academic_screen_entry)
    {
        academic_screen_entry->setWindowTitle(QCoreApplication::translate("academic_screen_entry", "Dialog", nullptr));
        semester1->setText(QCoreApplication::translate("academic_screen_entry", "Semester 1", nullptr));
        semester2->setText(QCoreApplication::translate("academic_screen_entry", "Semester 2", nullptr));
        semester3->setText(QCoreApplication::translate("academic_screen_entry", "Semester 3", nullptr));
        semester4->setText(QCoreApplication::translate("academic_screen_entry", "Semester 4", nullptr));
#if QT_CONFIG(whatsthis)
        semester5->setWhatsThis(QString());
#endif // QT_CONFIG(whatsthis)
        semester5->setText(QCoreApplication::translate("academic_screen_entry", "Semester 5", nullptr));
        semester6->setText(QCoreApplication::translate("academic_screen_entry", "Semester 6", nullptr));
        semester7->setText(QCoreApplication::translate("academic_screen_entry", "Semester 7", nullptr));
        semester8->setText(QCoreApplication::translate("academic_screen_entry", "Semester 8", nullptr));
        label->setText(QCoreApplication::translate("academic_screen_entry", "Courses", nullptr));
        course1->setText(QCoreApplication::translate("academic_screen_entry", "Computer Programming", nullptr));
        course2->setText(QCoreApplication::translate("academic_screen_entry", "Introduction To Information Technology", nullptr));
        course3->setText(QCoreApplication::translate("academic_screen_entry", "Applied Physics", nullptr));
        course4->setText(QCoreApplication::translate("academic_screen_entry", "Professional Paractices", nullptr));
        course5->setText(QCoreApplication::translate("academic_screen_entry", "Islamic Studies", nullptr));
        course6->setText(QCoreApplication::translate("academic_screen_entry", "Discrete Mathematics", nullptr));
        label_5->setText(QCoreApplication::translate("academic_screen_entry", "Finals", nullptr));
        label_4->setText(QCoreApplication::translate("academic_screen_entry", "Mids", nullptr));
        label_6->setText(QCoreApplication::translate("academic_screen_entry", "Total", nullptr));
        label_2->setText(QCoreApplication::translate("academic_screen_entry", "Quizzes", nullptr));
        label_3->setText(QCoreApplication::translate("academic_screen_entry", "Assignments", nullptr));
        pushButton->setText(QCoreApplication::translate("academic_screen_entry", "Submit", nullptr));
        enrollment->setPlaceholderText(QString());
        label_7->setText(QCoreApplication::translate("academic_screen_entry", "Enrollment", nullptr));
    } // retranslateUi

};

namespace Ui {
    class academic_screen_entry: public Ui_academic_screen_entry {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEACHER_SEMESTER_ENTRY_H
