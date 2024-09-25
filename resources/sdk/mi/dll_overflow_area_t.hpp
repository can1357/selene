#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dll_overflow_area_t.start.hpp"
namespace mi
{
    // [struct _MI_DLL_OVERFLOW_AREA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dll_overflow_area_t          
    {                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                              
        _m00 void* range_start;           //{ +0x0000    +0x0000    +0x0000    } | .RangeStart
        _m01 void* next_va;               //{ +0x0008    +0x0008    +0x0008    } | .NextVa
        _m02 void* range_start_above2gb;  //{ +0x0010    +0x0010    +0x0010    } | .RangeStartAbove2gb
        _m03 void* next_va_above2gb;      //{ +0x0018    +0x0018    +0x0018    } | .NextVaAbove2gb
                                        
        SDK_MAGIC_PROPERTIES( "_MI_DLL_OVERFLOW_AREA.$", 0x20, true, 0xa3583f4ea4cd0c2c );                     
        SDK_FIXED_SIZE( dll_overflow_area_t, 0x20 );                     
    };                                  
};
#include "magic/dll_overflow_area_t.end.hpp"
SDK_VERIFY( struct mi::dll_overflow_area_t, 0x20 );
