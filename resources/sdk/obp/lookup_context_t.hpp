#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct object_directory_entry_t; }
namespace nt { struct object_directory_t;       }

#include "magic/lookup_context_t.start.hpp"
namespace obp
{
    // [struct _OBP_LOOKUP_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lookup_context_t                                             
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                              
        _m00 struct nt::object_directory_t*        directory;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Directory
        _m01 struct nt::object_directory_entry_t** entry_link;            //{ +0x0010    +0x0010    +0x0008    +0x0010    } | .EntryLink
        _m02 uint32_t                              hash_value;            //{ +0x0018    +0x0018    +0x0010    +0x0018    } | .HashValue
        _m03 varuint_t                             hash_index;            //{ +0x001c    +0x001c    +0x0014    +0x001c    } | .HashIndex
        _m04 uint8_t                               locked_exclusive;      //{ +0x001f    +0x001f    +0x0015    +0x001f    } | .LockedExclusive
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                     
        //                                                              
        _m05 void*                                 object;                //{ +0x0008    +0x0008    +0x0008    } | .Object
        _m06 uint8_t                               directory_locked;      //{ +0x001e    +0x001e    +0x001e    } | .DirectoryLocked
        _m07 uint32_t                              lock_state_signature;  //{ +0x0020    +0x0020    +0x0020    } | .LockStateSignature
                                                                        
        // Windows 11                                                   
        //                                                              
        _m08 uint8_t                               directory_referenced;  //{ +0x0016    } | .DirectoryReferenced
                                                                        
        SDK_MAGIC_PROPERTIES( "_OBP_LOOKUP_CONTEXT.$", 0x28, true, 0xd7d1ea4b8c652270 );                     
        SDK_DYNAMIC_SIZE( lookup_context_t );                           
    };                                                                  
};
#include "magic/lookup_context_t.end.hpp"
