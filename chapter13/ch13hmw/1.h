//
// Created by 77469 on 2024/2/28.
//

#ifndef CH13HMW_1_H
#define CH13HMW_1_H
class Cd
{
private:
    char performers[50];
    char label[20];
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
    enum {W_L = 40};
    char work[W_L];

public:
    Classic(const char * s = "none type", const char * s1="null", const char * s2 = "null", int n =0, double x = 0.0);
    Classic(const char * s , const Cd & cs);
    Classic & operator=(const Classic & c);
    void Report() const;
};
#endif //CH13HMW_1_H
