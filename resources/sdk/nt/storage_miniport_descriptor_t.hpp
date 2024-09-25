#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_port_code_set_t.hpp"

#include "magic/storage_miniport_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_MINIPORT_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_miniport_descriptor_t                              
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                         version;                  //{ +0x0000    } | .Version
        _m01 uint32_t                         size;                     //{ +0x0004    } | .Size
        _m02 enum nt::storage_port_code_set_t portdriver;               //{ +0x0008    } | .Portdriver
        _m03 uint8_t                          lun_reset_supported;      //{ +0x000c    } | .LUNResetSupported
        _m04 uint8_t                          target_reset_supported;   //{ +0x000d    } | .TargetResetSupported
        _m05 uint16_t                         io_timeout_value;         //{ +0x000e    } | .IoTimeoutValue
        _m06 uint8_t                          extra_io_info_supported;  //{ +0x0010    } | .ExtraIoInfoSupported
                                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_MINIPORT_DESCRIPTOR.$", 0x0, false, 0x703bd9325d8fa0fc );                        
        SDK_FIXED_SIZE( storage_miniport_descriptor_t, 0x18 );                        
    };                                                                
};
#include "magic/storage_miniport_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_miniport_descriptor_t, 0x18 );
