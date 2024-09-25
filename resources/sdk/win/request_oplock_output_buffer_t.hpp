#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_oplock_output_buffer_t.start.hpp"
namespace win
{
    // [struct _REQUEST_OPLOCK_OUTPUT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_oplock_output_buffer_t   
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint16_t structure_version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureVersion
        _m01 uint16_t structure_length;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StructureLength
        _m02 uint32_t original_oplock_level;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .OriginalOplockLevel
        _m03 uint32_t new_oplock_level;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NewOplockLevel
        _m04 uint32_t flags;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m05 uint32_t access_mode;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .AccessMode
        _m06 uint16_t share_mode;             //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ShareMode
                                            
        SDK_NONVOL_PROPERTIES( "_REQUEST_OPLOCK_OUTPUT_BUFFER.$", 0x18, true, 0x3fbb8a4730ccdfb2 );                      
        SDK_FIXED_SIZE( request_oplock_output_buffer_t, 0x18 );                      
    };                                      
};
#include "magic/request_oplock_output_buffer_t.end.hpp"
SDK_VERIFY( struct win::request_oplock_output_buffer_t, 0x18 );
