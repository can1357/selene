#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_node_information_t.start.hpp"
namespace win
{
    // [struct _KEY_NODE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_node_information_t                   
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 int64_t                last_write_time;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastWriteTime
        _m01 uint32_t               title_index;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TitleIndex
        _m02 uint32_t               class_offset;     //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ClassOffset
        _m03 uint32_t               class_length;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ClassLength
        _m04 uint32_t               name_length;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .NameLength
        _m05 sdk::array<wchar_t, 1> name;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Name
                                                    
        SDK_NONVOL_PROPERTIES( "_KEY_NODE_INFORMATION.$", 0x20, true, 0x6018f8c4d90160ec );                
        SDK_FIXED_SIZE( key_node_information_t, 0x20 );                
    };                                              
};
#include "magic/key_node_information_t.end.hpp"
SDK_VERIFY( struct win::key_node_information_t, 0x20 );
