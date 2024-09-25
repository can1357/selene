#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/data_view_attr_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_DATA_VIEW_ATTR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct data_view_attr_t          
    {                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t flags;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 void*    section_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SectionHandle
        _m02 void*    view_base;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ViewBase
        _m03 uint64_t view_size;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ViewSize
                                     
        SDK_NONVOL_PROPERTIES( "_ALPC_DATA_VIEW_ATTR.$", 0x20, true, 0xa0060889536f290 );               
        SDK_FIXED_SIZE( data_view_attr_t, 0x20 );               
    };                               
};
#include "magic/data_view_attr_t.end.hpp"
SDK_VERIFY( struct alpc::data_view_attr_t, 0x20 );
