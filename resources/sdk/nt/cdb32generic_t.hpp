#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cdb32generic_t.start.hpp"
namespace nt
{
    // [struct _CDB32GENERIC]
    // => WDK 10 (NV)
    //
    struct cdb32generic_t                                 
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 uint8_t                operation_code;         //{ +0x0000    } | .OperationCode
        _m01 uint8_t                control;                //{ +0x0001    } | .Control
        _m02 uint5_t                group;                  //{ +0x0006@0  } | .Group
        _m03 uint8_t                additional_cdb_length;  //{ +0x0007    } | .AdditionalCDBLength
        _m04 sdk::array<uint8_t, 2> service_action;         //{ +0x0008    } | .ServiceAction
        _m05 sdk::array<uint8_t, 8> logical_block;          //{ +0x000c    } | .LogicalBlock
        _m06 sdk::array<uint8_t, 4> transfer_length;        //{ +0x001c    } | .TransferLength
                                                          
        SDK_NONVOL_PROPERTIES( "_CDB32GENERIC.$", 0x0, false, 0x2aad21929b3b9b23 );                      
        SDK_FIXED_SIZE( cdb32generic_t, 0x20 );                      
    };                                                    
};
#include "magic/cdb32generic_t.end.hpp"
SDK_VERIFY( struct nt::cdb32generic_t, 0x20 );
