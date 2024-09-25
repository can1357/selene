#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/manager_ccb_t.start.hpp"
namespace fltmgr
{
    struct fltp_frame_t;

    // [struct _MANAGER_CCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct manager_ccb_t                           
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                         
        _m00 struct fltmgr::fltp_frame_t* frame;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Frame
        _m01 uint32_t                     iterator;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Iterator
                                                   
        SDK_MAGIC_PROPERTIES( "_MANAGER_CCB.$", 0x10, true, 0x71a9499fa219218a );         
        SDK_FIXED_SIZE( manager_ccb_t, 0x10 );         
    };                                             
};
#include "magic/manager_ccb_t.end.hpp"
SDK_VERIFY( struct fltmgr::manager_ccb_t, 0x10 );
