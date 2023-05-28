#ifndef TODOITEM_H
#define TODOITEM_H

#include <QWidget>

namespace Ui {
class todoitem;
}

class todoitem : public QWidget
{
    Q_OBJECT

public:
    explicit todoitem(QWidget *parent = nullptr);
    ~todoitem();

private:
    Ui::todoitem *ui;
};

#endif // TODOITEM_H
