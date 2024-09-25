#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../nt/processor_number_t.hpp"

#include "magic/receive_scale_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_RECEIVE_SCALE_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct receive_scale_parameters_t                                 
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                            
        _m00 struct ndis::object_header_t  header;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint16_t                      flags;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint16_t                      base_cpu_number;             //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .BaseCpuNumber
        _m03 uint32_t                      hash_information;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashInformation
        _m04 uint16_t                      indirection_table_size;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IndirectionTableSize
        _m05 uint32_t                      indirection_table_offset;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IndirectionTableOffset
        _m06 uint16_t                      hash_secret_key_size;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .HashSecretKeySize
        _m07 uint32_t                      hash_secret_key_offset;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HashSecretKeyOffset
        _m08 uint32_t                      processor_masks_offset;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ProcessorMasksOffset
        _m09 uint32_t                      number_of_processor_masks;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NumberOfProcessorMasks
        _m10 uint32_t                      processor_masks_entry_size;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ProcessorMasksEntrySize
        _m11 struct nt::processor_number_t default_processor_number;    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DefaultProcessorNumber
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_RECEIVE_SCALE_PARAMETERS.$", 0x2c, true, 0xb78576d8558b3edd );                           
        SDK_FIXED_SIZE( receive_scale_parameters_t, 0x2c );                           
    };                                                                
};
#include "magic/receive_scale_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::receive_scale_parameters_t, 0x2c );
