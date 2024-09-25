#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filter_ccb_t.start.hpp"
namespace fltmgr
{
    struct flt_filter_t;

    // [struct _FILTER_CCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_ccb_t                            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct fltmgr::flt_filter_t* filter;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Filter
        _m01 uint32_t                     iterator;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Iterator
                                                   
        SDK_MAGIC_PROPERTIES( "_FILTER_CCB.$", 0x10, true, 0x21b4b8c7a25d1dda );         
        SDK_FIXED_SIZE( filter_ccb_t, 0x10 );         
    };                                             
};
#include "magic/filter_ccb_t.end.hpp"
SDK_VERIFY( struct fltmgr::filter_ccb_t, 0x10 );
