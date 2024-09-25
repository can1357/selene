#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_name_control_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_NAME_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_name_control_t      
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                         
        _m00 nt::unicode_view name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
                                   
        SDK_MAGIC_PROPERTIES( "_FLT_NAME_CONTROL.$", 0x10, true, 0x9e05bec66b2b8cd5 );     
        SDK_FIXED_SIZE( flt_name_control_t, 0x10 );     
    };                             
};
#include "magic/flt_name_control_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_name_control_t, 0x10 );
