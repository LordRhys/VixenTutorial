#include <vix_logmanager.h>
#include <iostream>


namespace Vixen
{
  LogManager& g_LogManager = LogManager::instance();

  void LogManager::VStartUp()
  {
    std::cout << "LogManager starting up..." << std::endl;
  }

  void LogManager::VShutDown()
  {
    std::cout << "LogManager shutting down..." << std::endl;
  }
}