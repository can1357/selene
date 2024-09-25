#pragma once
#include <sdkgen/support_library.hpp>
#include "deviceescape_type_t.hpp"

#include "magic/device_escape_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DEVICE_ESCAPE]
    // => WDK 10 (NV)
    //
    struct device_escape_t                                             
    {                                                                  
        struct u0_vid_pn_from_allocation_t                             
        {                                                              
            // WDK 10                                                  
            //                                                         
            _m01 uint32_t h_primary_allocation;                          //{ +0x0000    } | .hPrimaryAllocation
            _m02 uint32_t vid_pn_source_id;                              //{ +0x0004    } | .VidPnSourceId
                                                                       
            SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICE_ESCAPE.VidPnFromAllocation.$", 0x0, false, 0x3fb43ec832de50f5 );                                            
            SDK_FIXED_SIZE( u0_vid_pn_from_allocation_t, 0x8 );                                            
        };                                                             
                                                                       
        // WDK 10                                                      
        //                                                             
        _m00 enum d3dk::mt::deviceescape_type_t type;                    //{ +0x0000    } | .Type
        _m03 u0_vid_pn_from_allocation_t        vid_pn_from_allocation;  //{ +0x0004    } | .VidPnFromAllocation
                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DEVICE_ESCAPE.$", 0x0, false, 0xf561ffc227b95bd2 );                       
        SDK_FIXED_SIZE( device_escape_t, 0xc );                        
    };                                                                 
};
#include "magic/device_escape_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::device_escape_t::u0_vid_pn_from_allocation_t, 0x8 );
SDK_VERIFY( struct d3dk::mt::device_escape_t, 0xc );
