#pragma once
#include <sdkgen/support_library.hpp>
#include "hview_map_pin_log_entry_t.hpp"

#include "magic/hview_map_pin_log_t.start.hpp"
namespace nt
{
    // [struct _HVIEW_MAP_PIN_LOG]
    // => Windows 10 v1607
    //
    struct hview_map_pin_log_t  
    {                           
        using entries_t = sdk::array<struct nt::hview_map_pin_log_entry_t, 16>;        
                                
        // Windows 10 v1607        
        //                      
        _m00 uint32_t   next;     //{ +0x0000    } | .Next
        _m01 uint32_t   size;     //{ +0x0004    } | .Size
        _m02 entries_t  entries;  //{ +0x0008    } | .Entries
                                
        SDK_MAGIC_PROPERTIES( "_HVIEW_MAP_PIN_LOG.$", 0x0, false, 0xad601a0bd778c649 );        
        SDK_FIXED_SIZE( hview_map_pin_log_t, 0x488 );        
    };                          
};
#include "magic/hview_map_pin_log_t.end.hpp"
SDK_VERIFY( struct nt::hview_map_pin_log_t, 0x488 );
