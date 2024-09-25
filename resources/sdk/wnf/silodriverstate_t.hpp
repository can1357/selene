#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_t.hpp"

#include "magic/silodriverstate_t.start.hpp"
namespace wnf
{
    struct scope_map_t;

    // [struct _WNF_SILODRIVERSTATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct silodriverstate_t                                              
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                
        _m00 struct wnf::scope_map_t* scope_map;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ScopeMap
        _m01 void volatile*           permanent_name_store_root_key;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PermanentNameStoreRootKey
        _m02 void volatile*           persistent_name_store_root_key;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PersistentNameStoreRootKey
        _m03 volatile int64_t         permanent_name_sequence_number;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PermanentNameSequenceNumber
        _m04 struct wnf::lock_t       permanent_name_sequence_number_lock;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PermanentNameSequenceNumberLock
        _m05 volatile int64_t         permanent_name_sequence_number_pool;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PermanentNameSequenceNumberPool
        _m06 volatile int64_t         runtime_name_sequence_number;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RuntimeNameSequenceNumber
                                                                          
        SDK_MAGIC_PROPERTIES( "_WNF_SILODRIVERSTATE.$", 0x38, true, 0x4083224617471e73 );                                    
        SDK_FIXED_SIZE( silodriverstate_t, 0x38 );                                    
    };                                                                    
};
#include "magic/silodriverstate_t.end.hpp"
SDK_VERIFY( struct wnf::silodriverstate_t, 0x38 );
