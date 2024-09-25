#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_record_t.hpp"

#include "magic/exception_debug_info_t.start.hpp"
namespace win
{
    // [struct _EXCEPTION_DEBUG_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct exception_debug_info_t                           
    {                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                  
        _m00 struct nt::exception_record_t exception_record;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionRecord
        _m01 uint32_t                      dw_first_chance;   //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .dwFirstChance
                                                            
        SDK_NONVOL_PROPERTIES( "_EXCEPTION_DEBUG_INFO.$", 0xa0, true, 0xba0bf06f4cc323a2 );                 
        SDK_FIXED_SIZE( exception_debug_info_t, 0xa0 );                 
    };                                                      
};
#include "magic/exception_debug_info_t.end.hpp"
SDK_VERIFY( struct win::exception_debug_info_t, 0xa0 );
