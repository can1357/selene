#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/request_fatal_error_information_length_mismatch_data_t.start.hpp"
namespace wdf
{
    struct wdfrequest_t;

    // [struct _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct request_fatal_error_information_length_mismatch_data_t
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                  
        _m00 struct wdf::wdfrequest_t* request;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Request
        _m01 struct nt::irp_t*         irp;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Irp
        _m02 uint32_t                  output_buffer_length;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OutputBufferLength
        _m03 uint64_t                  information;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Information
        _m04 uint8_t                   major_function;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MajorFunction
                                                                 
        SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA.$", 0x28, true, 0xbbe9958064068666 );                     
        SDK_FIXED_SIZE( request_fatal_error_information_length_mismatch_data_t, 0x28 );                     
    };                                                           
};
#include "magic/request_fatal_error_information_length_mismatch_data_t.end.hpp"
SDK_VERIFY( struct wdf::request_fatal_error_information_length_mismatch_data_t, 0x28 );
