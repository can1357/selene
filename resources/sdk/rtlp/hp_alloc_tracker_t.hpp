#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/csparse_bitmap_t.hpp"

#include "magic/hp_alloc_tracker_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HP_ALLOC_TRACKER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_alloc_tracker_t                                         
    {                                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                            
        _m00 uint64_t                     base_address;                 //{ +0x0000    +0x0000    +0x0000    } | .BaseAddress
        _m01 struct rtl::csparse_bitmap_t alloc_tracker_bitmap;         //{ +0x0008    +0x0008    +0x0008    } | .AllocTrackerBitmap
        _m02 sdk::array<uint8_t, 72>      alloc_tracker_bitmap_buffer;  //{ +0x0008    +0x0008    +0x0008    } | .AllocTrackerBitmapBuffer
                                                                      
        SDK_MAGIC_PROPERTIES( "_RTLP_HP_ALLOC_TRACKER.$", 0x50, true, 0xd5229d5bee86ba96 );                            
        SDK_FIXED_SIZE( hp_alloc_tracker_t, 0x50 );                            
    };                                                                
};
#include "magic/hp_alloc_tracker_t.end.hpp"
SDK_VERIFY( struct rtlp::hp_alloc_tracker_t, 0x50 );
