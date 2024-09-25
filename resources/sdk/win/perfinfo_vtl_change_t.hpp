#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_vtl_change_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_VTL_CHANGE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_vtl_change_t     
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t operation_code;  //{ +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint16_t service_code;    //{ +0x0002    +0x0002    +0x0002    } | .ServiceCode
                                     
        SDK_MAGIC_PROPERTIES( "_PERFINFO_VTL_CHANGE.$", 0x4, true, 0xdb5959b1f7b3a767 );               
        SDK_FIXED_SIZE( perfinfo_vtl_change_t, 0x4 );               
    };                               
};
#include "magic/perfinfo_vtl_change_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_vtl_change_t, 0x4 );
