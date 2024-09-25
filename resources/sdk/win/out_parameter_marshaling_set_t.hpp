#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/out_parameter_marshaling_set_t.start.hpp"
namespace win
{
    // [class OutParameterMarshalingSet]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class out_parameter_marshaling_set_t            
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                          
        _m00 nt::list_entry_t list_biases;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._listBiases
        _m01 const uint64_t   id;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._id
        _m02 nt::list_entry_t list_entry_for_client;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._listEntryForClient
                                                    
        SDK_MAGIC_PROPERTIES( "OutParameterMarshalingSet.$", 0x40, true, 0xa9fe0f3e65041f48 );                      
        SDK_FIXED_SIZE( out_parameter_marshaling_set_t, 0x40 );                      
    };                                              
};
#include "magic/out_parameter_marshaling_set_t.end.hpp"
SDK_VERIFY( class win::out_parameter_marshaling_set_t, 0x40 );
