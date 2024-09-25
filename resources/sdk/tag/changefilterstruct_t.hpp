#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/changefilterstruct_t.start.hpp"
namespace tag
{
    // [struct tagCHANGEFILTERSTRUCT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct changefilterstruct_t  
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t cb_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t ext_status;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExtStatus
                                 
        SDK_MAGIC_PROPERTIES( "tagCHANGEFILTERSTRUCT.$", 0x8, true, 0xc81f7a0fe0d89e7d );           
        SDK_FIXED_SIZE( changefilterstruct_t, 0x8 );           
    };                           
};
#include "magic/changefilterstruct_t.end.hpp"
SDK_VERIFY( struct tag::changefilterstruct_t, 0x8 );
