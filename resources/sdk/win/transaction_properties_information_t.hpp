#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transaction_properties_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_PROPERTIES_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_properties_information_t        
    {                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               isolation_level;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IsolationLevel
        _m01 uint32_t               isolation_flags;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .IsolationFlags
        _m02 int64_t                timeout;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Timeout
        _m03 uint32_t               outcome;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Outcome
        _m04 uint32_t               description_length;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .DescriptionLength
        _m05 sdk::array<wchar_t, 1> description;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Description
                                                       
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_PROPERTIES_INFORMATION.$", 0x20, true, 0xa71637991966d53 );                   
        SDK_FIXED_SIZE( transaction_properties_information_t, 0x20 );                   
    };                                                 
};
#include "magic/transaction_properties_information_t.end.hpp"
SDK_VERIFY( struct win::transaction_properties_information_t, 0x20 );
