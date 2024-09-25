#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/call_hash_entry_t.start.hpp"
namespace nt
{
    // [struct _CALL_HASH_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct call_hash_entry_t                  
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                    
        _m00 nt::list_entry_t list_entry;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 void*            callers_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CallersAddress
        _m02 void*            callers_caller;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CallersCaller
        _m03 uint32_t         call_count;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CallCount
                                              
        SDK_MAGIC_PROPERTIES( "_CALL_HASH_ENTRY.$", 0x28, true, 0x6da0fd53a87c65bc );                
        SDK_FIXED_SIZE( call_hash_entry_t, 0x28 );                
    };                                        
};
#include "magic/call_hash_entry_t.end.hpp"
SDK_VERIFY( struct nt::call_hash_entry_t, 0x28 );
