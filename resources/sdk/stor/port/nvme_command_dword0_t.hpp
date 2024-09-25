#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_command_dword0_t.start.hpp"
namespace stor::port
{
    // [union NVME_COMMAND_DWORD0]
    // => Windows 11
    //
    union nvme_command_dword0_t
    {                          
        // Windows 11          
        //                     
        _m00 uint8_t  opc;       //{ +0x0000@0  } | .OPC
        _m01 uint2_t  fuse;      //{ +0x0000@8  } | .FUSE
        _m02 uint1_t  psdt;      //{ +0x0000@15 } | .PSDT
        _m03 uint16_t cid;       //{ +0x0000@16 } | .CID
        _m04 uint32_t as_ulong;  //{ +0x0000    } | .AsUlong
                               
        SDK_MAGIC_PROPERTIES( "NVME_COMMAND_DWORD0.$", 0x0, false, 0xabab5e15242907d7 );         
        SDK_FIXED_SIZE( nvme_command_dword0_t, 0x4 );         
    };                         
};
#include "magic/nvme_command_dword0_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_command_dword0_t, 0x4 );
