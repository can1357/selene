#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vacb_t.start.hpp"
namespace nt
{
    struct shared_cache_map_t;
    struct vacb_array_header_t;

    // [struct _VACB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vacb_t                                               
    {                                                           
        union u0_overlay_t                                      
        {                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                                  
            _m02 int64_t          file_offset;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
            _m03 uint16_t         active_count;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ActiveCount
            _m04 nt::list_entry_t links;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
                                                                
            SDK_MAGIC_PROPERTIES( "_VACB.Overlay.$", 0x10, true, 0x839a8d3a7cf311ab );                              
            SDK_FIXED_SIZE( u0_overlay_t, 0x10 );                              
        };                                                      
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                      
        _m00 void*                             base_address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 struct nt::shared_cache_map_t*    shared_cache_map;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SharedCacheMap
        _m05 u0_overlay_t                      overlay;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Overlay
        _m06 struct nt::vacb_array_header_t*   array_head;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ArrayHead
                                                                
        SDK_MAGIC_PROPERTIES( "_VACB.$", 0x28, true, 0x21edefbf8a571df );                 
        SDK_FIXED_SIZE( vacb_t, 0x28 );                         
    };                                                          
};
#include "magic/vacb_t.end.hpp"
SDK_VERIFY( union nt::vacb_t::u0_overlay_t, 0x10 );
SDK_VERIFY( struct nt::vacb_t, 0x28 );
