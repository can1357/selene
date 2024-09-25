#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/binding_vector_t.start.hpp"
namespace rpc
{
    // [struct _RPC_BINDING_VECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct binding_vector_t                 
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 uint32_t             count;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<void*, 1> binding_h;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BindingH
                                            
        SDK_MAGIC_PROPERTIES( "_RPC_BINDING_VECTOR.$", 0x10, true, 0x8d89833139cdc38c );          
        SDK_FIXED_SIZE( binding_vector_t, 0x10 );          
    };                                      
};
#include "magic/binding_vector_t.end.hpp"
SDK_VERIFY( struct rpc::binding_vector_t, 0x10 );
