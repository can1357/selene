#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_create_info_vbs_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_CREATE_INFO_VBS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_create_info_vbs_t          
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint32_t                flags;     //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 sdk::array<uint8_t, 32> owner_id;  //{ +0x0004    +0x0004    +0x0004    } | .OwnerID
                                              
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_CREATE_INFO_VBS.$", 0x24, true, 0x142207f49a8d5b2a );         
        SDK_FIXED_SIZE( enclave_create_info_vbs_t, 0x24 );         
    };                                        
};
#include "magic/enclave_create_info_vbs_t.end.hpp"
SDK_VERIFY( struct win::enclave_create_info_vbs_t, 0x24 );
