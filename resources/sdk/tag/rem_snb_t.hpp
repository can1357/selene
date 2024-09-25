#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rem_snb_t.start.hpp"
namespace tag
{
    // [struct tagRemSNB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rem_snb_t                            
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               ul_cnt_str;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulCntStr
        _m01 uint32_t               ul_cnt_char;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulCntChar
        _m02 sdk::array<wchar_t, 1> rg_string;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgString
                                                
        SDK_MAGIC_PROPERTIES( "tagRemSNB.$", 0xc, true, 0xf6e7cbc9c560cd63 );            
        SDK_FIXED_SIZE( rem_snb_t, 0xc );            
    };                                          
};
#include "magic/rem_snb_t.end.hpp"
SDK_VERIFY( struct tag::rem_snb_t, 0xc );
