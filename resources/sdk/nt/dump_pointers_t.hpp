#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dump_pointers_t.start.hpp"
namespace nt
{
    struct adapter_object_t;

    // [struct _DUMP_POINTERS]
    // => WDK 10 (NV)
    //
    struct dump_pointers_t                                        
    {                                                             
        // WDK 10                                                 
        //                                                        
        _m00 struct nt::adapter_object_t* adapter_object;           //{ +0x0000    } | .AdapterObject
        _m01 void*                        mapped_register_base;     //{ +0x0008    } | .MappedRegisterBase
        _m02 void*                        dump_data;                //{ +0x0010    } | .DumpData
        _m03 void*                        common_buffer_va;         //{ +0x0018    } | .CommonBufferVa
        _m04 int64_t                      common_buffer_pa;         //{ +0x0020    } | .CommonBufferPa
        _m05 uint32_t                     common_buffer_size;       //{ +0x0028    } | .CommonBufferSize
        _m06 uint8_t                      allocate_common_buffers;  //{ +0x002c    } | .AllocateCommonBuffers
        _m07 uint8_t                      use_disk_dump;            //{ +0x002d    } | .UseDiskDump
        _m08 void*                        device_object;            //{ +0x0030    } | .DeviceObject
                                                                  
        SDK_NONVOL_PROPERTIES( "_DUMP_POINTERS.$", 0x0, false, 0x7ebfbfbe0a9c6a9c );                        
        SDK_FIXED_SIZE( dump_pointers_t, 0x38 );                        
    };                                                            
};
#include "magic/dump_pointers_t.end.hpp"
SDK_VERIFY( struct nt::dump_pointers_t, 0x38 );
