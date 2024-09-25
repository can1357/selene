#pragma once
#include <sdkgen/support_library.hpp>
#include "port_configuration_information_t.hpp"

#include "magic/storport_dump_adapter_data_t.start.hpp"
namespace stor::port
{
    // [struct _STORPORT_DUMP_ADAPTER_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct storport_dump_adapter_data_t                                
    {                                                                  
        using config_info_t = struct stor::port::port_configuration_information_t;                           
                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                             
        _m00 uint32_t                       version;                     //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 void*                          adapter;                     //{ +0x0008    +0x0008    +0x0008    } | .Adapter
        _m02 uint8_t*                       power_on_ready;              //{ +0x0010    +0x0010    +0x0010    } | .PowerOnReady
        _m03 sdk::function<int32_t(void*)>* power_on_routine;            //{ +0x0018    +0x0018    +0x0018    } | .PowerOnRoutine
        _m04 void*                          power_on_context;            //{ +0x0020    +0x0020    +0x0020    } | .PowerOnContext
        _m05 uint32_t                       memory_block_size;           //{ +0x0028    +0x0028    +0x0028    } | .MemoryBlockSize
        _m06 void*                          memory_block;                //{ +0x0030    +0x0030    +0x0030    } | .MemoryBlock
        _m07 void*                          miniport_context;            //{ +0x0038    +0x0038    +0x0038    } | .MiniportContext
        _m08 config_info_t                  config_info;                 //{ +0x0040    +0x0040    +0x0040    } | .ConfigInfo
        _m09 void*                          mapped_address_list;         //{ +0x0120    +0x0120    +0x0120    } | .MappedAddressList
        _m10 uint16_t                       hiber_file_hybrid_priority;  //{ +0x0128    +0x0128    +0x0128    } | .HiberFileHybridPriority
        _m11 uint16_t                       flags;                       //{ +0x012a    +0x012a    +0x012a    } | .Flags
        _m12 void*                          dev_ext;                     //{ +0x0130    +0x0130    +0x0130    } | .DevExt
                                                                       
        SDK_MAGIC_PROPERTIES( "_STORPORT_DUMP_ADAPTER_DATA.$", 0x138, true, 0xdc3f952a10c71743 );                           
        SDK_FIXED_SIZE( storport_dump_adapter_data_t, 0x138 );                           
    };                                                                 
};
#include "magic/storport_dump_adapter_data_t.end.hpp"
SDK_VERIFY( struct stor::port::storport_dump_adapter_data_t, 0x138 );
