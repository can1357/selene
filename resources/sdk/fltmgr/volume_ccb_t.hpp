#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/volume_ccb_t.start.hpp"
namespace fltmgr
{
    // [struct _VOLUME_CCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_ccb_t                
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                             
        _m00 nt::unicode_view volume;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Volume
        _m01 uint32_t         iterator;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Iterator
                                       
        SDK_MAGIC_PROPERTIES( "_VOLUME_CCB.$", 0x18, true, 0x124e6211f972b0b8 );         
        SDK_FIXED_SIZE( volume_ccb_t, 0x18 );         
    };                                 
};
#include "magic/volume_ccb_t.end.hpp"
SDK_VERIFY( struct fltmgr::volume_ccb_t, 0x18 );
