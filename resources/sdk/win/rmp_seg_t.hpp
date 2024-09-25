#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rmp_seg_t.start.hpp"
namespace win
{
    // [struct rmp_seg]
    // => Windows 11
    //
    struct rmp_seg_t                
    {                               
        // Windows 11               
        //                          
        _m00 uint64_t rmp_gpa;        //{ +0x0000    } | .rmp_gpa
        _m01 char     rmp_entry;      //{ +0x0008    } | .rmp_entry
        _m02 char     rmp_page_size;  //{ +0x0009    } | .rmp_pageSize
        _m03 char     rmp_page_mark;  //{ +0x000a    } | .rmp_pageMark
        _m04 char     rmp_reserved;   //{ +0x000b    } | .rmp_reserved
        _m05 int32_t  rmp_asid;       //{ +0x000c    } | .rmp_ASID
                                    
        SDK_MAGIC_PROPERTIES( "rmp_seg.$", 0x0, false, 0x91d1ddf24e59ee21 );              
        SDK_FIXED_SIZE( rmp_seg_t, 0x10 );              
    };                              
};
#include "magic/rmp_seg_t.end.hpp"
SDK_VERIFY( struct win::rmp_seg_t, 0x10 );
