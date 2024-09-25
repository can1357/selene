#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getrootpagetablesize_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETROOTPAGETABLESIZE]
    // => WDK 10 (NV)
    //
    struct getrootpagetablesize_t            
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t number_of_pte;           //{ +0x0000    } | .NumberOfPte
        _m01 uint32_t physical_adapter_index;  //{ +0x0004    } | .PhysicalAdapterIndex
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETROOTPAGETABLESIZE.$", 0x0, false, 0x1dfe0e2d2117c2b6 );                       
        SDK_FIXED_SIZE( getrootpagetablesize_t, 0x8 );                       
    };                                       
};
#include "magic/getrootpagetablesize_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getrootpagetablesize_t, 0x8 );
