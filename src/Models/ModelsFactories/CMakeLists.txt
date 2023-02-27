add_library(ModelsFactories STATIC
    DateFactory.cpp
    TaskFactory.cpp
    DateFactoryFromStringEuropean.cpp
    CurrentTimeFactory.cpp
)
target_include_directories(ModelsFactories PUBLIC "./")
target_link_libraries(ModelsFactories PUBLIC
    Models
    Utils
)
