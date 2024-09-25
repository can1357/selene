#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_debug_extension_t.start.hpp"
namespace fx
{
    class tag_tracker_t;
    class verifier_lock_t;

    // [struct FxObjectDebugExtension]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_debug_extension_t                         
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                  
        _m00 class fx::tag_tracker_t*   tag_tracker;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TagTracker
        _m01 class fx::verifier_lock_t* verifier_lock;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VerifierLock
        _m02 sdk::array<uint8_t, 8>     state_history;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .StateHistory
        _m03 int32_t                    state_history_index;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .StateHistoryIndex
        _m04 uint32_t                   signature;            //{ +0x001c    +0x0020    +0x0020    +0x0020    } | .Signature
        _m05 sdk::array<uint32_t, 1>    allocation_start;     //{ +0x0020    +0x0030    +0x0030    +0x0030    } | .AllocationStart
                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                  
        _m06 uint8_t                    object_counted;       //{ +0x001c    +0x001c    +0x001c    } | .ObjectCounted
                                                            
        SDK_MAGIC_PROPERTIES( "FxObjectDebugExtension.$", 0x40, true, 0x399baa6afab43b1c );                    
        SDK_DYNAMIC_SIZE( object_debug_extension_t );                    
    };                                                      
};
#include "magic/object_debug_extension_t.end.hpp"
