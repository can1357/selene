#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/guid_registration_t.start.hpp"
namespace trace
{
    // [struct _TRACE_GUID_REGISTRATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct guid_registration_t                   
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                       
        _m00 const struct nt::guid_t* guid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 void*                    reg_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RegHandle
                                                 
        SDK_MAGIC_PROPERTIES( "_TRACE_GUID_REGISTRATION.$", 0x10, true, 0x52a04f86696f843 );           
        SDK_FIXED_SIZE( guid_registration_t, 0x10 );           
    };                                           
};
#include "magic/guid_registration_t.end.hpp"
SDK_VERIFY( struct trace::guid_registration_t, 0x10 );
