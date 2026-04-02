#pragma once

#include <string>

class IRepairable
{
  private:
    /* data */
  public:
    // IRepairable();
    virtual ~IRepairable() = default;

    virtual std::string repairIt() = 0;
};
