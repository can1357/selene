#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/txfs_list_transaction_locked_files_t.start.hpp"
namespace win
{
    // [struct _TXFS_LIST_TRANSACTION_LOCKED_FILES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_list_transaction_locked_files_t     
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 struct nt::guid_t ktm_transaction;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .KtmTransaction
        _m01 uint64_t          number_of_files;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfFiles
        _m02 uint64_t          buffer_size_required;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BufferSizeRequired
        _m03 uint64_t          offset;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Offset
                                                    
        SDK_NONVOL_PROPERTIES( "_TXFS_LIST_TRANSACTION_LOCKED_FILES.$", 0x28, true, 0x7f8adf0acc345e0d );                     
        SDK_FIXED_SIZE( txfs_list_transaction_locked_files_t, 0x28 );                     
    };                                              
};
#include "magic/txfs_list_transaction_locked_files_t.end.hpp"
SDK_VERIFY( struct win::txfs_list_transaction_locked_files_t, 0x28 );
