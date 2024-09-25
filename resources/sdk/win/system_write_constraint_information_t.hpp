#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_write_constraint_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_WRITE_CONSTRAINT_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_write_constraint_information_t
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t write_constraint_policy;    //{ +0x0000    +0x0000    +0x0000    } | .WriteConstraintPolicy
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_WRITE_CONSTRAINT_INFORMATION.$", 0x8, true, 0x7db384742f08497e );                        
        SDK_FIXED_SIZE( system_write_constraint_information_t, 0x8 );                        
    };                                          
};
#include "magic/system_write_constraint_information_t.end.hpp"
SDK_VERIFY( struct win::system_write_constraint_information_t, 0x8 );
