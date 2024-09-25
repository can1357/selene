#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/lookaside_list_ex_t.hpp"

#include "magic/ppl_lookaside_list_t.start.hpp"
namespace ndis
{
    // [struct _PPL_LOOKASIDE_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ppl_lookaside_list_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                
        _m00 struct nt::lookaside_list_ex_t  list;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
        _m01 struct nt::lookaside_list_ex_t* backend_list;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .BackendList
        _m02 uint64_t                        lock;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Lock
        _m03 uint8_t                         initialized;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Initialized
                                                          
        SDK_MAGIC_PROPERTIES( "_PPL_LOOKASIDE_LIST.$", 0x80, true, 0x1e5ff8f991fcb183 );             
        SDK_FIXED_SIZE( ppl_lookaside_list_t, 0x80 );             
    };                                                    
};
#include "magic/ppl_lookaside_list_t.end.hpp"
SDK_VERIFY( struct ndis::ppl_lookaside_list_t, 0x80 );
