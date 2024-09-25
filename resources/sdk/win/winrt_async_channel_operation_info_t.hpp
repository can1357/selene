#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "winrt_async_operation_type_t.hpp"

#include "magic/winrt_async_channel_operation_info_t.start.hpp"
namespace win
{
    // [class WinrtAsyncChannelOperationInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class winrt_async_channel_operation_info_t                                    
    {                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                        
        _m00 struct nt::guid_t                      iid_async_method;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._iidAsyncMethod
        _m01 uint16_t                               proc_num;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._procNum
        _m02 const wchar_t*                         operation_name;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._operationName
        _m03 enum win::winrt_async_operation_type_t operation_type;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._operationType
        _m04 struct nt::guid_t                      iid_async_operation_interface;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._iidAsyncOperationInterface
        _m05 struct nt::guid_t                      iid_completed_handler;          //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._iidCompletedHandler
        _m06 struct nt::guid_t*                     piid_progress_handler;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._piidProgressHandler
        _m07 struct nt::guid_t                      iid_progress_handler;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._iidProgressHandler
        _m08 const wchar_t*                         runtime_class_name;             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._runtimeClassName
                                                                                  
        SDK_MAGIC_PROPERTIES( "WinrtAsyncChannelOperationInfo.$", 0x80, true, 0x8b0718367c280ebf );                              
        SDK_FIXED_SIZE( winrt_async_channel_operation_info_t, 0x80 );                              
    };                                                                            
};
#include "magic/winrt_async_channel_operation_info_t.end.hpp"
SDK_VERIFY( class win::winrt_async_channel_operation_info_t, 0x80 );
