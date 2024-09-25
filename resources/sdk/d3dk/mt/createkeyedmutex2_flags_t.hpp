#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createkeyedmutex2_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS]
    // => WDK 10 (NV)
    //
    struct createkeyedmutex2_flags_t      
    {                                     
        // WDK 10                         
        //                                
        _m00 uint1_t  nt_security_sharing;  //{ +0x0000@0  } | .NtSecuritySharing
        _m01 uint32_t value;                //{ +0x0000    } | .Value
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEKEYEDMUTEX2_FLAGS.$", 0x0, false, 0xd303dcae86880003 );                    
        SDK_FIXED_SIZE( createkeyedmutex2_flags_t, 0x4 );                    
    };                                    
};
#include "magic/createkeyedmutex2_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createkeyedmutex2_flags_t, 0x4 );
