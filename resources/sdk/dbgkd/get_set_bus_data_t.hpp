#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_set_bus_data_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_GET_SET_BUS_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_set_bus_data_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t bus_data_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BusDataType
        _m01 uint32_t bus_number;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BusNumber
        _m02 uint32_t slot_number;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SlotNumber
        _m03 uint32_t offset;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Offset
        _m04 uint32_t length;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
                                    
        SDK_MAGIC_PROPERTIES( "_DBGKD_GET_SET_BUS_DATA.$", 0x14, true, 0xe3ffa71c093ccef7 );              
        SDK_FIXED_SIZE( get_set_bus_data_t, 0x14 );              
    };                              
};
#include "magic/get_set_bus_data_t.end.hpp"
SDK_VERIFY( struct dbgkd::get_set_bus_data_t, 0x14 );
