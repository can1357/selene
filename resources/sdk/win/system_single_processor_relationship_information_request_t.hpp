#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/processor_number_t.hpp"
#include "../nt/logical_processor_relationship_t.hpp"

#include "magic/system_single_processor_relationship_information_request_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST]
    // => Windows 11
    //
    struct system_single_processor_relationship_information_request_t   
    {                                                                   
        // Windows 11                                                   
        //                                                              
        _m00 enum nt::logical_processor_relationship_t relationship;      //{ +0x0000    } | .Relationship
        _m01 struct nt::processor_number_t             processor_number;  //{ +0x0004    } | .ProcessorNumber
                                                                        
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SINGLE_PROCESSOR_RELATIONSHIP_INFORMATION_REQUEST.$", 0x0, false, 0x40f95cc1ab14fd60 );                 
        SDK_FIXED_SIZE( system_single_processor_relationship_information_request_t, 0x8 );                 
    };                                                                  
};
#include "magic/system_single_processor_relationship_information_request_t.end.hpp"
SDK_VERIFY( struct win::system_single_processor_relationship_information_request_t, 0x8 );
