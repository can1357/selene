#pragma once
#include <sdkgen/support_library.hpp>

namespace ob { struct handle_revocation_block_t; }

#include "magic/handle_revocation_info_t.start.hpp"
namespace nt
{
    // [struct _HANDLE_REVOCATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_revocation_info_t                                        
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                 
        _m00 nt::list_entry_t                      list_entry;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 struct ob::handle_revocation_block_t* revocation_block;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RevocationBlock
        _m02 uint8_t                               allow_handle_revocation;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AllowHandleRevocation
                                                                           
        SDK_MAGIC_PROPERTIES( "_HANDLE_REVOCATION_INFO.$", 0x20, true, 0x8114370c961fa94a );                        
        SDK_FIXED_SIZE( handle_revocation_info_t, 0x20 );                        
    };                                                                     
};
#include "magic/handle_revocation_info_t.end.hpp"
SDK_VERIFY( struct nt::handle_revocation_info_t, 0x20 );
