#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gpupcaps_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUPCAPS]
    // => WDK 10 (NV)
    //
    struct gpupcaps_t                                      
    {                                                      
        union u0_caps_t                                    
        {                                                  
            // WDK 10                                      
            //                                             
            _m00 uint1_t  virtual_machine_hibernation;       //{ +0x0000@0  } | .VirtualMachineHibernation
            _m01 uint1_t  hot_driver_update;                 //{ +0x0000@1  } | .HotDriverUpdate
            _m02 uint32_t value;                             //{ +0x0000    } | .Value
                                                           
            SDK_NONVOL_PROPERTIES( "_DXGK_GPUPCAPS.Caps.$", 0x0, false, 0xe6a65f3d62f6cc93 );                                 
            SDK_FIXED_SIZE( u0_caps_t, 0x4 );                                 
        };                                                 
                                                           
        // WDK 10                                          
        //                                                 
        _m03 u0_caps_t                                caps;  //{ +0x0000    } | .Caps
                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUPCAPS.$", 0x0, false, 0xa27949751967b251 );     
        SDK_FIXED_SIZE( gpupcaps_t, 0x4 );                 
    };                                                     
};
#include "magic/gpupcaps_t.end.hpp"
SDK_VERIFY( union dxgk::gpupcaps_t::u0_caps_t, 0x4 );
SDK_VERIFY( struct dxgk::gpupcaps_t, 0x4 );
