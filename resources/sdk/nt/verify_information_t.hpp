#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verify_information_t.start.hpp"
namespace nt
{
    // [struct _VERIFY_INFORMATION]
    // => WDK 10 (NV)
    //
    struct verify_information_t       
    {                                 
        // WDK 10                     
        //                            
        _m00 int64_t  starting_offset;  //{ +0x0000    } | .StartingOffset
        _m01 uint32_t length;           //{ +0x0008    } | .Length
                                      
        SDK_NONVOL_PROPERTIES( "_VERIFY_INFORMATION.$", 0x0, false, 0xaa31c38ef7a9f85e );                
        SDK_FIXED_SIZE( verify_information_t, 0x10 );                
    };                                
};
#include "magic/verify_information_t.end.hpp"
SDK_VERIFY( struct nt::verify_information_t, 0x10 );
