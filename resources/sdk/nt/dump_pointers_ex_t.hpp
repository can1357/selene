#pragma once
#include <sdkgen/support_library.hpp>
#include "dump_pointers_version_t.hpp"

#include "magic/dump_pointers_ex_t.start.hpp"
namespace nt
{
    // [struct _DUMP_POINTERS_EX]
    // => WDK 10 (NV)
    //
    struct dump_pointers_ex_t                                                
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 struct nt::dump_pointers_version_t header;                        //{ +0x0000    } | .Header
        _m01 void*                              dump_data;                     //{ +0x0008    } | .DumpData
        _m02 void*                              common_buffer_va;              //{ +0x0010    } | .CommonBufferVa
        _m03 uint32_t                           common_buffer_size;            //{ +0x0018    } | .CommonBufferSize
        _m04 uint8_t                            allocate_common_buffers;       //{ +0x001c    } | .AllocateCommonBuffers
        _m05 void*                              device_object;                 //{ +0x0020    } | .DeviceObject
        _m06 void*                              driver_list;                   //{ +0x0028    } | .DriverList
        _m07 uint32_t                           dw_port_flags;                 //{ +0x0030    } | .dwPortFlags
        _m08 uint32_t                           max_device_dump_section_size;  //{ +0x0034    } | .MaxDeviceDumpSectionSize
        _m09 uint32_t                           max_device_dump_level;         //{ +0x0038    } | .MaxDeviceDumpLevel
        _m10 uint32_t                           max_transfer_size;             //{ +0x003c    } | .MaxTransferSize
        _m11 void*                              adapter_object;                //{ +0x0040    } | .AdapterObject
        _m12 void*                              mapped_register_base;          //{ +0x0048    } | .MappedRegisterBase
        _m13 uint8_t*                           device_ready;                  //{ +0x0050    } | .DeviceReady
        _m14 sdk::function<int32_t(void*)>*     dump_device_power_on;          //{ +0x0058    } | .DumpDevicePowerOn
        _m15 void*                              dump_device_power_on_context;  //{ +0x0060    } | .DumpDevicePowerOnContext
                                                                             
        SDK_NONVOL_PROPERTIES( "_DUMP_POINTERS_EX.$", 0x0, false, 0x640e477d1c3b1604 );                             
        SDK_FIXED_SIZE( dump_pointers_ex_t, 0x68 );                             
    };                                                                       
};
#include "magic/dump_pointers_ex_t.end.hpp"
SDK_VERIFY( struct nt::dump_pointers_ex_t, 0x68 );
