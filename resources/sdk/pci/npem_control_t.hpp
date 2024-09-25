#pragma once
#include <sdkgen/support_library.hpp>
#include "express_npem_capability_register_t.hpp"

#include "magic/npem_control_t.start.hpp"
namespace pci
{
    struct device_t;

    // [struct _PCI_NPEM_CONTROL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct npem_control_t                                                            
    {                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                           
        _m00 struct pci::device_t*                         device;                     //{ +0x0000    +0x0000    +0x0000    } | .Device
        _m01 union pci::express_npem_capability_register_t capability;                 //{ +0x0008    +0x0008    +0x0008    } | .Capability
        _m02 uint8_t                                       last_npem_command_pending;  //{ +0x000c    +0x000c    +0x000c    } | .LastNpemCommandPending
        _m03 uint64_t                                      last_npem_command_time;     //{ +0x0010    +0x0010    +0x0010    } | .LastNpemCommandTime
        _m04 uint64_t                                      lock;                       //{ +0x0018    +0x0018    +0x0018    } | .Lock
        _m05 uint32_t                                      ref_count;                  //{ +0x0020    +0x0020    +0x0020    } | .RefCount
                                                                                     
        SDK_MAGIC_PROPERTIES( "_PCI_NPEM_CONTROL.$", 0x28, true, 0xef90a1cf840038b5 );                          
        SDK_FIXED_SIZE( npem_control_t, 0x28 );                                      
    };                                                                               
};
#include "magic/npem_control_t.end.hpp"
SDK_VERIFY( struct pci::npem_control_t, 0x28 );
