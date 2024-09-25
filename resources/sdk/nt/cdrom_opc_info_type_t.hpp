#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _CDROM_OPC_INFO_TYPE]
    //  WDK 10
    //
    enum class cdrom_opc_info_type_t : int32_t
    {                                         
        simple_opc_info = 0x1,                  // WDK 10
    };                                        
};
