#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msr_dump_section_t.start.hpp"
namespace whea
{
    // [struct _WHEA_MSR_DUMP_SECTION]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct msr_dump_section_t                       
    {                                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 uint8_t                msr_dump_buffer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MsrDumpBuffer
        _m01 uint32_t               msr_dump_length;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MsrDumpLength
        _m02 sdk::array<uint8_t, 1> msr_dump_data;    //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .MsrDumpData
                                                    
        SDK_NONVOL_PROPERTIES( "_WHEA_MSR_DUMP_SECTION.$", 0x6, true, 0xed571b4af18c533d );                
        SDK_FIXED_SIZE( msr_dump_section_t, 0x6 );                
    };                                              
};
#include "magic/msr_dump_section_t.end.hpp"
SDK_VERIFY( struct whea::msr_dump_section_t, 0x6 );
