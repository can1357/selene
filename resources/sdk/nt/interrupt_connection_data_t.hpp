#pragma once
#include <sdkgen/support_library.hpp>
#include "interrupt_vector_data_t.hpp"

#include "magic/interrupt_connection_data_t.start.hpp"
namespace nt
{
    // [struct _INTERRUPT_CONNECTION_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct interrupt_connection_data_t
    {                                 
        using vectors_t = sdk::array<struct nt::interrupt_vector_data_t, 1>;        
                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                      
        _m00 uint32_t   count;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 vectors_t  vectors;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Vectors
                                      
        SDK_MAGIC_PROPERTIES( "_INTERRUPT_CONNECTION_DATA.$", 0x60, true, 0x91b18fc6594410c3 );        
        SDK_FIXED_SIZE( interrupt_connection_data_t, 0x60 );        
    };                                
};
#include "magic/interrupt_connection_data_t.end.hpp"
SDK_VERIFY( struct nt::interrupt_connection_data_t, 0x60 );
