#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_type_t.hpp"

#include "magic/sysdbg_io_space_t.start.hpp"
namespace win
{
    // [struct _SYSDBG_IO_SPACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sysdbg_io_space_t                          
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 uint64_t                  address;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 void*                     buffer;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Buffer
        _m02 uint32_t                  request;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Request
        _m03 enum nt::interface_type_t interface_type;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .InterfaceType
        _m04 uint32_t                  bus_number;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BusNumber
        _m05 uint32_t                  address_space;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AddressSpace
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSDBG_IO_SPACE.$", 0x20, true, 0x76d0e1f92c62ea78 );               
        SDK_FIXED_SIZE( sysdbg_io_space_t, 0x20 );               
    };                                                
};
#include "magic/sysdbg_io_space_t.end.hpp"
SDK_VERIFY( struct win::sysdbg_io_space_t, 0x20 );
