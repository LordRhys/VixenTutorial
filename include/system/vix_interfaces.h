#ifndef VIX_INTERFACES_H
#define VIX_INTERFACES_H

#include <vix_platform.h>

namespace Vixen
{

  class VIX_API INonCopyable
  {
  protected:
    INonCopyable()
    {

    }

    ~INonCopyable()
    {

    }

  private:
    INonCopyable(const INonCopyable& other);
    const INonCopyable& operator= (const INonCopyable& other);
  };

  class VIX_API IManager
  {
  public:
    virtual void VStartUp()  = 0;
    virtual void VShutDown() = 0;
  };

}




#endif // !VIX_INTERFACES_H
