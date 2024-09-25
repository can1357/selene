#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/request_block_address_t.start.hpp"
namespace stor::port
{
    // [struct _REQUEST_BLOCK_ADDRESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_block_address_t     
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint8_t operation_code;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OperationCode
        _m01 uint8_t allocation_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AllocationLength
        _m02 uint1_t link;               //{ +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  +0x0005@0  } | .Link
        _m03 uint1_t flag;               //{ +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  +0x0005@1  } | .Flag
        _m04 uint2_t vendor_unique;      //{ +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  +0x0005@6  } | .VendorUnique
                                       
        SDK_NONVOL_PROPERTIES( "_REQUEST_BLOCK_ADDRESS.$", 0x6, true, 0xfe6a58ec8415792c );                  
        SDK_FIXED_SIZE( request_block_address_t, 0x6 );                  
    };                                 
};
#include "magic/request_block_address_t.end.hpp"
SDK_VERIFY( struct stor::port::request_block_address_t, 0x6 );
