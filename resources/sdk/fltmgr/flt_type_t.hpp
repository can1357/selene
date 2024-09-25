#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flt_type_t.start.hpp"
namespace fltmgr
{
    // [union _FLT_TYPE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union flt_type_t            
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t size;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
                                
        SDK_MAGIC_PROPERTIES( "_FLT_TYPE.$", 0x4, true, 0x3c19d153d1102191 );          
        SDK_FIXED_SIZE( flt_type_t, 0x4 );          
    };                          
};
#include "magic/flt_type_t.end.hpp"
SDK_VERIFY( union fltmgr::flt_type_t, 0x4 );
