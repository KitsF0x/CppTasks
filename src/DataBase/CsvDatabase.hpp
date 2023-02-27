#pragma once

#include <fstream>
#include <fmt/format.h>

#include <sstream>
#include <iostream>
#include <array>

#include "IDatabase.hpp"
#include "EuropeDateToStringConverter.hpp"
#include "DateFactoryFromStringEuropean.hpp"
#include "TasksRepository.hpp"

#include "Utils.hpp"

class CsvDatabase : public IDatabase
{

public:
    void save(std::shared_ptr<ITasksRepository> repository, const std::string &name) override;
    std::shared_ptr<ITasksRepository> load(const std::string &name) override;
};
