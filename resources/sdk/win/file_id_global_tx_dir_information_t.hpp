#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/file_id_global_tx_dir_information_t.start.hpp"
namespace win
{
    // [struct _FILE_ID_GLOBAL_TX_DIR_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_id_global_tx_dir_information_t             
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                 
        _m00 uint32_t               next_entry_offset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t               file_index;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .FileIndex
        _m02 int64_t                creation_time;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CreationTime
        _m03 int64_t                last_access_time;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .LastAccessTime
        _m04 int64_t                last_write_time;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .LastWriteTime
        _m05 int64_t                change_time;             //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ChangeTime
        _m06 int64_t                end_of_file;             //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .EndOfFile
        _m07 int64_t                allocation_size;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AllocationSize
        _m08 uint32_t               file_attributes;         //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FileAttributes
        _m09 uint32_t               file_name_length;        //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .FileNameLength
        _m10 int64_t                file_id;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .FileId
        _m11 struct nt::guid_t      locking_transaction_id;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .LockingTransactionId
        _m12 uint32_t               tx_info_flags;           //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .TxInfoFlags
        _m13 sdk::array<wchar_t, 1> file_name;               //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .FileName
                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_ID_GLOBAL_TX_DIR_INFORMATION.$", 0x60, true, 0x5366e93cbe73f4d0 );                       
        SDK_FIXED_SIZE( file_id_global_tx_dir_information_t, 0x60 );                       
    };                                                     
};
#include "magic/file_id_global_tx_dir_information_t.end.hpp"
SDK_VERIFY( struct win::file_id_global_tx_dir_information_t, 0x60 );
