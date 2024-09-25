#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/bus_data_type_t.hpp"

#include "magic/sysdbg_bus_data_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_BUS_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_bus_data_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 uint32_t                 address;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 void*                    buffer;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t                 request;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Request
        _m03 enum nt::bus_data_type_t bus_data_type;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BusDataType
        _m04 uint32_t                 bus_number;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BusNumber
        _m05 uint32_t                 slot_number;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SlotNumber
                                                    
        SDK_MAGIC_PROPERTIES( "_SYSDBG_BUS_DATA.$", 0x20, true, 0xd3817fb07b4e4978 );              
        SDK_FIXED_SIZE( sysdbg_bus_data_t, 0x20 );              
    };                                              
};
#include "magic/sysdbg_bus_data_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_bus_data_t, 0x20 );
