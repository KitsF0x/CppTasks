add_library(ModelsErrorCorrection STATIC
    DateCorrection.cpp
)

target_include_directories(ModelsErrorCorrection PUBLIC "./")
target_link_libraries(ModelsErrorCorrection PUBLIC Models)
