#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/balanced_node_t.hpp"

namespace nt { struct aweinfo_t;      }
namespace nt { struct control_area_t; }
namespace nt { struct mmvad_short_t;  }

#include "magic/physical_view_t.start.hpp"
namespace mi
{
    // [struct _MI_PHYSICAL_VIEW]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct physical_view_t                              
    {                                                   
        // Windows 10 v2004, Windows 10 v20H2               
        //                                              
        _m00 struct rtl::balanced_node_t physical_node;   //{ +0x0000    +0x0000    } | .PhysicalNode
        _m01 struct nt::mmvad_short_t*   vad;             //{ +0x0018    +0x0018    } | .Vad
        _m02 struct nt::aweinfo_t*       awe_info;        //{ +0x0020    +0x0020    } | .AweInfo
        _m03 uint2_t                     view_page_size;  //{ +0x0028@0  +0x0028@0  } | .ViewPageSize
        _m04 struct nt::control_area_t*  control_area;    //{ +0x0028    +0x0028    } | .ControlArea
                                                        
        SDK_MAGIC_PROPERTIES( "_MI_PHYSICAL_VIEW.$", 0x30, true, 0x5fc40ac24336690d );               
        SDK_FIXED_SIZE( physical_view_t, 0x30 );               
    };                                                  
};
#include "magic/physical_view_t.end.hpp"
SDK_VERIFY( struct mi::physical_view_t, 0x30 );
