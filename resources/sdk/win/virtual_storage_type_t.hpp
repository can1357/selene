#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/virtual_storage_type_t.start.hpp"
namespace win
{
    // [struct _VIRTUAL_STORAGE_TYPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct virtual_storage_type_t        
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 uint32_t          device_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceId
        _m01 struct nt::guid_t vendor_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VendorId
                                         
        SDK_NONVOL_PROPERTIES( "_VIRTUAL_STORAGE_TYPE.$", 0x14, true, 0x40ad2ff4ad1f8273 );          
        SDK_FIXED_SIZE( virtual_storage_type_t, 0x14 );          
    };                                   
};
#include "magic/virtual_storage_type_t.end.hpp"
SDK_VERIFY( struct win::virtual_storage_type_t, 0x14 );
