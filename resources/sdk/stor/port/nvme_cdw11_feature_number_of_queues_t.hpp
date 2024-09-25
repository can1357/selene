#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_number_of_queues_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_NUMBER_OF_QUEUES]
    // => Windows 11
    //
    union nvme_cdw11_feature_number_of_queues_t
    {                                          
        // Windows 11          
        //                     
        _m00 uint16_t nsq;                       //{ +0x0000@0  } | .NSQ
        _m01 uint16_t ncq;                       //{ +0x0000@16 } | .NCQ
        _m02 uint32_t as_ulong;                  //{ +0x0000    } | .AsUlong
                                               
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_NUMBER_OF_QUEUES.$", 0x0, false, 0xd1e034940b4e941f );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_number_of_queues_t, 0x4 );         
    };                                         
};
#include "magic/nvme_cdw11_feature_number_of_queues_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_number_of_queues_t, 0x4 );
