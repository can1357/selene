#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/read_write_io_extended32_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_READ_WRITE_IO_EXTENDED32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct read_write_io_extended32_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t data_size;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataSize
        _m01 uint32_t interface_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .InterfaceType
        _m02 uint32_t bus_number;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BusNumber
        _m03 uint32_t address_space;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AddressSpace
        _m04 uint32_t io_address;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IoAddress
        _m05 uint32_t data_value;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .DataValue
                                     
        SDK_MAGIC_PROPERTIES( "_DBGKD_READ_WRITE_IO_EXTENDED32.$", 0x18, true, 0x995b51670a6bf8eb );               
        SDK_FIXED_SIZE( read_write_io_extended32_t, 0x18 );               
    };                               
};
#include "magic/read_write_io_extended32_t.end.hpp"
SDK_VERIFY( struct dbgkd::read_write_io_extended32_t, 0x18 );
