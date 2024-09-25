#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rpcolemessage_t.start.hpp"
namespace tag
{
    // [struct tagRPCOLEMESSAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rpcolemessage_t                
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t data_representation;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dataRepresentation
        _m01 void*    buffer;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Buffer
        _m02 uint32_t cb_buffer;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cbBuffer
        _m03 uint32_t i_method;             //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .iMethod
        _m04 uint32_t rpc_flags;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .rpcFlags
                                          
        SDK_MAGIC_PROPERTIES( "tagRPCOLEMESSAGE.$", 0x50, true, 0xd78d127b21645972 );                    
        SDK_FIXED_SIZE( rpcolemessage_t, 0x50 );                    
    };                                    
};
#include "magic/rpcolemessage_t.end.hpp"
SDK_VERIFY( struct tag::rpcolemessage_t, 0x50 );
