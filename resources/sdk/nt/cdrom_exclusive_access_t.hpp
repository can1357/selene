#pragma once
#include <sdkgen/support_library.hpp>
#include "exclusive_access_request_type_t.hpp"

#include "magic/cdrom_exclusive_access_t.start.hpp"
namespace nt
{
    // [struct _CDROM_EXCLUSIVE_ACCESS]
    // => WDK 10 (NV)
    //
    struct cdrom_exclusive_access_t                                
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 enum nt::exclusive_access_request_type_t request_type;  //{ +0x0000    } | .RequestType
        _m01 uint32_t                                 flags;         //{ +0x0004    } | .Flags
                                                                   
        SDK_NONVOL_PROPERTIES( "_CDROM_EXCLUSIVE_ACCESS.$", 0x0, false, 0xba297e8b9f207775 );             
        SDK_FIXED_SIZE( cdrom_exclusive_access_t, 0x8 );             
    };                                                             
};
#include "magic/cdrom_exclusive_access_t.end.hpp"
SDK_VERIFY( struct nt::cdrom_exclusive_access_t, 0x8 );
