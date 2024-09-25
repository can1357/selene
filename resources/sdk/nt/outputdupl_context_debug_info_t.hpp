#pragma once
#include <sdkgen/support_library.hpp>
#include "outputdupl_context_debug_status_t.hpp"

#include "magic/outputdupl_context_debug_info_t.start.hpp"
namespace nt
{
    // [struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO]
    // => WDK 10 (NV)
    //
    struct outputdupl_context_debug_info_t                                   
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 enum nt::outputdupl_context_debug_status_t status;                //{ +0x0000    } | .Status
        _m01 void*                                      process_id;            //{ +0x0008    } | .ProcessID
        _m02 uint32_t                                   accumulated_presents;  //{ +0x0010    } | .AccumulatedPresents
        _m03 int64_t                                    last_present_time;     //{ +0x0018    } | .LastPresentTime
        _m04 int64_t                                    last_mouse_time;       //{ +0x0020    } | .LastMouseTime
        _m05 sdk::array<char, 16>                       process_name;          //{ +0x0028    } | .ProcessName
                                                                             
        SDK_NONVOL_PROPERTIES( "_OUTPUTDUPL_CONTEXT_DEBUG_INFO.$", 0x0, false, 0x90d2d4f547a217e2 );                     
        SDK_FIXED_SIZE( outputdupl_context_debug_info_t, 0x38 );                     
    };                                                                       
};
#include "magic/outputdupl_context_debug_info_t.end.hpp"
SDK_VERIFY( struct nt::outputdupl_context_debug_info_t, 0x38 );
