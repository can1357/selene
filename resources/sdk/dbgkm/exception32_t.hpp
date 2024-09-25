#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_record32_t.hpp"

#include "magic/exception32_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_EXCEPTION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct exception32_t                                      
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 struct nt::exception_record32_t exception_record;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExceptionRecord
        _m01 uint32_t                        first_chance;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FirstChance
                                                              
        SDK_MAGIC_PROPERTIES( "_DBGKM_EXCEPTION32.$", 0x54, true, 0xb5de61a6fbb930e9 );                 
        SDK_FIXED_SIZE( exception32_t, 0x54 );                 
    };                                                        
};
#include "magic/exception32_t.end.hpp"
SDK_VERIFY( struct dbgkm::exception32_t, 0x54 );
