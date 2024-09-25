#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_concurrency_count_t.start.hpp"
namespace ke
{
    // [union _KE_PROCESS_CONCURRENCY_COUNT]
    // => Windows 11
    //
    union process_concurrency_count_t
    {                                
        // Windows 11            
        //                       
        _m00 uint20_t fraction;        //{ +0x0000@0  } | .Fraction
        _m01 uint12_t count;           //{ +0x0000@20 } | .Count
        _m02 uint32_t all_fields;      //{ +0x0000    } | .AllFields
                                     
        SDK_MAGIC_PROPERTIES( "_KE_PROCESS_CONCURRENCY_COUNT.$", 0x0, false, 0xb6f6ef60718ad1e );           
        SDK_FIXED_SIZE( process_concurrency_count_t, 0x4 );           
    };                               
};
#include "magic/process_concurrency_count_t.end.hpp"
SDK_VERIFY( union ke::process_concurrency_count_t, 0x4 );
