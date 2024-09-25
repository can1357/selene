#pragma once
#include <sdkgen/support_library.hpp>
#include "mmsupport_shared_t.hpp"
#include "mmsupport_instance_t.hpp"

#include "magic/mmsupport_full_t.start.hpp"
namespace nt
{
    // [struct _MMSUPPORT_FULL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmsupport_full_t                           
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                            
        _m00 struct nt::mmsupport_instance_t instance;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Instance
        _m01 struct nt::mmsupport_shared_t   shared;    //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Shared
                                                      
        SDK_MAGIC_PROPERTIES( "_MMSUPPORT_FULL.$", 0x140, true, 0x78a6a0033eb46603 );         
        SDK_DYNAMIC_SIZE( mmsupport_full_t );         
    };                                                
};
#include "magic/mmsupport_full_t.end.hpp"
