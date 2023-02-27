add_library(Views STATIC
    TaskView.cpp
    TasksRepositoryView.cpp
)
target_include_directories(Views PUBLIC "./")
target_link_libraries(Views PUBLIC
    Models
    ToStringConverters
    fmt::fmt
    Repositories
)
