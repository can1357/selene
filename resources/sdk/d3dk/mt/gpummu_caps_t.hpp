#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpummu_caps_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GPUMMU_CAPS]
    // => WDK 10 (NV)
    //
    struct gpummu_caps_t                                                            
    {                                                                               
        union u0_flags_t                                                            
        {                                                                           
            // WDK 10                                                               
            //                                                                      
            _m00 uint1_t  read_only_memory_supported;                                 //{ +0x0000@0  } | .ReadOnlyMemorySupported
            _m01 uint1_t  no_execute_memory_supported;                                //{ +0x0000@1  } | .NoExecuteMemorySupported
            _m02 uint1_t  cache_coherent_memory_supported;                            //{ +0x0000@2  } | .CacheCoherentMemorySupported
            _m03 uint32_t value;                                                      //{ +0x0000    } | .Value
                                                                                    
            SDK_NONVOL_PROPERTIES( "_D3DKMT_GPUMMU_CAPS.Flags.$", 0x0, false, 0xcc01247f64112124 );                                                          
            SDK_FIXED_SIZE( u0_flags_t, 0x4 );                                                          
        };                                                                          
                                                                                    
        // WDK 10                                                                   
        //                                                                          
        _m04 u0_flags_t                                   flags;                      //{ +0x0000    } | .Flags
        _m05 uint32_t                                     virtual_address_bit_count;  //{ +0x0004    } | .VirtualAddressBitCount
                                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GPUMMU_CAPS.$", 0x0, false, 0x5f96288ef91a7d15 );                          
        SDK_FIXED_SIZE( gpummu_caps_t, 0x8 );                                       
    };                                                                              
};
#include "magic/gpummu_caps_t.end.hpp"
SDK_VERIFY( union d3dk::mt::gpummu_caps_t::u0_flags_t, 0x4 );
SDK_VERIFY( struct d3dk::mt::gpummu_caps_t, 0x8 );
