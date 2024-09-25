#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/candidatelist_t.start.hpp"
namespace tag
{
    // [struct tagCANDIDATELIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct candidatelist_t                         
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint32_t                dw_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSize
        _m01 uint32_t                dw_style;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwStyle
        _m02 uint32_t                dw_count;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwCount
        _m03 uint32_t                dw_selection;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwSelection
        _m04 uint32_t                dw_page_start;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwPageStart
        _m05 uint32_t                dw_page_size;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwPageSize
        _m06 sdk::array<uint32_t, 1> dw_offset;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwOffset
                                                   
        SDK_MAGIC_PROPERTIES( "tagCANDIDATELIST.$", 0x1c, true, 0xe083236ebb1276e6 );              
        SDK_FIXED_SIZE( candidatelist_t, 0x1c );              
    };                                             
};
#include "magic/candidatelist_t.end.hpp"
SDK_VERIFY( struct tag::candidatelist_t, 0x1c );
