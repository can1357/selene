#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/network_app_instance_ea_t.start.hpp"
namespace win
{
    // [struct _NETWORK_APP_INSTANCE_EA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct network_app_instance_ea_t           
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 struct nt::guid_t app_instance_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AppInstanceID
        _m01 uint32_t          csv_flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CsvFlags
                                               
        SDK_NONVOL_PROPERTIES( "_NETWORK_APP_INSTANCE_EA.$", 0x14, true, 0xccf5fe9b60d414b8 );                
        SDK_FIXED_SIZE( network_app_instance_ea_t, 0x14 );                
    };                                         
};
#include "magic/network_app_instance_ea_t.end.hpp"
SDK_VERIFY( struct win::network_app_instance_ea_t, 0x14 );
