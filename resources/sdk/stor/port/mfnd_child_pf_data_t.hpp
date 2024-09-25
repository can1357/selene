#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_qos_t.hpp"

#include "magic/mfnd_child_pf_data_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_CHILD_PF_DATA]
    // => Windows 11
    //
    struct mfnd_child_pf_data_t                                            
    {                                                                      
        // Windows 11                                                      
        //                                                                 
        _m00 uint32_t                      version;                          //{ +0x0000    } | .Version
        _m01 uint32_t                      size;                             //{ +0x0004    } | .Size
        _m02 uint16_t                      child_controller_id;              //{ +0x0008    } | .ChildControllerId
        _m03 sdk::array<uint8_t, 26>       serial_number;                    //{ +0x000a    } | .SerialNumber
        _m04 uint32_t                      flags;                            //{ +0x0024    } | .Flags
        _m05 uint32_t                      child_controller_state;           //{ +0x0028    } | .ChildControllerState
        _m06 uint32_t                      name_space_count;                 //{ +0x002c    } | .NameSpaceCount
        _m07 uint32_t                      name_space1_id;                   //{ +0x0034    } | .NameSpace1Id
        _m08 uint32_t                      name_space1_total_storage_bytes;  //{ +0x0038    } | .NameSpace1TotalStorageBytes
        _m09 uint32_t                      name_space2_id;                   //{ +0x003c    } | .NameSpace2Id
        _m10 uint32_t                      name_space2_total_storage_bytes;  //{ +0x0040    } | .NameSpace2TotalStorageBytes
        _m11 uint32_t                      name_space3_id;                   //{ +0x0044    } | .NameSpace3Id
        _m12 uint32_t                      name_space3_total_storage_bytes;  //{ +0x0048    } | .NameSpace3TotalStorageBytes
        _m13 uint32_t                      name_space4_id;                   //{ +0x004c    } | .NameSpace4Id
        _m14 uint32_t                      name_space4_total_storage_bytes;  //{ +0x0050    } | .NameSpace4TotalStorageBytes
        _m15 uint32_t                      io_queue_pair_count;              //{ +0x0054    } | .IoQueuePairCount
        _m16 uint32_t                      msi_message_count;                //{ +0x0058    } | .MsiMessageCount
        _m17 struct stor::port::mfnd_qos_t qo_s;                             //{ +0x005c    } | .QoS
                                                                           
        SDK_MAGIC_PROPERTIES( "_MFND_CHILD_PF_DATA.$", 0x0, false, 0xa7622f4054619daa );                                
        SDK_FIXED_SIZE( mfnd_child_pf_data_t, 0x94 );                                
    };                                                                     
};
#include "magic/mfnd_child_pf_data_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_child_pf_data_t, 0x94 );
