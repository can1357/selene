#pragma once
#include <sdkgen/support_library.hpp>
#include "monitorlinkinfo_usagehints_t.hpp"
#include "monitorlinkinfo_capabilities_t.hpp"
#include "../d3dk/mdt/wire_format_and_preference_t.hpp"

#include "magic/monitorlinkinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MONITORLINKINFO]
    // => WDK 10 (NV)
    //
    struct monitorlinkinfo_t                                                 
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 union dxgk::monitorlinkinfo_usagehints_t      usage_hints;        //{ +0x0000    } | .UsageHints
        _m01 union dxgk::monitorlinkinfo_capabilities_t    capabilities;       //{ +0x0004    } | .Capabilities
        _m02 union d3dk::mdt::wire_format_and_preference_t dithering_support;  //{ +0x0008    } | .DitheringSupport
                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_MONITORLINKINFO.$", 0x0, false, 0xdead9bdb8bdc8ec9 );                  
        SDK_FIXED_SIZE( monitorlinkinfo_t, 0xc );                            
    };                                                                       
};
#include "magic/monitorlinkinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::monitorlinkinfo_t, 0xc );
