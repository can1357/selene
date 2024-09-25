#pragma once
#include <sdkgen/support_library.hpp>
#include "ipmi_os_sel_record_type_t.hpp"

#include "magic/ipmi_os_sel_record_t.start.hpp"
namespace nt
{
    // [struct _IPMI_OS_SEL_RECORD]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ipmi_os_sel_record_t                             
    {                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                  
        _m00 uint32_t                           signature;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                           version;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                           length;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m03 enum nt::ipmi_os_sel_record_type_t record_type;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RecordType
        _m04 uint32_t                           data_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataLength
        _m05 sdk::array<uint8_t, 1>             data;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Data
                                                            
        SDK_NONVOL_PROPERTIES( "_IPMI_OS_SEL_RECORD.$", 0x15, true, 0x23a00ed9b6aa0ba );            
        SDK_FIXED_SIZE( ipmi_os_sel_record_t, 0x15 );            
    };                                                      
};
#include "magic/ipmi_os_sel_record_t.end.hpp"
SDK_VERIFY( struct nt::ipmi_os_sel_record_t, 0x15 );
