#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scmsa_t.start.hpp"
namespace tag
{
    // [struct tagSCMSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scmsa_t                                     
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                             
        _m00 uint16_t                w_num_entries;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wNumEntries
        _m01 uint16_t                w_security_offset;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wSecurityOffset
        _m02 sdk::array<wchar_t, 62> awsz_string_array;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .awszStringArray
                                                       
        SDK_MAGIC_PROPERTIES( "tagSCMSA.$", 0x80, true, 0x5bd7f06cc84ff160 );                  
        SDK_FIXED_SIZE( scmsa_t, 0x80 );                  
    };                                                 
};
#include "magic/scmsa_t.end.hpp"
SDK_VERIFY( struct tag::scmsa_t, 0x80 );
