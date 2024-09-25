#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/devobj_extension_t.start.hpp"
namespace nt
{
    struct vpb_t;
    struct device_object_t;
    struct device_object_power_extension_t;

    // [struct _DEVOBJ_EXTENSION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct devobj_extension_t                                              
    {                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m00 int16_t                                     type;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t                                    size;               //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 struct nt::device_object_t*                 device_object;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceObject
        _m03 uint32_t                                    power_flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PowerFlags
        _m04 struct nt::device_object_power_extension_t* dope;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Dope
        _m05 uint32_t                                    extension_flags;    //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtensionFlags
        _m06 void*                                       device_node;        //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceNode
        _m07 struct nt::device_object_t*                 attached_to;        //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AttachedTo
        _m08 int32_t                                     start_io_count;     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .StartIoCount
        _m09 int32_t                                     start_io_key;       //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .StartIoKey
        _m10 uint32_t                                    start_io_flags;     //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .StartIoFlags
        _m11 struct nt::vpb_t*                           vpb;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .Vpb
        _m12 void*                                       dependency_node;    //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .DependencyNode
        _m13 void*                                       interrupt_context;  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .InterruptContext
        _m14 void*                                       verifier_context;   //{ +0x0068    +0x0060    +0x0068    +0x0068    +0x0068    } | .VerifierContext
                                                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                 
        _m15 int32_t                                     interrupt_count;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .InterruptCount
                                                                           
        SDK_MAGIC_PROPERTIES( "_DEVOBJ_EXTENSION.$", 0x70, true, 0x17f87bd49c7a395 );                  
        SDK_DYNAMIC_SIZE( devobj_extension_t );                            
    };                                                                     
};
#include "magic/devobj_extension_t.end.hpp"
