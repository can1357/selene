#pragma once
#include <sdkgen/support_library.hpp>
#include "ideregs_t.hpp"

#include "magic/sendcmdinparams_t.start.hpp"
namespace nt
{
    // [struct _SENDCMDINPARAMS]
    // => WDK 10 (NV)
    //
    struct sendcmdinparams_t                        
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t                c_buffer_size;   //{ +0x0000    } | .cBufferSize
        _m01 struct nt::ideregs_t    ir_drive_regs;   //{ +0x0004    } | .irDriveRegs
        _m02 uint8_t                 b_drive_number;  //{ +0x000c    } | .bDriveNumber
        _m03 sdk::array<uint8_t, 3>  b_reserved;      //{ +0x000d    } | .bReserved
        _m04 sdk::array<uint32_t, 4> dw_reserved;     //{ +0x0010    } | .dwReserved
        _m05 sdk::array<uint8_t, 1>  b_buffer;        //{ +0x0020    } | .bBuffer
                                                    
        SDK_NONVOL_PROPERTIES( "_SENDCMDINPARAMS.$", 0x0, false, 0x8681505c8b2f731d );               
        SDK_FIXED_SIZE( sendcmdinparams_t, 0x21 );               
    };                                              
};
#include "magic/sendcmdinparams_t.end.hpp"
SDK_VERIFY( struct nt::sendcmdinparams_t, 0x21 );
