add_executable(${PROJECT_NAME}
    main.cpp
    CmdApp.cpp
)
target_link_libraries(${PROJECT_NAME} PUBLIC
    DataBase
    Models
    ModelsFactories
    ModelsErrorCorrection
    Screens
    Views
)
