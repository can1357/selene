#pragma once
#include <sdkgen/support_library.hpp>

namespace d3dk::mdt { struct palettedata_t; }

#include "magic/setpalette_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETPALETTE]
    // => WDK 10 (NV)
    //
    struct setpalette_t                                        
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 uint32_t                         vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t                         first_entry;       //{ +0x0004    } | .FirstEntry
        _m02 uint32_t                         num_entries;       //{ +0x0008    } | .NumEntries
        _m03 struct d3dk::mdt::palettedata_t* p_lookup_table;    //{ +0x0010    } | .pLookupTable
                                                               
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETPALETTE.$", 0x0, false, 0xb1e532b9ba462dc2 );                 
        SDK_FIXED_SIZE( setpalette_t, 0x18 );                  
    };                                                         
};
#include "magic/setpalette_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setpalette_t, 0x18 );
