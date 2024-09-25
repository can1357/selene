#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hybrid_range_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_HYBRID_RANGE_ENTRY]
    // => Windows 10 v1607
    //
    struct hybrid_range_entry_t    
    {                              
        // Windows 10 v1607             
        //                         
        _m00 uint32_t start_offset;  //{ +0x0000    } | .StartOffset
        _m01 uint1_t  native_code;   //{ +0x0000@0  } | .NativeCode
        _m02 uint31_t address_bits;  //{ +0x0000@1  } | .AddressBits
        _m03 uint32_t length;        //{ +0x0004    } | .Length
                                   
        SDK_MAGIC_PROPERTIES( "_IMAGE_HYBRID_RANGE_ENTRY.$", 0x0, false, 0x98e4e4dbd9cb0253 );             
        SDK_FIXED_SIZE( hybrid_range_entry_t, 0x8 );             
    };                             
};
#include "magic/hybrid_range_entry_t.end.hpp"
SDK_VERIFY( struct image::hybrid_range_entry_t, 0x8 );
