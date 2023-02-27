add_library(Wizards STATIC
    DateWizard.cpp
    TaskWizard.cpp
)
target_include_directories(Wizards PUBLIC "./")
target_link_libraries(Wizards PUBLIC
    Models
    ModelsFactories
    ModelsErrorCorrection
)
