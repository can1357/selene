#pragma once
#include <sdkgen/support_library.hpp>
#include "../whea/event_log_entry_t.hpp"

#include "magic/generic_err_mem_map_event_t.start.hpp"
namespace wheap
{
    // [struct _WHEAP_GENERIC_ERR_MEM_MAP_EVENT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generic_err_mem_map_event_t                           
    {                                                            
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                       
        _m00 struct whea::event_log_entry_t whea_event_log_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WheaEventLogEntry
        _m01 sdk::array<char, 32>           map_reason;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MapReason
        _m02 uint64_t                       physical_address;      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PhysicalAddress
        _m03 uint64_t                       length;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Length
                                                                 
        SDK_NONVOL_PROPERTIES( "_WHEAP_GENERIC_ERR_MEM_MAP_EVENT.$", 0x50, true, 0xd0df5228365cf4f0 );                     
        SDK_FIXED_SIZE( generic_err_mem_map_event_t, 0x50 );                     
    };                                                           
};
#include "magic/generic_err_mem_map_event_t.end.hpp"
SDK_VERIFY( struct wheap::generic_err_mem_map_event_t, 0x50 );
