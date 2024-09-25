#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/thread_state_t.start.hpp"
namespace verifier
{
    // [struct VerifierThreadState]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_state_t                      
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                     
        _m00 uint32_t          c_com_inits;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cComInits
        _m01 uint32_t          c_ole_inits;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cOleInits
        _m02 struct nt::guid_t guid_context;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .guidContext
        _m03 void*             pv_top_swc_node;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pvTopSWCNode
                                               
        SDK_MAGIC_PROPERTIES( "VerifierThreadState.$", 0x20, true, 0xd0ee8514008a52ac );                
        SDK_FIXED_SIZE( thread_state_t, 0x20 );                
    };                                         
};
#include "magic/thread_state_t.end.hpp"
SDK_VERIFY( struct verifier::thread_state_t, 0x20 );
