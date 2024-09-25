#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_list_transaction_locked_files_entry_t.start.hpp"
namespace win
{
    // [struct _TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_list_transaction_locked_files_entry_t
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 uint64_t               offset;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint32_t               name_flags;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NameFlags
        _m02 int64_t                file_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileId
        _m03 sdk::array<wchar_t, 1> file_name;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .FileName
                                                     
        SDK_NONVOL_PROPERTIES( "_TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY.$", 0x30, true, 0xed5702d1b691674 );           
        SDK_FIXED_SIZE( txfs_list_transaction_locked_files_entry_t, 0x30 );           
    };                                               
};
#include "magic/txfs_list_transaction_locked_files_entry_t.end.hpp"
SDK_VERIFY( struct win::txfs_list_transaction_locked_files_entry_t, 0x30 );
