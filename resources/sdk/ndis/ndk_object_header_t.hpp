#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_version_t.hpp"
#include "ndk_object_type_t.hpp"
#include "ndk_object_header_reserved_block_t.hpp"

#include "magic/ndk_object_header_t.start.hpp"
namespace ndis
{
    // [struct _NDK_OBJECT_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_object_header_t                                            
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                                
        _m00 struct ndis::ndk_version_t                      version;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 enum ndis::ndk_object_type_t                    object_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ObjectType
        _m02 struct ndis::ndk_object_header_reserved_block_t ndk_reserved;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdkReserved
                                                                          
        SDK_MAGIC_PROPERTIES( "_NDK_OBJECT_HEADER.$", 0x28, true, 0x7b6701e0063f12b1 );             
        SDK_FIXED_SIZE( ndk_object_header_t, 0x28 );                      
    };                                                                    
};
#include "magic/ndk_object_header_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_object_header_t, 0x28 );
