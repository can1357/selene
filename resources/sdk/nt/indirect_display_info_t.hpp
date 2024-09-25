#pragma once
#include <sdkgen/support_library.hpp>
#include "luid_t.hpp"

#include "magic/indirect_display_info_t.start.hpp"
namespace nt
{
    // [struct INDIRECT_DISPLAY_INFO]
    // => WDK 10 (NV)
    //
    struct indirect_display_info_t                         
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 struct nt::luid_t display_adapter_luid;         //{ +0x0000    } | .DisplayAdapterLuid
        _m01 uint32_t          flags;                        //{ +0x0008    } | .Flags
        _m02 uint32_t          num_monitors;                 //{ +0x000c    } | .NumMonitors
        _m03 uint32_t          display_adapter_target_base;  //{ +0x0010    } | .DisplayAdapterTargetBase
                                                           
        SDK_NONVOL_PROPERTIES( "INDIRECT_DISPLAY_INFO.$", 0x0, false, 0x1f2153a483524c1e );                            
        SDK_FIXED_SIZE( indirect_display_info_t, 0x14 );                            
    };                                                     
};
#include "magic/indirect_display_info_t.end.hpp"
SDK_VERIFY( struct nt::indirect_display_info_t, 0x14 );
