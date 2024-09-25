#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wim_provider_add_overlay_input_t.start.hpp"
namespace win
{
    // [struct _WIM_PROVIDER_ADD_OVERLAY_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wim_provider_add_overlay_input_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t wim_type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WimType
        _m01 uint32_t wim_index;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .WimIndex
        _m02 uint32_t wim_file_name_offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .WimFileNameOffset
        _m03 uint32_t wim_file_name_length;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .WimFileNameLength
                                           
        SDK_NONVOL_PROPERTIES( "_WIM_PROVIDER_ADD_OVERLAY_INPUT.$", 0x10, true, 0xfbfa884d054e3b2f );                     
        SDK_FIXED_SIZE( wim_provider_add_overlay_input_t, 0x10 );                     
    };                                     
};
#include "magic/wim_provider_add_overlay_input_t.end.hpp"
SDK_VERIFY( struct win::wim_provider_add_overlay_input_t, 0x10 );
