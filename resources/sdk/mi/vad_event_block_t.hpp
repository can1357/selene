#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kgate_t.hpp"
#include "physical_view_t.hpp"
#include "../rtl/bitmap_ex_t.hpp"
#include "largepage_vad_info_t.hpp"
#include "sub64k_free_ranges_t.hpp"
#include "../nt/mmaddress_list_t.hpp"
#include "largepage_image_info_t.hpp"

namespace nt { struct ethread_t;          }
namespace nt { struct mminpage_support_t; }
namespace nt { struct mmvad_short_t;      }

#include "magic/vad_event_block_t.start.hpp"
namespace mi
{
    struct vad_event_block_t;

    // [struct _MI_VAD_EVENT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct vad_event_block_t                                 
    {                                                        
        using large_page_t = sdk::variant<struct mi::largepage_image_info_t, struct mi::largepage_vad_info_t>;                
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                
        //                                                   
        _m00 struct mi::vad_event_block_t*   next;             //{ +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct nt::kgate_t              gate;             //{ +0x0010    +0x0008    +0x0008    } | .Gate
        _m02 struct nt::mmaddress_list_t     secure_info;      //{ +0x0010    +0x0008    +0x0008    } | .SecureInfo
        _m03 struct rtl::bitmap_ex_t         bit_map;          //{ +0x0010    +0x0008    +0x0008    } | .BitMap
        _m04 struct nt::mminpage_support_t*  in_page_support;  //{ +0x0010    +0x0008    +0x0008    } | .InPageSupport
        _m05 large_page_t                    large_page;       //{ +0x0010    +0x0008    +0x0008    } | .LargePage
        _m06 struct nt::ethread_t*           creating_thread;  //{ +0x0010    +0x0008    +0x0008    } | .CreatingThread
        _m07 struct mi::sub64k_free_ranges_t peb_teb;          //{ +0x0010    +0x0008    +0x0008    } | .PebTeb
        _m08 uint32_t                        wait_reason;      //{ +0x0008    +0x0040    +0x0040    } | .WaitReason
                                                             
        // Windows 10 v2004, Windows 10 v20H2                
        //                                                   
        _m09 struct mi::physical_view_t      awe_view;         //{ +0x0008    +0x0008    } | .AweView
        _m10 struct nt::mmvad_short_t*       placeholder_vad;  //{ +0x0008    +0x0008    } | .PlaceholderVad
                                                             
        SDK_MAGIC_PROPERTIES( "_MI_VAD_EVENT_BLOCK.$", 0x48, true, 0xbd9bd260a088e72a );                
        SDK_DYNAMIC_SIZE( vad_event_block_t );                
    };                                                       
};
#include "magic/vad_event_block_t.end.hpp"
