#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_record64_t.hpp"

#include "magic/exception64_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_EXCEPTION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exception64_t                                      
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 struct nt::exception_record64_t exception_record;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionRecord
        _m01 uint32_t                        first_chance;      //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .FirstChance
                                                              
        SDK_MAGIC_PROPERTIES( "_DBGKM_EXCEPTION64.$", 0xa0, true, 0x4daa7dac801c80e3 );                 
        SDK_FIXED_SIZE( exception64_t, 0xa0 );                 
    };                                                        
};
#include "magic/exception64_t.end.hpp"
SDK_VERIFY( struct dbgkm::exception64_t, 0xa0 );
