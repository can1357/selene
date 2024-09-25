#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/retrieval_pointers_buffer_t.start.hpp"
namespace win
{
    // [struct RETRIEVAL_POINTERS_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct retrieval_pointers_buffer_t                
    {                                                 
        struct u0_extents_t                           
        {                                             
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
            //                                        
            _m02 int64_t next_vcn;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextVcn
            _m03 int64_t lcn;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Lcn
                                                      
            SDK_NONVOL_PROPERTIES( "RETRIEVAL_POINTERS_BUFFER.Extents.$", 0x10, true, 0xec26e51ad3456925 );                      
            SDK_FIXED_SIZE( u0_extents_t, 0x10 );                      
        };                                            
                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                            
        _m00 uint32_t                    extent_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtentCount
        _m01 int64_t                     starting_vcn;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StartingVcn
        _m04 sdk::array<u0_extents_t, 1> extents;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Extents
                                                      
        SDK_NONVOL_PROPERTIES( "RETRIEVAL_POINTERS_BUFFER.$", 0x20, true, 0x775ce07720003220 );             
        SDK_FIXED_SIZE( retrieval_pointers_buffer_t, 0x20 );             
    };                                                
};
#include "magic/retrieval_pointers_buffer_t.end.hpp"
SDK_VERIFY( struct win::retrieval_pointers_buffer_t::u0_extents_t, 0x10 );
SDK_VERIFY( struct win::retrieval_pointers_buffer_t, 0x20 );
