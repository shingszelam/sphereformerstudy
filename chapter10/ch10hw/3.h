//
// Created by 77469 on 2023/12/19.
//

#ifndef CH10HW_3_H
#define CH10HW_3_H
class Golf
{
private:
    static const int LEN = 40;
    char fullname[LEN];
    int handicap;
public:
    Golf();
    Golf(const char * name, const int hc);
    void hdcp(int hc);
    void show() const;

};
#endif //CH10HW_3_H
