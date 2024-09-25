#pragma once
#include <sdkgen/support_library.hpp>
#include "child_device_type_t.hpp"
#include "child_capabilities_t.hpp"

#include "magic/child_descriptor_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CHILD_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct child_descriptor_t                                     
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 enum dxgk::child_device_type_t    child_device_type;   //{ +0x0000    } | .ChildDeviceType
        _m01 struct dxgk::child_capabilities_t child_capabilities;  //{ +0x0004    } | .ChildCapabilities
        _m02 uint32_t                          acpi_uid;            //{ +0x0014    } | .AcpiUid
        _m03 uint32_t                          child_uid;           //{ +0x0018    } | .ChildUid
                                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_CHILD_DESCRIPTOR.$", 0x0, false, 0xc9762d8ba9cfed54 );                   
        SDK_FIXED_SIZE( child_descriptor_t, 0x1c );                   
    };                                                            
};
#include "magic/child_descriptor_t.end.hpp"
SDK_VERIFY( struct dxgk::child_descriptor_t, 0x1c );
