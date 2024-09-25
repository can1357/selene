#pragma once
#include <sdkgen/support_library.hpp>
#include "dispatcher_header_t.hpp"
#include "../rtl/balanced_node_t.hpp"

#include "magic/ktimer2_t.start.hpp"
namespace nt
{
    struct ktimer2_t;

    // [struct _KTIMER2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ktimer2_t                                                         
    {                                                                        
        using callback_t = sdk::function<void(struct nt::ktimer2_t*, void*)>*;                     
                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m00 struct nt::dispatcher_header_t             header;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<struct rtl::balanced_node_t, 2> rb_nodes;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RbNodes
        _m02 nt::list_entry_t                           list_entry;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ListEntry
        _m03 sdk::array<uint64_t, 2>                    due_time;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DueTime
        _m04 int64_t                                    period;                //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Period
        _m05 callback_t                                 callback;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Callback
        _m06 void*                                      callback_context;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CallbackContext
        _m07 sdk::function<void(void*)>*                disable_callback;      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .DisableCallback
        _m08 void*                                      disable_context;       //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .DisableContext
        _m09 uint8_t                                    absolute_system_time;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .AbsoluteSystemTime
        _m10 uint8_t                                    type_flags;            //{ +0x0081    +0x0081    +0x0081    +0x0081    } | .TypeFlags
        _m11 uint1_t                                    idle_resilient;        //{ +0x0081@1  +0x0081@1  +0x0081@1  +0x0081@1  } | .IdleResilient
        _m12 uint1_t                                    high_resolution;       //{ +0x0081@2  +0x0081@2  +0x0081@2  +0x0081@2  } | .HighResolution
        _m13 uint1_t                                    no_wake;               //{ +0x0081@3  +0x0081@3  +0x0081@3  +0x0081@3  } | .NoWake
        _m14 sdk::array<uint8_t, 2>                     collection_index;      //{ +0x0082    +0x0082    +0x0082    +0x0082    } | .CollectionIndex
                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                   
        _m15 uint1_t                                    pseudo_high_res;       //{ +0x0081@4  +0x0081@4  +0x0081@4  } | .PseudoHighRes
                                                                             
        SDK_MAGIC_PROPERTIES( "_KTIMER2.$", 0x88, true, 0xb09965e3ac05953f );                     
        SDK_FIXED_SIZE( ktimer2_t, 0x88 );                                   
    };                                                                       
};
#include "magic/ktimer2_t.end.hpp"
SDK_VERIFY( struct nt::ktimer2_t, 0x88 );
