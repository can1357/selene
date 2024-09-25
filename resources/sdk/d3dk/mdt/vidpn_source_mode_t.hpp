#pragma once
#include <sdkgen/support_library.hpp>
#include "text_rendering_format_t.hpp"
#include "vidpn_source_mode_type_t.hpp"
#include "graphics_rendering_format_t.hpp"

#include "magic/vidpn_source_mode_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_SOURCE_MODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_source_mode_t                                                 
    {                                                                          
        union u0_format_t                                                      
        {                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
            //                                                                 
            _m02 struct d3dk::mdt::graphics_rendering_format_t graphics;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Graphics
            _m03 enum d3dk::mdt::text_rendering_format_t       text;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Text
                                                                               
            SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_SOURCE_MODE.Format.$", 0x20, true, 0x5aa763adbb6e6016 );                
            SDK_FIXED_SIZE( u0_format_t, 0x20 );                               
        };                                                                     
                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                                                     
        _m00 uint32_t                                                   id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 enum d3dk::mdt::vidpn_source_mode_type_t                   type;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m04 u0_format_t                                                format;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Format
                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_SOURCE_MODE.$", 0x28, true, 0xe5d7580d5e8a5eb1 );       
        SDK_FIXED_SIZE( vidpn_source_mode_t, 0x28 );                           
    };                                                                         
};
#include "magic/vidpn_source_mode_t.end.hpp"
SDK_VERIFY( union d3dk::mdt::vidpn_source_mode_t::u0_format_t, 0x20 );
SDK_VERIFY( struct d3dk::mdt::vidpn_source_mode_t, 0x28 );
