#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/amli_bad_io_address_list_t.start.hpp"
namespace hal
{
    // [struct _HAL_AMLI_BAD_IO_ADDRESS_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct amli_bad_io_address_list_t                     
    {                                                     
        using phalioreadwritehandler_t = sdk::function<int32_t(uint8_t, uint32_t, uint32_t, uint32_t*)>*;                   
                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                
        _m00 uint32_t                  bad_addr_begin;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BadAddrBegin
        _m01 uint32_t                  bad_addr_size;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .BadAddrSize
        _m02 uint32_t                  os_version_trigger;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .OSVersionTrigger
        _m03 phalioreadwritehandler_t  io_handler;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IOHandler
                                                          
        SDK_NONVOL_PROPERTIES( "_HAL_AMLI_BAD_IO_ADDRESS_LIST.$", 0x18, true, 0x43965e93b6d7fa62 );                   
        SDK_FIXED_SIZE( amli_bad_io_address_list_t, 0x18 );                   
    };                                                    
};
#include "magic/amli_bad_io_address_list_t.end.hpp"
SDK_VERIFY( struct hal::amli_bad_io_address_list_t, 0x18 );
