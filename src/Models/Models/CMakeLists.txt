add_library(Models STATIC
    Date.cpp
    Task.cpp
)
target_include_directories(Models PUBLIC "./")
target_link_libraries(Models PUBLIC fmt::fmt)
