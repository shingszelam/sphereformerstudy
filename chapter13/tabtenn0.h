//
// Created by 77469 on 2024/1/25.
//

#ifndef CHAPTER13_TABTENN0_H
#define CHAPTER13_TABTENN0_H
#include <string>
using std::string;
//简单的基本类
class TableTennisPlayer
{
private:
    string firstname;
    string lastname;
    bool hasTable;
public:
    TableTennisPlayer (const string & fn = "none",
                       const string & ln = "none",
                       bool ht = false);
    void Name() const;
    bool HasTable() const {return hasTable;};
    void ResetTable(bool v) {hasTable = v;};


};


#endif //CHAPTER13_TABTENN0_H
