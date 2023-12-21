//
// Created by 77469 on 2023/12/20.
//

#ifndef CH10HW_8_H
#define CH10HW_8_H
typedef int Item;

//参考CSDN一个实现
class List
{
private:
    enum {MAX = 5};
    Item items[MAX];
    int top = 0;
public:
    List();
    bool  ismin()const;
    bool ismax()const;
    bool add(const Item & item);
    void visit(void (*pf)(Item&item));
    void show() const;
};
void p(Item&item);

#endif //CH10HW_8_H
