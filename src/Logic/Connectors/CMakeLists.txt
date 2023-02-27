add_library(Connectors STATIC
    CsvDatabaseConnector.cpp
)

target_link_libraries(Connectors PUBLIC
    Repositories
    DataBase
)
target_include_directories(Connectors PUBLIC "./")
