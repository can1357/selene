#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_sge_t.start.hpp"
namespace ndis
{
    // [struct _NDK_SGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_sge_t                      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 void*    virtual_address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 int64_t  logical_address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogicalAddress
        _m02 uint32_t length;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m03 uint32_t memory_region_token;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MemoryRegionToken
                                          
        SDK_MAGIC_PROPERTIES( "_NDK_SGE.$", 0x10, true, 0xc22a9600ce5f444 );                    
        SDK_FIXED_SIZE( ndk_sge_t, 0x10 );                    
    };                                    
};
#include "magic/ndk_sge_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_sge_t, 0x10 );
