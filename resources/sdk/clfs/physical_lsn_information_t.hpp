#pragma once
#include <sdkgen/support_library.hpp>
#include "../cls/lsn_t.hpp"

#include "magic/physical_lsn_information_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_PHYSICAL_LSN_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_lsn_information_t           
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                      
        _m00 uint8_t          stream_identifier;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .StreamIdentifier
        _m01 union cls::lsn_t virtual_lsn;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VirtualLsn
        _m02 union cls::lsn_t physical_lsn;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PhysicalLsn
                                                
        SDK_NONVOL_PROPERTIES( "_CLFS_PHYSICAL_LSN_INFORMATION.$", 0x18, true, 0x619c42080316e602 );                  
        SDK_FIXED_SIZE( physical_lsn_information_t, 0x18 );                  
    };                                          
};
#include "magic/physical_lsn_information_t.end.hpp"
SDK_VERIFY( struct clfs::physical_lsn_information_t, 0x18 );
