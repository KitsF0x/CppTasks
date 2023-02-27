#include "CmdApp.hpp"

void CmdApp::run()
{
    CsvDatabaseConnector const connector;
    CsvDatabase const db;
    TasksRepository const repo;

    std::shared_ptr<IScreenManager> manager = std::make_shared<ScreenManager>();
    manager->add(std::make_shared<MainMenuScreen>(manager));
    while (true)
    {
        manager->processTop();
    }

}
