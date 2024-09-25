#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extended_encrypted_data_info_t.start.hpp"
namespace win
{
    // [struct _EXTENDED_ENCRYPTED_DATA_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct extended_encrypted_data_info_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t extended_code;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtendedCode
        _m01 uint32_t length;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint32_t flags;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                         
        SDK_NONVOL_PROPERTIES( "_EXTENDED_ENCRYPTED_DATA_INFO.$", 0x10, true, 0xded8514c16590b77 );              
        SDK_FIXED_SIZE( extended_encrypted_data_info_t, 0x10 );              
    };                                   
};
#include "magic/extended_encrypted_data_info_t.end.hpp"
SDK_VERIFY( struct win::extended_encrypted_data_info_t, 0x10 );
