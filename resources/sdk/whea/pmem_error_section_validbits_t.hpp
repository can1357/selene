#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmem_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_PMEM_ERROR_SECTION_VALIDBITS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pmem_error_section_validbits_t
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint1_t  error_status;       //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ErrorStatus
        _m01 uint1_t  nfit_handle;        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NFITHandle
        _m02 uint1_t  location_info;      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .LocationInfo
        _m03 uint64_t valid_bits;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidBits
                                        
        SDK_NONVOL_PROPERTIES( "_WHEA_PMEM_ERROR_SECTION_VALIDBITS.$", 0x8, true, 0x90919ad47b12fce6 );              
        SDK_FIXED_SIZE( pmem_error_section_validbits_t, 0x8 );              
    };                                  
};
#include "magic/pmem_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::pmem_error_section_validbits_t, 0x8 );
