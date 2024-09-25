#pragma once
#include <sdkgen/support_library.hpp>
#include "process_module_information_t.hpp"

#include "magic/process_module_information_ex_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_MODULE_INFORMATION_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_module_information_ex_t                            
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                            
        _m00 uint16_t                                 next_offset;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextOffset
        _m01 struct rtl::process_module_information_t base_info;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BaseInfo
        _m02 uint32_t                                 image_checksum;   //{ +0x0130    +0x0130    +0x0130    +0x0130    +0x0130    } | .ImageChecksum
        _m03 uint32_t                                 time_date_stamp;  //{ +0x0134    +0x0134    +0x0134    +0x0134    +0x0134    } | .TimeDateStamp
        _m04 void*                                    default_base;     //{ +0x0138    +0x0138    +0x0138    +0x0138    +0x0138    } | .DefaultBase
                                                                      
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_MODULE_INFORMATION_EX.$", 0x140, true, 0x395e906f14ff0650 );                
        SDK_FIXED_SIZE( process_module_information_ex_t, 0x140 );                
    };                                                                
};
#include "magic/process_module_information_ex_t.end.hpp"
SDK_VERIFY( struct rtl::process_module_information_ex_t, 0x140 );
