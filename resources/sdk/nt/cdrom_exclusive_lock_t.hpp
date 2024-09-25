#pragma once
#include <sdkgen/support_library.hpp>
#include "cdrom_exclusive_access_t.hpp"

#include "magic/cdrom_exclusive_lock_t.start.hpp"
namespace nt
{
    // [struct _CDROM_EXCLUSIVE_LOCK]
    // => WDK 10 (NV)
    //
    struct cdrom_exclusive_lock_t                            
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 struct nt::cdrom_exclusive_access_t access;       //{ +0x0000    } | .Access
        _m01 sdk::array<uint8_t, 64>             caller_name;  //{ +0x0008    } | .CallerName
                                                             
        SDK_NONVOL_PROPERTIES( "_CDROM_EXCLUSIVE_LOCK.$", 0x0, false, 0xf8515da79bfaa3a3 );            
        SDK_FIXED_SIZE( cdrom_exclusive_lock_t, 0x48 );            
    };                                                       
};
#include "magic/cdrom_exclusive_lock_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_exclusive_lock_t, 0x48 );
