#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txn_parameter_block_t.start.hpp"
namespace nt
{
    // [struct _TXN_PARAMETER_BLOCK]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txn_parameter_block_t         
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint16_t length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint16_t tx_fs_context;       //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .TxFsContext
        _m02 void*    transaction_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TransactionObject
                                         
        SDK_NONVOL_PROPERTIES( "_TXN_PARAMETER_BLOCK.$", 0x10, true, 0xdb7950e3af0b1444 );                   
        SDK_FIXED_SIZE( txn_parameter_block_t, 0x10 );                   
    };                                   
};
#include "magic/txn_parameter_block_t.end.hpp"
SDK_VERIFY( struct nt::txn_parameter_block_t, 0x10 );
