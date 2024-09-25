#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf { struct wdfchildlist_t; }

#include "magic/child_list_scan_for_children_callback_t.start.hpp"
namespace fx
{
    // [struct FxChildListScanForChildrenCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct child_list_scan_for_children_callback_t            
    {                                                         
        using pfn_wdf_child_list_scan_for_children_t = sdk::function<void(struct wdf::wdfchildlist_t*)>*;         
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                    
        _m00 pfn_wdf_child_list_scan_for_children_t  m_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Method
                                                              
        SDK_MAGIC_PROPERTIES( "FxChildListScanForChildrenCallback.$", 0x8, true, 0x572aa4b41593a142 );         
        SDK_FIXED_SIZE( child_list_scan_for_children_callback_t, 0x8 );         
    };                                                        
};
#include "magic/child_list_scan_for_children_callback_t.end.hpp"
SDK_VERIFY( struct fx::child_list_scan_for_children_callback_t, 0x8 );
