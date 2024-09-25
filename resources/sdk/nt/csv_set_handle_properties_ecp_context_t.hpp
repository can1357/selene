#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csv_set_handle_properties_ecp_context_t.start.hpp"
namespace nt
{
    // [struct _CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT]
    // => WDK 10 (NV)
    //
    struct csv_set_handle_properties_ecp_context_t
    {                                             
        // WDK 10                              
        //                                     
        _m00 uint64_t size;                         //{ +0x0000    } | .Size
        _m01 uint32_t pause_timeout_in_seconds;     //{ +0x0008    } | .PauseTimeoutInSeconds
        _m02 uint32_t flags;                        //{ +0x000c    } | .Flags
                                                  
        SDK_NONVOL_PROPERTIES( "_CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT.$", 0x0, false, 0xd76096c646bee0a0 );                         
        SDK_FIXED_SIZE( csv_set_handle_properties_ecp_context_t, 0x10 );                         
    };                                            
};
#include "magic/csv_set_handle_properties_ecp_context_t.end.hpp"
SDK_VERIFY( struct nt::csv_set_handle_properties_ecp_context_t, 0x10 );
