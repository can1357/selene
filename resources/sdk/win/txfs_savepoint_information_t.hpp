#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_savepoint_information_t.start.hpp"
namespace win
{
    // [struct _TXFS_SAVEPOINT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_savepoint_information_t
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 void*    ktm_transaction;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .KtmTransaction
        _m01 uint32_t action_code;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ActionCode
        _m02 uint32_t savepoint_id;      //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .SavepointId
                                       
        SDK_NONVOL_PROPERTIES( "_TXFS_SAVEPOINT_INFORMATION.$", 0x10, true, 0xfd94f1f40feac5ce );                
        SDK_FIXED_SIZE( txfs_savepoint_information_t, 0x10 );                
    };                                 
};
#include "magic/txfs_savepoint_information_t.end.hpp"
SDK_VERIFY( struct win::txfs_savepoint_information_t, 0x10 );
