#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_init_info_vbs_basic_t.start.hpp"
namespace win
{
    // [struct _ENCLAVE_INIT_INFO_VBS_BASIC]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_init_info_vbs_basic_t                   
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 sdk::array<uint8_t, 16> family_id;              //{ +0x0000    +0x0000    +0x0000    } | .FamilyId
        _m01 sdk::array<uint8_t, 16> image_id;               //{ +0x0010    +0x0010    +0x0010    } | .ImageId
        _m02 uint64_t                enclave_size;           //{ +0x0020    +0x0020    +0x0020    } | .EnclaveSize
        _m03 uint32_t                enclave_svn;            //{ +0x0028    +0x0028    +0x0028    } | .EnclaveSvn
        _m04 void*                   signature_info_handle;  //{ +0x0030    +0x0030    +0x0030    } | .SignatureInfoHandle
                                                           
        SDK_MAGIC_PROPERTIES( "_ENCLAVE_INIT_INFO_VBS_BASIC.$", 0x38, true, 0xb675982b532f4293 );                      
        SDK_FIXED_SIZE( enclave_init_info_vbs_basic_t, 0x38 );                      
    };                                                     
};
#include "magic/enclave_init_info_vbs_basic_t.end.hpp"
SDK_VERIFY( struct win::enclave_init_info_vbs_basic_t, 0x38 );
