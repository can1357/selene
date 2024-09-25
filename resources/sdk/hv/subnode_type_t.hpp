#pragma once
#include <sdkgen/support_library.hpp>

namespace hv
{
    // [enum _HV_SUBNODE_TYPE]
    //  Windows 11
    //
    enum class subnode_type_t : int32_t
    {                                  
        any =      0x0,                  // Windows 11
        socket =   0x1,                  // Windows 11
        amd_node = 0x2,                  // Windows 11
        l3 =       0x3,                  // Windows 11
        count =    0x4,                  // Windows 11
        invalid =  0xff,                 // Windows 11
    };                                 
};
