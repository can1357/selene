#pragma once
#include <sdkgen/support_library.hpp>
#include "ddi_mode_desc_t.hpp"

#include "magic/ddi_primary_desc_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_PRIMARY_DESC]
    // => WDK 10 (NV)
    //
    struct ddi_primary_desc_t                              
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 uint32_t                     flags;             //{ +0x0000    } | .Flags
        _m01 uint32_t                     vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 struct dxgi::ddi_mode_desc_t mode_desc;         //{ +0x0008    } | .ModeDesc
        _m03 uint32_t                     driver_flags;      //{ +0x0028    } | .DriverFlags
                                                           
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_PRIMARY_DESC.$", 0x0, false, 0x37d58eb6401493ef );                 
        SDK_FIXED_SIZE( ddi_primary_desc_t, 0x2c );                 
    };                                                     
};
#include "magic/ddi_primary_desc_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_primary_desc_t, 0x2c );
