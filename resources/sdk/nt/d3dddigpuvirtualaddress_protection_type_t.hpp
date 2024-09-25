#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dddigpuvirtualaddress_protection_type_t.start.hpp"
namespace nt
{
    // [struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE]
    // => WDK 10 (NV)
    //
    struct d3dddigpuvirtualaddress_protection_type_t
    {                                               
        // WDK 10                     
        //                            
        _m00 uint1_t  write;                          //{ +0x0000@0  } | .Write
        _m01 uint1_t  execute;                        //{ +0x0000@1  } | .Execute
        _m02 uint1_t  zero;                           //{ +0x0000@2  } | .Zero
        _m03 uint1_t  no_access;                      //{ +0x0000@3  } | .NoAccess
        _m04 uint1_t  system_use_only;                //{ +0x0000@4  } | .SystemUseOnly
        _m05 uint64_t value;                          //{ +0x0000    } | .Value
                                                    
        SDK_NONVOL_PROPERTIES( "_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE.$", 0x0, false, 0x16f6885ea21f7800 );                
        SDK_FIXED_SIZE( d3dddigpuvirtualaddress_protection_type_t, 0x8 );                
    };                                              
};
#include "magic/d3dddigpuvirtualaddress_protection_type_t.end.hpp"
SDK_VERIFY( struct nt::d3dddigpuvirtualaddress_protection_type_t, 0x8 );
