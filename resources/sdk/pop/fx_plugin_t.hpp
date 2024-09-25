#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kqueue_t.hpp"
#include "fx_work_pool_t.hpp"
#include "fx_work_order_t.hpp"

namespace nt { struct pephandle_t; }

#include "magic/fx_plugin_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_PLUGIN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_plugin_t                                                                
    {                                                                                 
        using accept_processor_notification_t = sdk::function<uint8_t(struct nt::pephandle_t*, uint32_t, void*)>*;                              
                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                            
        _m00 nt::list_entry_t                           link;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 uint32_t                                   version;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Version
        _m02 uint64_t                                   flags;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Flags
        _m03 struct nt::kqueue_t                        work_queue;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WorkQueue
        _m04 sdk::function<uint8_t(uint32_t, void*)>*   accept_device_notification;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .AcceptDeviceNotification
        _m05 accept_processor_notification_t            accept_processor_notification;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .AcceptProcessorNotification
        _m06 sdk::function<uint8_t(uint32_t, void*)>*   accept_acpi_notification;       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .AcceptAcpiNotification
                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                            
        _m07 struct pop::fx_work_pool_t                 plugin_work_pool;               //{ +0x0078    +0x0078    +0x0078    } | .PluginWorkPool
                                                                                      
        // Windows 10 v1607                                                           
        //                                                                            
        _m08 uint32_t                                   work_order_count;               //{ +0x0078    } | .WorkOrderCount
        _m09 sdk::array<struct pop::fx_work_order_t, 1> work_orders;                    //{ +0x0080    } | .WorkOrders
                                                                                      
        SDK_MAGIC_PROPERTIES( "_POP_FX_PLUGIN.$", 0x1a8, true, 0xac368ada6df50bb );                              
        SDK_DYNAMIC_SIZE( fx_plugin_t );                                              
    };                                                                                
};
#include "magic/fx_plugin_t.end.hpp"
