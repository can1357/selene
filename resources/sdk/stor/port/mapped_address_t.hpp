#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mapped_address_t.start.hpp"
namespace stor::port
{
    struct mapped_address_t;

    // [struct _MAPPED_ADDRESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mapped_address_t                                           
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 struct stor::port::mapped_address_t* next_mapped_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NextMappedAddress
        _m01 void*                                mapped_address;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MappedAddress
        _m02 uint32_t                             number_of_bytes;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfBytes
        _m03 int64_t                              io_address;           //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .IoAddress
        _m04 uint32_t                             bus_number;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .BusNumber
                                                                      
        SDK_NONVOL_PROPERTIES( "_MAPPED_ADDRESS.$", 0x28, true, 0xa09436c516c1219c );                    
        SDK_FIXED_SIZE( mapped_address_t, 0x28 );                     
    };                                                                
};
#include "magic/mapped_address_t.end.hpp"
SDK_VERIFY( struct stor::port::mapped_address_t, 0x28 );
