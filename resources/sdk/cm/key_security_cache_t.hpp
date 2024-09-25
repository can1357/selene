#pragma once
#include <sdkgen/support_library.hpp>
#include "../sec/descriptor_relative_t.hpp"

#include "magic/key_security_cache_t.start.hpp"
namespace cm
{
    // [struct _CM_KEY_SECURITY_CACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_security_cache_t                                  
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 uint32_t                          cell;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cell
        _m01 uint32_t                          conv_key;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ConvKey
        _m02 nt::list_entry_t                  list;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .List
        _m03 uint32_t                          descriptor_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DescriptorLength
        _m04 uint32_t                          real_ref_count;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RealRefCount
        _m05 struct sec::descriptor_relative_t descriptor;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Descriptor
                                                                 
        SDK_MAGIC_PROPERTIES( "_CM_KEY_SECURITY_CACHE.$", 0x38, true, 0x9ff95d8c279a2c30 );                  
        SDK_FIXED_SIZE( key_security_cache_t, 0x38 );                  
    };                                                           
};
#include "magic/key_security_cache_t.end.hpp"
SDK_VERIFY( struct cm::key_security_cache_t, 0x38 );
