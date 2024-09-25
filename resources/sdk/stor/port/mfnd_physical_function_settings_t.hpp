#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_qos_t.hpp"

#include "magic/mfnd_physical_function_settings_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_PHYSICAL_FUNCTION_SETTINGS]
    // => Windows 11
    //
    struct mfnd_physical_function_settings_t                                
    {                                                                       
        // Windows 11                                                       
        //                                                                  
        _m00 uint16_t                      version;                           //{ +0x0000    } | .Version
        _m01 uint16_t                      size_in_bytes;                     //{ +0x0002    } | .SizeInBytes
        _m02 uint16_t                      flags;                             //{ +0x0004    } | .Flags
        _m03 uint16_t                      io_queue_pair_count;               //{ +0x0006    } | .IoQueuePairCount
        _m04 uint16_t                      interrupt_count;                   //{ +0x0008    } | .InterruptCount
        _m05 uint16_t                      namespace_count;                   //{ +0x000a    } | .NamespaceCount
        _m06 uint32_t                      ns1_storage_provision_unit_count;  //{ +0x0010    } | .NS1StorageProvisionUnitCount
        _m07 uint32_t                      ns2_storage_provision_unit_count;  //{ +0x0014    } | .NS2StorageProvisionUnitCount
        _m08 uint32_t                      ns3_storage_provision_unit_count;  //{ +0x0018    } | .NS3StorageProvisionUnitCount
        _m09 uint32_t                      ns4_storage_provision_unit_count;  //{ +0x001c    } | .NS4StorageProvisionUnitCount
        _m10 struct stor::port::mfnd_qos_t qo_s;                              //{ +0x0020    } | .QoS
                                                                            
        SDK_MAGIC_PROPERTIES( "_MFND_PHYSICAL_FUNCTION_SETTINGS.$", 0x0, false, 0x68c663ca2ed21748 );                                 
        SDK_FIXED_SIZE( mfnd_physical_function_settings_t, 0x98 );                                 
    };                                                                      
};
#include "magic/mfnd_physical_function_settings_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_physical_function_settings_t, 0x98 );
