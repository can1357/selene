#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sd_enum_sds_entry_t.start.hpp"
namespace win
{
    // [struct _SD_ENUM_SDS_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sd_enum_sds_entry_t                  
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               hash;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Hash
        _m01 uint32_t               security_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SecurityId
        _m02 uint64_t               offset;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Offset
        _m03 uint32_t               length;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m04 sdk::array<uint8_t, 1> descriptor;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Descriptor
                                                
        SDK_NONVOL_PROPERTIES( "_SD_ENUM_SDS_ENTRY.$", 0x18, true, 0x867f5ca74f061e22 );            
        SDK_FIXED_SIZE( sd_enum_sds_entry_t, 0x18 );            
    };                                          
};
#include "magic/sd_enum_sds_entry_t.end.hpp"
SDK_VERIFY( struct win::sd_enum_sds_entry_t, 0x18 );
