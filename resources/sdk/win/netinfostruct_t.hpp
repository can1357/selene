#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/netinfostruct_t.start.hpp"
namespace win
{
    // [struct _NETINFOSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct netinfostruct_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t cb_structure;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStructure
        _m01 uint32_t dw_provider_version;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwProviderVersion
        _m02 uint32_t dw_status;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwStatus
        _m03 uint32_t dw_characteristics;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwCharacteristics
        _m04 uint64_t dw_handle;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwHandle
        _m05 uint16_t w_net_type;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .wNetType
        _m06 uint32_t dw_printers;          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwPrinters
        _m07 uint32_t dw_drives;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwDrives
                                          
        SDK_MAGIC_PROPERTIES( "_NETINFOSTRUCT.$", 0x28, true, 0xbc638ae95f70fda6 );                    
        SDK_FIXED_SIZE( netinfostruct_t, 0x28 );                    
    };                                    
};
#include "magic/netinfostruct_t.end.hpp"
SDK_VERIFY( struct win::netinfostruct_t, 0x28 );
