#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_pagecombine_iteration_stat_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PAGECOMBINE_ITERATION_STAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_pagecombine_iteration_stat_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint6_t  stat_type;                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .StatType
        _m01 uint32_t pages_scanned;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PagesScanned
        _m02 uint32_t pages_combined;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PagesCombined
                                                
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PAGECOMBINE_ITERATION_STAT.$", 0xc, true, 0xb71e2d8aaa9a4d73 );               
        SDK_FIXED_SIZE( perfinfo_pagecombine_iteration_stat_t, 0xc );               
    };                                          
};
#include "magic/perfinfo_pagecombine_iteration_stat_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_pagecombine_iteration_stat_t, 0xc );
