#ifndef TIMEDISRCETIZATIONINTERFACE_HPP
#define TIMEDISRCETIZATIONINTERFACE_HPP
#include <vector>

class TimeDiscretizationInterface
{
public:
    virtual std::vector<float>
    computeRightHandSide(const std::vector<float>& solutionVector) = 0;
};
#endif // TIMEDISRCETIZATIONINTERFACE_HPP