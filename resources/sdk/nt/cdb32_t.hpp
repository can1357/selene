#pragma once
#include <sdkgen/support_library.hpp>
#include "cdb32generic_t.hpp"

#include "magic/cdb32_t.start.hpp"
namespace nt
{
    // [union _CDB32]
    // => WDK 10 (NV)
    //
    union cdb32_t                                   
    {                                               
        // WDK 10                                   
        //                                          
        _m00 struct nt::cdb32generic_t cdb32generic;  //{ +0x0000    } | .CDB32GENERIC
        _m01 sdk::array<uint32_t, 8>   as_ulong;      //{ +0x0000    } | .AsUlong
        _m02 sdk::array<uint8_t, 32>   as_byte;       //{ +0x0000    } | .AsByte
                                                    
        SDK_NONVOL_PROPERTIES( "_CDB32.$", 0x0, false, 0xdd50e099437ef856 );             
        SDK_FIXED_SIZE( cdb32_t, 0x20 );             
    };                                              
};
#include "magic/cdb32_t.end.hpp"
SDK_VERIFY( union nt::cdb32_t, 0x20 );
