#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/generic_mapping_t.hpp"

#include "magic/system_objecttype_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_OBJECTTYPE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_objecttype_information_t                   
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 uint32_t                     next_entry_offset;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntryOffset
        _m01 uint32_t                     number_of_objects;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfObjects
        _m02 uint32_t                     number_of_handles;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfHandles
        _m03 uint32_t                     type_index;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TypeIndex
        _m04 uint32_t                     invalid_attributes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InvalidAttributes
        _m05 struct nt::generic_mapping_t generic_mapping;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .GenericMapping
        _m06 uint32_t                     valid_access_mask;   //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ValidAccessMask
        _m07 uint32_t                     pool_type;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PoolType
        _m08 uint8_t                      security_required;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .SecurityRequired
        _m09 uint8_t                      waitable_object;     //{ +0x002d    +0x002d    +0x002d    +0x002d    } | .WaitableObject
        _m10 nt::unicode_view             type_name;           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TypeName
                                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_OBJECTTYPE_INFORMATION.$", 0x40, true, 0xf3be8421430fc0d6 );                   
        SDK_FIXED_SIZE( system_objecttype_information_t, 0x40 );                   
    };                                                       
};
#include "magic/system_objecttype_information_t.end.hpp"
SDK_VERIFY( struct win::system_objecttype_information_t, 0x40 );
