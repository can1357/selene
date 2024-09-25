#pragma once
#include <sdkgen/support_library.hpp>
#include "large_mcb_t.hpp"

#include "magic/mcb_t.start.hpp"
namespace nt
{
    // [struct _MCB]
    // => WDK 10 (NV)
    //
    struct mcb_t                                                                    
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 struct nt::large_mcb_t dummy_field_that_sizes_this_structure_correctly;  //{ +0x0000    } | .DummyFieldThatSizesThisStructureCorrectly
                                                                                    
        SDK_NONVOL_PROPERTIES( "_MCB.$", 0x0, false, 0x128efa58c6d2fb19 );                                                
        SDK_FIXED_SIZE( mcb_t, 0x20 );                                                
    };                                                                              
};
#include "magic/mcb_t.end.hpp"
SDK_VERIFY( struct nt::mcb_t, 0x20 );
