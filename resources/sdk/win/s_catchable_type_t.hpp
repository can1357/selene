#pragma once
#include <sdkgen/support_library.hpp>
#include "pmd_t.hpp"

#include "magic/s_catchable_type_t.start.hpp"
namespace win
{
    struct type_descriptor_t;

    // [struct _s__CatchableType]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_catchable_type_t                                 
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 uint32_t                       properties;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .properties
        _m01 struct win::type_descriptor_t* p_type;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .pType
        _m02 struct win::pmd_t              this_displacement;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .thisDisplacement
        _m03 int32_t                        size_or_offset;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .sizeOrOffset
        _m04 sdk::function<void(void*)>*    copy_function;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .copyFunction
                                                              
        SDK_MAGIC_PROPERTIES( "_s__CatchableType.$", 0x24, true, 0xb13e56d52ebd0ad7 );                  
        SDK_FIXED_SIZE( s_catchable_type_t, 0x24 );                  
    };                                                        
};
#include "magic/s_catchable_type_t.end.hpp"
SDK_VERIFY( struct win::s_catchable_type_t, 0x24 );
