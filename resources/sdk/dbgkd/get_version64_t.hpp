#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/get_version64_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_GET_VERSION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_version64_t                  
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint16_t major_version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint16_t minor_version;          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorVersion
        _m02 uint8_t  protocol_version;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProtocolVersion
        _m03 uint8_t  kd_secondary_version;   //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .KdSecondaryVersion
        _m04 uint16_t flags;                  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Flags
        _m05 uint16_t machine_type;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MachineType
        _m06 uint8_t  max_packet_type;        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .MaxPacketType
        _m07 uint8_t  max_state_change;       //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .MaxStateChange
        _m08 uint8_t  max_manipulate;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxManipulate
        _m09 uint8_t  simulation;             //{ +0x000d    +0x000d    +0x000d    +0x000d    } | .Simulation
        _m10 uint64_t kern_base;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernBase
        _m11 uint64_t ps_loaded_module_list;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PsLoadedModuleList
        _m12 uint64_t debugger_data_list;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DebuggerDataList
                                            
        SDK_MAGIC_PROPERTIES( "_DBGKD_GET_VERSION64.$", 0x28, true, 0x6688d44486f47ec1 );                      
        SDK_FIXED_SIZE( get_version64_t, 0x28 );                      
    };                                      
};
#include "magic/get_version64_t.end.hpp"
SDK_VERIFY( struct dbgkd::get_version64_t, 0x28 );
