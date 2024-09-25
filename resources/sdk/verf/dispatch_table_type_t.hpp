#pragma once
#include <sdkgen/support_library.hpp>

namespace verf
{
    // [enum _VF_DISPATCH_TABLE_TYPE]
    //  Windows 10 v1607
    //
    enum class dispatch_table_type_t : int32_t
    {                                         
        dispatch_table_type_wdm =     0x0,      // Windows 10 v1607
        dispatch_table_type_wdf =     0x1,      // Windows 10 v1607
        dispatch_table_type_ndis =    0x2,      // Windows 10 v1607
        dispatch_table_type_xdv =     0x3,      // Windows 10 v1607
        maximum_dispatch_table_type = 0x4,      // Windows 10 v1607
    };                                        
};
