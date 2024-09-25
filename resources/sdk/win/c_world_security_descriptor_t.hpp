#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/descriptor_t.hpp"

#include "magic/c_world_security_descriptor_t.start.hpp"
namespace win
{
    // [class CWorldSecurityDescriptor]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_world_security_descriptor_t   
    {                                     
        using acl_t = sdk::variant<sdk::array<uint64_t, 13>, sdk::array<uint8_t, 144>>;    
                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                                
        _m00 struct sec::descriptor_t sd;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._sd
        _m01 acl_t                    acl;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._acl
                                          
        SDK_MAGIC_PROPERTIES( "CWorldSecurityDescriptor.$", 0xb8, true, 0xd62f6f0fe38b4351 );    
        SDK_DYNAMIC_SIZE( c_world_security_descriptor_t );    
    };                                    
};
#include "magic/c_world_security_descriptor_t.end.hpp"
