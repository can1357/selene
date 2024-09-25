#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ev_extra_cert_chain_policy_para_t.start.hpp"
namespace win
{
    // [struct _EV_EXTRA_CERT_CHAIN_POLICY_PARA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ev_extra_cert_chain_policy_para_t          
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t cb_size;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_root_program_qualifier_flags;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwRootProgramQualifierFlags
                                                      
        SDK_MAGIC_PROPERTIES( "_EV_EXTRA_CERT_CHAIN_POLICY_PARA.$", 0x8, true, 0x9a8656dc539b5192 );                                
        SDK_FIXED_SIZE( ev_extra_cert_chain_policy_para_t, 0x8 );                                
    };                                                
};
#include "magic/ev_extra_cert_chain_policy_para_t.end.hpp"
SDK_VERIFY( struct win::ev_extra_cert_chain_policy_para_t, 0x8 );
