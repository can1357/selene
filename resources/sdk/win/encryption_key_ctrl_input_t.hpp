#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/encryption_key_ctrl_input_t.start.hpp"
namespace win
{
    // [struct _ENCRYPTION_KEY_CTRL_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct encryption_key_ctrl_input_t  
    {                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t header_size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HeaderSize
        _m01 uint32_t structure_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StructureSize
        _m02 uint16_t key_offset;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyOffset
        _m03 uint16_t key_size;           //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .KeySize
        _m04 uint32_t dpl_lock;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DplLock
        _m05 uint64_t dpl_user_id;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DplUserId
        _m06 uint64_t dpl_credential_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DplCredentialId
                                        
        SDK_NONVOL_PROPERTIES( "_ENCRYPTION_KEY_CTRL_INPUT.$", 0x20, true, 0x6882784e0805540a );                  
        SDK_FIXED_SIZE( encryption_key_ctrl_input_t, 0x20 );                  
    };                                  
};
#include "magic/encryption_key_ctrl_input_t.end.hpp"
SDK_VERIFY( struct win::encryption_key_ctrl_input_t, 0x20 );
