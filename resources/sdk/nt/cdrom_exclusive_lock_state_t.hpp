#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdrom_exclusive_lock_state_t.start.hpp"
namespace nt
{
    // [struct _CDROM_EXCLUSIVE_LOCK_STATE]
    // => WDK 10 (NV)
    //
    struct cdrom_exclusive_lock_state_t          
    {                                            
        // WDK 10                                
        //                                       
        _m00 uint8_t                 lock_state;   //{ +0x0000    } | .LockState
        _m01 sdk::array<uint8_t, 64> caller_name;  //{ +0x0001    } | .CallerName
                                                 
        SDK_NONVOL_PROPERTIES( "_CDROM_EXCLUSIVE_LOCK_STATE.$", 0x0, false, 0x81ac9de0522cda83 );            
        SDK_FIXED_SIZE( cdrom_exclusive_lock_state_t, 0x41 );            
    };                                           
};
#include "magic/cdrom_exclusive_lock_state_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_exclusive_lock_state_t, 0x41 );
