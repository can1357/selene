#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/descriptor_relative_t.hpp"

#include "magic/key_security_t.start.hpp"
namespace cm
{
    // [struct _CM_KEY_SECURITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_security_t                                        
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 uint16_t                          signature;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                          flink;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flink
        _m02 uint32_t                          blink;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Blink
        _m03 uint32_t                          reference_count;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReferenceCount
        _m04 uint32_t                          descriptor_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DescriptorLength
        _m05 struct sec::descriptor_relative_t descriptor;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Descriptor
                                                                 
        SDK_MAGIC_PROPERTIES( "_CM_KEY_SECURITY.$", 0x28, true, 0xc345fa8f1ee9cc72 );                  
        SDK_FIXED_SIZE( key_security_t, 0x28 );                  
    };                                                           
};
#include "magic/key_security_t.end.hpp"
SDK_VERIFY( struct cm::key_security_t, 0x28 );
