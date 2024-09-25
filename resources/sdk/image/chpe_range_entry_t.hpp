#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/chpe_range_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_CHPE_RANGE_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct chpe_range_entry_t      
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t start_offset;  //{ +0x0000    +0x0000    +0x0000    } | .StartOffset
        _m01 uint1_t  native_code;   //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .NativeCode
        _m02 uint31_t address_bits;  //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .AddressBits
        _m03 uint32_t length;        //{ +0x0004    +0x0004    +0x0004    } | .Length
                                   
        SDK_MAGIC_PROPERTIES( "_IMAGE_CHPE_RANGE_ENTRY.$", 0x8, true, 0x1bb21d579f2ffb90 );             
        SDK_FIXED_SIZE( chpe_range_entry_t, 0x8 );             
    };                             
};
#include "magic/chpe_range_entry_t.end.hpp"
SDK_VERIFY( struct image::chpe_range_entry_t, 0x8 );
