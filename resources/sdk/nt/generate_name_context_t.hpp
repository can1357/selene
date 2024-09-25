#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/generate_name_context_t.start.hpp"
namespace nt
{
    // [struct _GENERATE_NAME_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generate_name_context_t                    
    {                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint16_t               checksum;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Checksum
        _m01 uint8_t                checksum_inserted;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ChecksumInserted
        _m02 uint8_t                name_length;        //{ +0x0003    +0x0003    +0x0003    +0x0003    +0x0003    } | .NameLength
        _m03 sdk::array<wchar_t, 8> name_buffer;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NameBuffer
        _m04 uint32_t               extension_length;   //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ExtensionLength
        _m05 sdk::array<wchar_t, 4> extension_buffer;   //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ExtensionBuffer
        _m06 uint32_t               last_index_value;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LastIndexValue
                                                      
        SDK_NONVOL_PROPERTIES( "_GENERATE_NAME_CONTEXT.$", 0x24, true, 0x3113067e4ddbeaa9 );                  
        SDK_FIXED_SIZE( generate_name_context_t, 0x24 );                  
    };                                                
};
#include "magic/generate_name_context_t.end.hpp"
SDK_VERIFY( struct nt::generate_name_context_t, 0x24 );
