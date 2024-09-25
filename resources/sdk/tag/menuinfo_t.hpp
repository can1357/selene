#pragma once
#include <sdkgen/support_library.hpp>

namespace win { struct hbrush_t; }

#include "magic/menuinfo_t.start.hpp"
namespace tag
{
    // [struct tagMENUINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct menuinfo_t                                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                            
        _m00 uint32_t              cb_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t              f_mask;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fMask
        _m02 uint32_t              dw_style;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwStyle
        _m03 uint32_t              cy_max;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cyMax
        _m04 struct win::hbrush_t* hbr_back;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .hbrBack
        _m05 uint32_t              dw_context_help_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwContextHelpID
        _m06 uint64_t              dw_menu_data;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwMenuData
                                                      
        SDK_MAGIC_PROPERTIES( "tagMENUINFO.$", 0x28, true, 0xd37a10a707aacff1 );                   
        SDK_FIXED_SIZE( menuinfo_t, 0x28 );                   
    };                                                
};
#include "magic/menuinfo_t.end.hpp"
SDK_VERIFY( struct tag::menuinfo_t, 0x28 );
