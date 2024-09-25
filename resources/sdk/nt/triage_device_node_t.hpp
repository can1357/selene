#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_device_node_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;
    struct triage_device_node_t;
    struct triage_pop_fx_device_t;

    // [struct _TRIAGE_DEVICE_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_device_node_t                                        
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                             
        _m00 struct nt::triage_device_node_t*   sibling;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sibling
        _m01 struct nt::triage_device_node_t*   child;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Child
        _m02 struct nt::triage_device_node_t*   parent;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parent
        _m03 struct nt::triage_device_node_t*   last_child;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastChild
        _m04 struct nt::device_object_t*        physical_device_object;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PhysicalDeviceObject
        _m05 nt::unicode_view                   instance_path;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InstancePath
        _m06 nt::unicode_view                   service_name;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ServiceName
        _m07 struct nt::irp_t*                  pending_irp;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PendingIrp
        _m08 struct nt::triage_pop_fx_device_t* fx_device;               //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FxDevice
                                                                       
        SDK_MAGIC_PROPERTIES( "_TRIAGE_DEVICE_NODE.$", 0x58, true, 0x4dd8e4045d75c209 );                       
        SDK_FIXED_SIZE( triage_device_node_t, 0x58 );                       
    };                                                                 
};
#include "magic/triage_device_node_t.end.hpp"
SDK_VERIFY( struct nt::triage_device_node_t, 0x58 );
