#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_on_create_ea_information_t.start.hpp"
namespace nt
{
    struct file_full_ea_information_t;

    // [struct _QUERY_ON_CREATE_EA_INFORMATION]
    // => WDK 10 (NV)
    //
    struct query_on_create_ea_information_t                        
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                               ea_buffer_size;  //{ +0x0000    } | .EaBufferSize
        _m01 struct nt::file_full_ea_information_t* ea_buffer;       //{ +0x0008    } | .EaBuffer
                                                                   
        SDK_NONVOL_PROPERTIES( "_QUERY_ON_CREATE_EA_INFORMATION.$", 0x0, false, 0xfabb58957f886f63 );               
        SDK_FIXED_SIZE( query_on_create_ea_information_t, 0x10 );               
    };                                                             
};
#include "magic/query_on_create_ea_information_t.end.hpp"
SDK_VERIFY( struct nt::query_on_create_ea_information_t, 0x10 );
