#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/object_namespace_lookuptable_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_NAMESPACE_LOOKUPTABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_namespace_lookuptable_t                              
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                             
        _m00 sdk::array<nt::list_entry_t, 37> hash_buckets;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HashBuckets
        _m01 struct ex::push_lock_t           lock;                      //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .Lock
        _m02 uint32_t                         number_of_private_spaces;  //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .NumberOfPrivateSpaces
                                                                       
        SDK_MAGIC_PROPERTIES( "_OBJECT_NAMESPACE_LOOKUPTABLE.$", 0x260, true, 0x3599c49797568f9e );                         
        SDK_FIXED_SIZE( object_namespace_lookuptable_t, 0x260 );                         
    };                                                                 
};
#include "magic/object_namespace_lookuptable_t.end.hpp"
SDK_VERIFY( struct nt::object_namespace_lookuptable_t, 0x260 );
