#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/in_use_page_notify_flags_t.start.hpp"
namespace whea
{
    // [union _WHEA_IN_USE_PAGE_NOTIFY_FLAGS]
    // => Windows 11
    //
    union in_use_page_notify_flags_t                  
    {                                                 
        struct u0_bits_t                              
        {                                             
            // Windows 11                             
            //                                        
            _m00 uint1_t platform_directed;             //{ +0x0000@0  } | .PlatformDirected
            _m01 uint1_t notify_all_offlines;           //{ +0x0000@6  } | .NotifyAllOfflines
            _m02 uint1_t page_offlined;                 //{ +0x0000@7  } | .PageOfflined
                                                      
            SDK_MAGIC_PROPERTIES( "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.Bits.$", 0x0, false, 0xcad6d6787f243fe4 );                             
            SDK_FIXED_SIZE( u0_bits_t, 0x1 );                             
        };                                            
                                                      
        // Windows 11                                 
        //                                            
        _m03 u0_bits_t                       bits;      //{ +0x0000    } | .Bits
        _m04 uint8_t                         as_uchar;  //{ +0x0000    } | .AsUCHAR
                                                      
        SDK_MAGIC_PROPERTIES( "_WHEA_IN_USE_PAGE_NOTIFY_FLAGS.$", 0x0, false, 0x7cfd4d3c18d3e88e );         
        SDK_FIXED_SIZE( in_use_page_notify_flags_t, 0x1 );         
    };                                                
};
#include "magic/in_use_page_notify_flags_t.end.hpp"
SDK_VERIFY( struct whea::in_use_page_notify_flags_t::u0_bits_t, 0x1 );
SDK_VERIFY( union whea::in_use_page_notify_flags_t, 0x1 );
