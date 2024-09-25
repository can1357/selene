#pragma once
#include <sdkgen/support_library.hpp>
#include "crypto_key_state_t.hpp"
#include "../../nt/slist_header_t.hpp"

#include "magic/raid_adapter_crypto_key_entry_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_ADAPTER_CRYPTO_KEY_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_adapter_crypto_key_entry_t                               
    {                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                               
        _m00 uint32_t                            key_table_index;          //{ +0x0000    +0x0000    +0x0000    } | .KeyTableIndex
        _m01 sdk::array<uint8_t, 32>             key_hash;                 //{ +0x0004    +0x0004    +0x0004    } | .KeyHash
        _m02 uint32_t                            crypto_capability_index;  //{ +0x0024    +0x0024    +0x0024    } | .CryptoCapabilityIndex
        _m03 volatile int32_t                    num_outstanding_i_os;     //{ +0x0028    +0x0028    +0x0028    } | .NumOutstandingIOs
        _m04 enum stor::port::crypto_key_state_t key_state;                //{ +0x002c    +0x002c    +0x002c    } | .KeyState
        _m05 union nt::slist_header_t            pending_xrb_list;         //{ +0x0030    +0x0030    +0x0030    } | .PendingXrbList
                                                                         
        SDK_MAGIC_PROPERTIES( "_RAID_ADAPTER_CRYPTO_KEY_ENTRY.$", 0x40, true, 0x86a49fde200010a4 );                        
        SDK_FIXED_SIZE( raid_adapter_crypto_key_entry_t, 0x40 );                        
    };                                                                   
};
#include "magic/raid_adapter_crypto_key_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_adapter_crypto_key_entry_t, 0x40 );
