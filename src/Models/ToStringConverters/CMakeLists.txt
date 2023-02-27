add_library(ToStringConverters STATIC
    EuropeDateToStringConverter.cpp
)
target_include_directories(ToStringConverters PUBLIC "./")
target_link_libraries(ToStringConverters PUBLIC Models)
