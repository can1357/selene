#pragma once
#include <sdkgen/support_library.hpp>
#include "dump_entry_t.hpp"
#include "../../nt/guid_t.hpp"

#include "magic/dump_adapter_info_t.start.hpp"
namespace stor::port
{
    struct dump_driver_info_t;

    // [struct _DUMP_ADAPTER_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dump_adapter_info_t                                         
    {                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                             
        _m00 uint32_t                               version;             //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 struct stor::port::dump_entry_t        entry;               //{ +0x0008    +0x0008    +0x0008    } | .Entry
        _m02 struct nt::guid_t                      id;                  //{ +0x0018    +0x0018    +0x0018    } | .Id
        _m03 uint32_t                               flags;               //{ +0x0028    +0x0028    +0x0028    } | .Flags
        _m04 uint32_t                               context_size;        //{ +0x002c    +0x002c    +0x002c    } | .ContextSize
        _m05 void*                                  context;             //{ +0x0030    +0x0030    +0x0030    } | .Context
        _m06 struct stor::port::dump_driver_info_t* driver_info;         //{ +0x0038    +0x0038    +0x0038    } | .DriverInfo
        _m07 void*                                  dma_adapter_object;  //{ +0x0040    +0x0040    +0x0040    } | .DmaAdapterObject
        _m08 uint32_t                               common_buffer_size;  //{ +0x0048    +0x0048    +0x0048    } | .CommonBufferSize
        _m09 sdk::array<void*, 2>                   common_buffer_va;    //{ +0x0050    +0x0050    +0x0050    } | .CommonBufferVA
        _m10 sdk::array<int64_t, 2>                 common_buffer_pa;    //{ +0x0060    +0x0060    +0x0060    } | .CommonBufferPA
                                                                       
        SDK_MAGIC_PROPERTIES( "_DUMP_ADAPTER_INFO.$", 0x70, true, 0xb79542fcbbd91761 );                   
        SDK_FIXED_SIZE( dump_adapter_info_t, 0x70 );                   
    };                                                                 
};
#include "magic/dump_adapter_info_t.end.hpp"
SDK_VERIFY( struct stor::port::dump_adapter_info_t, 0x70 );
