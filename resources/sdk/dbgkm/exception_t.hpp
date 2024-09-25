#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/exception_record_t.hpp"

#include "magic/exception_t.start.hpp"
namespace dbgkm
{
    // [struct _DBGKM_EXCEPTION]
    // => WDK 10 (NV)
    //
    struct exception_t                                      
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 struct nt::exception_record_t exception_record;  //{ +0x0000    } | .ExceptionRecord
        _m01 uint32_t                      first_chance;      //{ +0x0098    } | .FirstChance
                                                            
        SDK_NONVOL_PROPERTIES( "_DBGKM_EXCEPTION.$", 0x0, false, 0xdae954398a3a6de6 );                 
        SDK_FIXED_SIZE( exception_t, 0xa0 );                 
    };                                                      
};
#include "magic/exception_t.end.hpp"
SDK_VERIFY( struct dbgkm::exception_t, 0xa0 );
