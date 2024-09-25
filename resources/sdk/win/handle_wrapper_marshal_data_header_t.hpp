#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handle_wrapper_marshal_data_header_t.start.hpp"
namespace win
{
    // [struct HandleWrapperMarshalDataHeader]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct handle_wrapper_marshal_data_header_t 
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint8_t  wrapper_type;               //{ +0x0000    +0x0000    +0x0000    } | .WrapperType
        _m01 uint8_t  idl_type;                   //{ +0x0001    +0x0001    +0x0001    } | .IdlType
        _m02 uint16_t was_marshaled_in_com_call;  //{ +0x0002    +0x0002    +0x0002    } | .WasMarshaledInComCall
                                                
        SDK_MAGIC_PROPERTIES( "HandleWrapperMarshalDataHeader.$", 0x4, true, 0x93ef3835a1f4256f );                          
        SDK_FIXED_SIZE( handle_wrapper_marshal_data_header_t, 0x4 );                          
    };                                          
};
#include "magic/handle_wrapper_marshal_data_header_t.end.hpp"
SDK_VERIFY( struct win::handle_wrapper_marshal_data_header_t, 0x4 );
