#pragma once
#include <sdkgen/support_library.hpp>
#include "attribute_type_t.hpp"

#include "magic/attribute_t.start.hpp"
namespace asl
{
    // [struct _ASL_ATTRIBUTE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct attribute_t                         
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                     
        _m00 enum asl::attribute_type_t type;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint64_t                   length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m02 uint64_t                   value;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Value
        _m03 uint32_t                   flags;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
                                               
        SDK_MAGIC_PROPERTIES( "_ASL_ATTRIBUTE.$", 0x20, true, 0xa5a29ff295349834 );       
        SDK_FIXED_SIZE( attribute_t, 0x20 );       
    };                                         
};
#include "magic/attribute_t.end.hpp"
SDK_VERIFY( struct asl::attribute_t, 0x20 );
