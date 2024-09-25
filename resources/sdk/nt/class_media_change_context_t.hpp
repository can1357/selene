#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/class_media_change_context_t.start.hpp"
namespace nt
{
    // [struct _CLASS_MEDIA_CHANGE_CONTEXT]
    // => WDK 10 (NV)
    //
    struct class_media_change_context_t  
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t media_change_count;  //{ +0x0000    } | .MediaChangeCount
        _m01 uint32_t new_state;           //{ +0x0004    } | .NewState
                                         
        SDK_NONVOL_PROPERTIES( "_CLASS_MEDIA_CHANGE_CONTEXT.$", 0x0, false, 0xc012a8d55795a6fb );                   
        SDK_FIXED_SIZE( class_media_change_context_t, 0x8 );                   
    };                                   
};
#include "magic/class_media_change_context_t.end.hpp"
SDK_VERIFY( struct nt::class_media_change_context_t, 0x8 );
