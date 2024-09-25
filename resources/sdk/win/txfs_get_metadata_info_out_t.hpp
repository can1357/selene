#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/txfs_get_metadata_info_out_t.start.hpp"
namespace win
{
    // [struct _TXFS_GET_METADATA_INFO_OUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_get_metadata_info_out_t                
    {                                                  
        struct u0_txf_file_id_t                        
        {                                              
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
            //                                         
            _m00 int64_t low_part;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LowPart
            _m01 int64_t high_part;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HighPart
                                                       
            SDK_NONVOL_PROPERTIES( "_TXFS_GET_METADATA_INFO_OUT.TxfFileId.$", 0x10, true, 0x75ba5879d6cf382b );                              
            SDK_FIXED_SIZE( u0_txf_file_id_t, 0x10 );                              
        };                                             
                                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                             
        _m02 u0_txf_file_id_t      txf_file_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TxfFileId
        _m03 struct nt::guid_t     locking_transaction;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LockingTransaction
        _m04 uint64_t              last_lsn;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LastLsn
        _m05 uint32_t              transaction_state;    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TransactionState
                                                       
        SDK_NONVOL_PROPERTIES( "_TXFS_GET_METADATA_INFO_OUT.$", 0x30, true, 0x46d3f1bd6b24f486 );                    
        SDK_FIXED_SIZE( txfs_get_metadata_info_out_t, 0x30 );                    
    };                                                 
};
#include "magic/txfs_get_metadata_info_out_t.end.hpp"
SDK_VERIFY( struct win::txfs_get_metadata_info_out_t::u0_txf_file_id_t, 0x10 );
SDK_VERIFY( struct win::txfs_get_metadata_info_out_t, 0x30 );
