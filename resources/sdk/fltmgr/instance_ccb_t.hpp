#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/instance_ccb_t.start.hpp"
namespace fltmgr
{
    struct flt_instance_t;

    // [struct _INSTANCE_CCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct instance_ccb_t                            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                           
        _m00 struct fltmgr::flt_instance_t* instance;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Instance
                                                     
        SDK_MAGIC_PROPERTIES( "_INSTANCE_CCB.$", 0x8, true, 0x4db34073f19a7c1 );         
        SDK_FIXED_SIZE( instance_ccb_t, 0x8 );         
    };                                               
};
#include "magic/instance_ccb_t.end.hpp"
SDK_VERIFY( struct fltmgr::instance_ccb_t, 0x8 );
