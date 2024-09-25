#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/parse_message_context_t.start.hpp"
namespace win
{
    // [struct _PARSE_MESSAGE_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct parse_message_context_t  
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t f_flags;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .fFlags
        _m01 uint32_t cw_sav_column;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .cwSavColumn
        _m02 uint64_t iw_src;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .iwSrc
        _m03 uint64_t iw_dst;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .iwDst
        _m04 uint64_t iw_dst_space;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .iwDstSpace
        _m05 char*    lpv_arg_start;  //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .lpvArgStart
                                    
        SDK_NONVOL_PROPERTIES( "_PARSE_MESSAGE_CONTEXT.$", 0x28, true, 0xdcce0390d3a54724 );              
        SDK_FIXED_SIZE( parse_message_context_t, 0x28 );              
    };                              
};
#include "magic/parse_message_context_t.end.hpp"
SDK_VERIFY( struct win::parse_message_context_t, 0x28 );
