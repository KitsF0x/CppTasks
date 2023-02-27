add_library(Repositories STATIC
    TasksRepository.cpp
)

target_include_directories(Repositories PUBLIC "./")
target_link_libraries(Repositories PUBLIC Models)
