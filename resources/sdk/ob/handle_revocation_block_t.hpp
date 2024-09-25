#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../ex/rundown_ref_t.hpp"

#include "magic/handle_revocation_block_t.start.hpp"
namespace ob
{
    // [struct _OB_HANDLE_REVOCATION_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_revocation_block_t                   
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                             
        _m00 nt::list_entry_t         revocation_infos;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RevocationInfos
        _m01 struct ex::push_lock_t   lock;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
        _m02 struct ex::rundown_ref_t rundown;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Rundown
                                                       
        SDK_MAGIC_PROPERTIES( "_OB_HANDLE_REVOCATION_BLOCK.$", 0x20, true, 0xb69e7077bad9235e );                 
        SDK_FIXED_SIZE( handle_revocation_block_t, 0x20 );                 
    };                                                 
};
#include "magic/handle_revocation_block_t.end.hpp"
SDK_VERIFY( struct ob::handle_revocation_block_t, 0x20 );
