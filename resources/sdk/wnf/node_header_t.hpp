#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/node_header_t.start.hpp"
namespace wnf
{
    // [struct _WNF_NODE_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct node_header_t             
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint16_t node_type_code;  //{ +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 uint16_t node_byte_size;  //{ +0x0002    +0x0002    +0x0002    } | .NodeByteSize
                                     
        SDK_MAGIC_PROPERTIES( "_WNF_NODE_HEADER.$", 0x4, true, 0x71976ae6d81650ee );               
        SDK_FIXED_SIZE( node_header_t, 0x4 );               
    };                               
};
#include "magic/node_header_t.end.hpp"
SDK_VERIFY( struct wnf::node_header_t, 0x4 );
