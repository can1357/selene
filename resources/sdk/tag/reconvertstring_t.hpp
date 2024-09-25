#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reconvertstring_t.start.hpp"
namespace tag
{
    // [struct tagRECONVERTSTRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reconvertstring_t               
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t dw_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t dw_version;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwVersion
        _m02 uint32_t dw_str_len;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwStrLen
        _m03 uint32_t dw_str_offset;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwStrOffset
        _m04 uint32_t dw_comp_str_len;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwCompStrLen
        _m05 uint32_t dw_comp_str_offset;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwCompStrOffset
        _m06 uint32_t dw_target_str_len;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwTargetStrLen
        _m07 uint32_t dw_target_str_offset;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwTargetStrOffset
                                           
        SDK_MAGIC_PROPERTIES( "tagRECONVERTSTRING.$", 0x20, true, 0xa2503f0c642f25d6 );                     
        SDK_FIXED_SIZE( reconvertstring_t, 0x20 );                     
    };                                     
};
#include "magic/reconvertstring_t.end.hpp"
SDK_VERIFY( struct tag::reconvertstring_t, 0x20 );
