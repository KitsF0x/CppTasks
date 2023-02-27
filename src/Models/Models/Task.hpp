#pragma once


// Najpierw modele, potem komunikacja z zapis do db, potem pośrednik w zapisie (logika biznesowa) i potem wyświetlanie

#include <string>

#include "Date.hpp"

#include <iostream>

class Task
{
private:
    std::string name;
    std::string description;
    Date addDate;
    Date deadlineDate;
    bool finished;

public:
    std::string getName() const;
    std::string getDescription() const;
    Date getAddDate() const;
    Date getDeadlineDate() const;
    bool getFinished() const;

    void setName(const std::string &name);
    void setDescription(const std::string &description);
    void setAddDate(const Date &addDate);
    void setDeadlineDate(const Date &deadlineDate);
    void setFinished(bool finished);

    std::string toString() const;
};
