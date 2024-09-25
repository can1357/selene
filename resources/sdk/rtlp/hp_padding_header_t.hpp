#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_padding_header_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_HP_PADDING_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_padding_header_t     
    {                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint64_t padding_size;  //{ +0x0000    +0x0000    +0x0000    } | .PaddingSize
                                   
        SDK_MAGIC_PROPERTIES( "_RTLP_HP_PADDING_HEADER.$", 0x10, true, 0x41b0c0beb350e7a5 );             
        SDK_FIXED_SIZE( hp_padding_header_t, 0x10 );             
    };                             
};
#include "magic/hp_padding_header_t.end.hpp"
SDK_VERIFY( struct rtlp::hp_padding_header_t, 0x10 );
