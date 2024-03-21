//
// Created by 77469 on 2024/2/29.
//

#ifndef CH13HMW_2_H
#define CH13HMW_2_H
class Cd
{
private:
    char * performers;
    char * label;
    int selections;
    double playtime;
public:
    Cd(const char * s1="null", const char *s2="null", int n=0, double x=0.0);
    Cd(const Cd & d);
    virtual ~Cd();
    virtual void Report() const;
    Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
    char * work;

public:
    Classic(const char * s = "none type", const char * s1="null", const char * s2 = "null", int n =0, double x = 0.0);
    Classic(const char * s , const Cd & cs);
    Classic(const Classic &cs);
    ~Classic();
    Classic & operator=(const Classic & c);
    void Report() const;
};
#endif //CH13HMW_2_H
