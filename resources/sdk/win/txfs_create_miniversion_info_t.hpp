#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_create_miniversion_info_t.start.hpp"
namespace win
{
    // [struct _TXFS_CREATE_MINIVERSION_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_create_miniversion_info_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint16_t structure_version;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StructureVersion
        _m01 uint16_t structure_length;    //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .StructureLength
        _m02 uint32_t base_version;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BaseVersion
        _m03 uint16_t mini_version;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniVersion
                                         
        SDK_NONVOL_PROPERTIES( "_TXFS_CREATE_MINIVERSION_INFO.$", 0xc, true, 0xe95c893a624093f9 );                  
        SDK_FIXED_SIZE( txfs_create_miniversion_info_t, 0xc );                  
    };                                   
};
#include "magic/txfs_create_miniversion_info_t.end.hpp"
SDK_VERIFY( struct win::txfs_create_miniversion_info_t, 0xc );
