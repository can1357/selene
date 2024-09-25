#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_crypto_key_table_t.start.hpp"
namespace stor::port
{
    struct raid_adapter_crypto_key_entry_t;

    // [struct _RAID_CRYPTO_KEY_TABLE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_crypto_key_table_t            
    {                                         
        using table_t = struct stor::port::raid_adapter_crypto_key_entry_t*;                
                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 uint32_t         num_key_entries;  //{ +0x0000    +0x0000    +0x0000    } | .NumKeyEntries
        _m01 uint8_t          key_table_full;   //{ +0x0004    +0x0004    +0x0004    } | .KeyTableFull
        _m02 table_t          table;            //{ +0x0008    +0x0008    +0x0008    } | .Table
        _m03 volatile int32_t key_table_lock;   //{ +0x0010    +0x0010    +0x0010    } | .KeyTableLock
                                              
        SDK_MAGIC_PROPERTIES( "_RAID_CRYPTO_KEY_TABLE.$", 0x18, true, 0x5ad564b43062e23a );                
        SDK_FIXED_SIZE( raid_crypto_key_table_t, 0x18 );                
    };                                        
};
#include "magic/raid_crypto_key_table_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_crypto_key_table_t, 0x18 );
