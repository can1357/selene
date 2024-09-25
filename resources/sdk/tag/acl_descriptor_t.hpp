#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/descriptor_t.hpp"

#include "magic/acl_descriptor_t.start.hpp"
namespace tag
{
    // [struct tagACL_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct acl_descriptor_t                              
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                               
        _m00 void*                    p_acl_buffer;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pACLBuffer
        _m01 uint32_t                 ul_acl_buffer_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulACLBufferSize
        _m02 uint32_t                 ul_sid_size;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulSIDSize
        _m03 int32_t                  b_dirty_acl;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bDirtyACL
        _m04 struct sec::descriptor_t sec_desc;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SecDesc
                                                         
        SDK_MAGIC_PROPERTIES( "tagACL_DESCRIPTOR.$", 0x40, true, 0x6ecafb6e5c8b49d9 );                   
        SDK_FIXED_SIZE( acl_descriptor_t, 0x40 );                   
    };                                                   
};
#include "magic/acl_descriptor_t.end.hpp"
SDK_VERIFY( struct tag::acl_descriptor_t, 0x40 );
