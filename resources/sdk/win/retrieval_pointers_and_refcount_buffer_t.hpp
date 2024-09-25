#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/retrieval_pointers_and_refcount_buffer_t.start.hpp"
namespace win
{
    // [struct RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct retrieval_pointers_and_refcount_buffer_t    
    {                                                  
        struct u0_extents_t                            
        {                                              
            // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
            //                                         
            _m02 int64_t  next_vcn;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextVcn
            _m03 int64_t  lcn;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lcn
            _m04 uint32_t reference_count;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReferenceCount
                                                       
            SDK_NONVOL_PROPERTIES( "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.Extents.$", 0x18, true, 0x9bdf70ca3c0e5c33 );                             
            SDK_FIXED_SIZE( u0_extents_t, 0x18 );                             
        };                                             
                                                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 uint32_t                     extent_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExtentCount
        _m01 int64_t                      starting_vcn;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StartingVcn
        _m05 sdk::array<u0_extents_t, 1>  extents;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Extents
                                                       
        SDK_NONVOL_PROPERTIES( "RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER.$", 0x28, true, 0x3b027ef5e233b426 );             
        SDK_FIXED_SIZE( retrieval_pointers_and_refcount_buffer_t, 0x28 );             
    };                                                 
};
#include "magic/retrieval_pointers_and_refcount_buffer_t.end.hpp"
SDK_VERIFY( struct win::retrieval_pointers_and_refcount_buffer_t::u0_extents_t, 0x18 );
SDK_VERIFY( struct win::retrieval_pointers_and_refcount_buffer_t, 0x28 );
