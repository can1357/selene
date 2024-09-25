#pragma once
#include <sdkgen/support_library.hpp>

namespace pci
{
    // [enum _PCI_ACS_HIERARCHY_SUPPORT]
    //  Windows 11
    //
    enum class acs_hierarchy_support_t : int32_t
    {                                           
        not_express =   0x0,                      // Windows 11
        not_supported = 0x1,                      // Windows 11
        supported =     0x2,                      // Windows 11
        enhanced =      0x3,                      // Windows 11
    };                                          
};
