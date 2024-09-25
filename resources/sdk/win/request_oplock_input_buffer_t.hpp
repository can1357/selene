#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_oplock_input_buffer_t.start.hpp"
namespace win
{
    // [struct _REQUEST_OPLOCK_INPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_oplock_input_buffer_t     
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint16_t structure_version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureVersion
        _m01 uint16_t structure_length;        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StructureLength
        _m02 uint32_t requested_oplock_level;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .RequestedOplockLevel
        _m03 uint32_t flags;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                             
        SDK_NONVOL_PROPERTIES( "_REQUEST_OPLOCK_INPUT_BUFFER.$", 0xc, true, 0x59056b5b86f4a063 );                       
        SDK_FIXED_SIZE( request_oplock_input_buffer_t, 0xc );                       
    };                                       
};
#include "magic/request_oplock_input_buffer_t.end.hpp"
SDK_VERIFY( struct win::request_oplock_input_buffer_t, 0xc );
