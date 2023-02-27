add_library(DataBase STATIC
    CsvDatabase.cpp
)

target_link_libraries(DataBase PUBLIC
    Models
    ToStringConverters
    Repositories
    ModelsFactories
    Utils
    fmt::fmt
)
target_include_directories(DataBase PUBLIC "./")
