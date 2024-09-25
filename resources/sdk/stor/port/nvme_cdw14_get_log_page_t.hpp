#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw14_get_log_page_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW14_GET_LOG_PAGE]
    // => Windows 11
    //
    union nvme_cdw14_get_log_page_t          
    {                                        
        // Windows 11                        
        //                                   
        _m00 uint7_t  uuid_index;              //{ +0x0000@0  } | .UUIDIndex
        _m01 uint8_t  command_set_identifier;  //{ +0x0000@24 } | .CommandSetIdentifier
        _m02 uint32_t as_ulong;                //{ +0x0000    } | .AsUlong
                                             
        SDK_MAGIC_PROPERTIES( "NVME_CDW14_GET_LOG_PAGE.$", 0x0, false, 0x38d391560a315068 );                       
        SDK_FIXED_SIZE( nvme_cdw14_get_log_page_t, 0x4 );                       
    };                                       
};
#include "magic/nvme_cdw14_get_log_page_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw14_get_log_page_t, 0x4 );
