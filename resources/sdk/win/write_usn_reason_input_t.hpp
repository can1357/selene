#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/write_usn_reason_input_t.start.hpp"
namespace win
{
    // [struct _WRITE_USN_REASON_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct write_usn_reason_input_t       
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t flags;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t usn_reason_to_write;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .UsnReasonToWrite
                                          
        SDK_NONVOL_PROPERTIES( "_WRITE_USN_REASON_INPUT.$", 0x8, true, 0xb6bc2d7cfb6ddaf5 );                    
        SDK_FIXED_SIZE( write_usn_reason_input_t, 0x8 );                    
    };                                    
};
#include "magic/write_usn_reason_input_t.end.hpp"
SDK_VERIFY( struct win::write_usn_reason_input_t, 0x8 );
