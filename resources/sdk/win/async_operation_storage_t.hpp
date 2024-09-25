#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/async_operation_storage_t.start.hpp"
namespace win
{
    // [class AsyncOperationStorage]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class async_operation_storage_t  
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                           
        _m00 bool operation_is_agile;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._operationIsAgile
                                     
        SDK_MAGIC_PROPERTIES( "AsyncOperationStorage.$", 0x20, true, 0xb9c464ca0b354a );                   
        SDK_FIXED_SIZE( async_operation_storage_t, 0x20 );                   
    };                               
};
#include "magic/async_operation_storage_t.end.hpp"
SDK_VERIFY( class win::async_operation_storage_t, 0x20 );
