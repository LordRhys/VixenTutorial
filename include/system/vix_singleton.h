#ifndef VIX_SINGLETON_H
#define VIX_SINGLETON_H

#include <vix_platform.h>
#include <vix_interfaces.h>

namespace Vixen
{

  template <typename T>
  class Singleton : INonCopyable
  {
  public:
    static T& instance()
    {
      static T _instance;

      return _instance;
    }

  protected:
    explicit Singleton<T>() {}
  };


}



#endif // !VIX_SINGLETON_H
