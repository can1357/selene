#pragma once
#include <sdkgen/support_library.hpp>
#include "oletls_prevent_rundown_mitigation_t.hpp"

#include "magic/push_tls_prevent_rundown_mitigation_t.start.hpp"
namespace win
{
    // [class PushTlsPreventRundownMitigation]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class push_tls_prevent_rundown_mitigation_t                               
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                    
        _m00 enum win::oletls_prevent_rundown_mitigation_t current_mitigation;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._currentMitigation
        _m01 enum win::oletls_prevent_rundown_mitigation_t saved_mitigation;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._savedMitigation
                                                                              
        SDK_MAGIC_PROPERTIES( "PushTlsPreventRundownMitigation.$", 0x8, true, 0x3329715340d9012 );                   
        SDK_FIXED_SIZE( push_tls_prevent_rundown_mitigation_t, 0x8 );                   
    };                                                                        
};
#include "magic/push_tls_prevent_rundown_mitigation_t.end.hpp"
SDK_VERIFY( class win::push_tls_prevent_rundown_mitigation_t, 0x8 );
