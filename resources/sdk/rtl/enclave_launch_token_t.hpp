#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enclave_launch_token_t.start.hpp"
namespace rtl
{
    // [struct _RTL_ENCLAVE_LAUNCH_TOKEN]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_launch_token_t                 
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                        
        _m00 sdk::array<uint8_t, 32> measurement;   //{ +0x0000    +0x0000    +0x0000    } | .Measurement
        _m01 sdk::array<uint8_t, 32> author_id;     //{ +0x0020    +0x0020    +0x0020    } | .AuthorId
        _m02 sdk::array<uint8_t, 16> family_id;     //{ +0x0040    +0x0040    +0x0040    } | .FamilyId
        _m03 sdk::array<uint8_t, 16> image_id;      //{ +0x0050    +0x0050    +0x0050    } | .ImageId
        _m04 uint64_t                enclave_size;  //{ +0x0060    +0x0060    +0x0060    } | .EnclaveSize
        _m05 uint32_t                enclave_svn;   //{ +0x0068    +0x0068    +0x0068    } | .EnclaveSvn
        _m06 uint32_t                policy_flags;  //{ +0x006c    +0x006c    +0x006c    } | .PolicyFlags
                                                  
        SDK_MAGIC_PROPERTIES( "_RTL_ENCLAVE_LAUNCH_TOKEN.$", 0x70, true, 0x549378e54c5ac58 );             
        SDK_FIXED_SIZE( enclave_launch_token_t, 0x70 );             
    };                                            
};
#include "magic/enclave_launch_token_t.end.hpp"
SDK_VERIFY( struct rtl::enclave_launch_token_t, 0x70 );
