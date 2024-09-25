#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_layout_t.start.hpp"
namespace tag
{
    // [struct tagStorageLayout]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storage_layout_t             
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t layout_type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LayoutType
        _m01 wchar_t* pwcs_element_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwcsElementName
        _m02 int64_t  c_offset;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cOffset
        _m03 int64_t  c_bytes;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cBytes
                                        
        SDK_MAGIC_PROPERTIES( "tagStorageLayout.$", 0x20, true, 0xbc9917b0f43b65ad );                  
        SDK_FIXED_SIZE( storage_layout_t, 0x20 );                  
    };                                  
};
#include "magic/storage_layout_t.end.hpp"
SDK_VERIFY( struct tag::storage_layout_t, 0x20 );
