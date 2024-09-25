#pragma once
#include <sdkgen/support_library.hpp>

namespace tag { struct context_property_t; }

#include "magic/c_enum_context_props_t.start.hpp"
namespace win
{
    // [class CEnumContextProps]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_enum_context_props_t                              
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                    
        _m00 int32_t                         c_refs;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._cRefs
        _m01 struct tag::context_property_t* p_list;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pList
        _m02 uint32_t*                       pc_list_refs;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pcListRefs
        _m03 uint32_t                        c_items;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._cItems
        _m04 uint32_t                        current_position;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._CurrentPosition
                                                              
        SDK_MAGIC_PROPERTIES( "CEnumContextProps.$", 0x28, true, 0xc3e77864a7b18d20 );                 
        SDK_FIXED_SIZE( c_enum_context_props_t, 0x28 );                 
    };                                                        
};
#include "magic/c_enum_context_props_t.end.hpp"
SDK_VERIFY( class win::c_enum_context_props_t, 0x28 );
