add_library(Screens STATIC
    ScreenManager.cpp
    MainMenuScreen.cpp
    DisplayScreen.cpp
    EditModeScreen.cpp
    AddTaskScreen.cpp
    EditTaskScreen.cpp
    DeleteTaskScreen.cpp
)
target_include_directories(Screens PUBLIC "./")
target_link_libraries(Screens PUBLIC
    Connectors
    Views
    Wizards
)
