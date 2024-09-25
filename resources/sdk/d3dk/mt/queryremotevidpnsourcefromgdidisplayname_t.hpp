#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryremotevidpnsourcefromgdidisplayname_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME]
    // => WDK 10 (NV)
    //
    struct queryremotevidpnsourcefromgdidisplayname_t 
    {                                                 
        // WDK 10                                     
        //                                            
        _m00 sdk::array<wchar_t, 32> device_name;       //{ +0x0000    } | .DeviceName
        _m01 uint32_t                vid_pn_source_id;  //{ +0x0040    } | .VidPnSourceId
                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME.$", 0x0, false, 0xa9e2d29ac241bbdc );                 
        SDK_FIXED_SIZE( queryremotevidpnsourcefromgdidisplayname_t, 0x44 );                 
    };                                                
};
#include "magic/queryremotevidpnsourcefromgdidisplayname_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryremotevidpnsourcefromgdidisplayname_t, 0x44 );
