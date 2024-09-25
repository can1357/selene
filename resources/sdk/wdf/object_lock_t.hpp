#pragma once
#include <sdkgen/support_library.hpp>
#include "wudf_lock_t.hpp"

#include "magic/object_lock_t.start.hpp"
namespace wdf
{
    // [class WdfObjectLock]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class object_lock_t                                   
    {                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 int32_t                 m_constructor_status;  //{ +0x0000    +0x0000    +0x0000    } | .m_ConstructorStatus
        _m01 struct wdf::wudf_lock_t m_lock;                //{ +0x0010    +0x0010    +0x0010    } | .m_Lock
                                                          
        SDK_MAGIC_PROPERTIES( "WdfObjectLock.$", 0x18, true, 0x495df7222f495c01 );                     
        SDK_FIXED_SIZE( object_lock_t, 0x18 );                     
    };                                                    
};
#include "magic/object_lock_t.end.hpp"
SDK_VERIFY( class wdf::object_lock_t, 0x18 );
