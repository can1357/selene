#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/d3dgpu_physical_address_t.hpp"

#include "magic/setrootpagetable_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETROOTPAGETABLE]
    // => WDK 10 (NV)
    //
    struct setrootpagetable_t                                 
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 void*                                h_context;    //{ +0x0000    } | .hContext
        _m01 struct nt::d3dgpu_physical_address_t address;      //{ +0x0008    } | .Address
        _m02 uint32_t                             num_entries;  //{ +0x0018    } | .NumEntries
                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETROOTPAGETABLE.$", 0x0, false, 0x3be50b95c1cffa2d );            
        SDK_FIXED_SIZE( setrootpagetable_t, 0x20 );            
    };                                                        
};
#include "magic/setrootpagetable_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setrootpagetable_t, 0x20 );
