#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/unmarshaler_clsid_info_t.start.hpp"
namespace win
{
    // [class UnmarshalerCLSIDInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class unmarshaler_clsid_info_t                                    
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                            
        _m00 const struct nt::guid_t clsid;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._clsid
        _m01 bool                    b_checked_system_trusted;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._bCheckedSystemTrusted
        _m02 bool                    b_is_system_trusted;               //{ +0x0011    +0x0011    +0x0011    +0x0011    } | ._bIsSystemTrusted
        _m03 bool                    b_checked_catid_marshaler;         //{ +0x0012    +0x0012    +0x0012    +0x0012    } | ._bCheckedCATID_MARSHALER
        _m04 bool                    b_has_catid_marshaler;             //{ +0x0013    +0x0013    +0x0013    +0x0013    } | ._bHasCATID_MARSHALER
        _m05 bool                    b_checked_is_per_process_allowed;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._bCheckedIsPerProcessAllowed
        _m06 bool                    b_is_per_process_allowed;          //{ +0x0015    +0x0015    +0x0015    +0x0015    } | ._bIsPerProcessAllowed
        _m07 bool                    b_needs_memoization;               //{ +0x0016    +0x0016    +0x0016    +0x0016    } | ._bNeedsMemoization
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                            
        _m08 bool                    reported_to_telemetry;             //{ +0x0017    +0x0017    +0x0017    } | ._reportedToTelemetry
                                                                      
        SDK_MAGIC_PROPERTIES( "UnmarshalerCLSIDInfo.$", 0x18, true, 0x3601bd262c670047 );                                 
        SDK_FIXED_SIZE( unmarshaler_clsid_info_t, 0x18 );                                 
    };                                                                
};
#include "magic/unmarshaler_clsid_info_t.end.hpp"
SDK_VERIFY( class win::unmarshaler_clsid_info_t, 0x18 );
