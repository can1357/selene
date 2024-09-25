#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winnt_auth_identity_ex2_t.start.hpp"
namespace sec
{
    // [struct _SEC_WINNT_AUTH_IDENTITY_EX2]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct winnt_auth_identity_ex2_t            
    {                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t version;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t cb_header_length;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbHeaderLength
        _m02 uint32_t cb_structure_length;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbStructureLength
        _m03 uint32_t user_offset;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .UserOffset
        _m04 uint16_t user_length;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserLength
        _m05 uint32_t domain_offset;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DomainOffset
        _m06 uint16_t domain_length;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DomainLength
        _m07 uint32_t packed_credentials_offset;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PackedCredentialsOffset
        _m08 uint16_t packed_credentials_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PackedCredentialsLength
        _m09 uint32_t flags;                      //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Flags
        _m10 uint32_t package_list_offset;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PackageListOffset
        _m11 uint16_t package_list_length;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .PackageListLength
                                                
        SDK_NONVOL_PROPERTIES( "_SEC_WINNT_AUTH_IDENTITY_EX2.$", 0x30, true, 0xf6c7d1480ac20bd6 );                          
        SDK_FIXED_SIZE( winnt_auth_identity_ex2_t, 0x30 );                          
    };                                          
};
#include "magic/winnt_auth_identity_ex2_t.end.hpp"
SDK_VERIFY( struct sec::winnt_auth_identity_ex2_t, 0x30 );
