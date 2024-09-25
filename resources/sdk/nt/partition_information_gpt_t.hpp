#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/partition_information_gpt_t.start.hpp"
namespace nt
{
    // [struct _PARTITION_INFORMATION_GPT]
    // => WDK 10 (NV)
    //
    struct partition_information_gpt_t              
    {                                               
        // WDK 10                                   
        //                                          
        _m00 struct nt::guid_t       partition_type;  //{ +0x0000    } | .PartitionType
        _m01 struct nt::guid_t       partition_id;    //{ +0x0010    } | .PartitionId
        _m02 uint64_t                attributes;      //{ +0x0020    } | .Attributes
        _m03 sdk::array<wchar_t, 36> name;            //{ +0x0028    } | .Name
                                                    
        SDK_NONVOL_PROPERTIES( "_PARTITION_INFORMATION_GPT.$", 0x0, false, 0x8c779979b3f171e9 );               
        SDK_FIXED_SIZE( partition_information_gpt_t, 0x70 );               
    };                                              
};
#include "magic/partition_information_gpt_t.end.hpp"
SDK_VERIFY( struct nt::partition_information_gpt_t, 0x70 );
