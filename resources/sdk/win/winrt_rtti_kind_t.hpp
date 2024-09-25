#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum WinrtRttiKind]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class winrt_rtti_kind_t : int32_t        
    {                                             
        _namespace =                       0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        runtime_class =                    0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        interface =                        0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        delegate =                         0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parameterized_interface =          0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parameterized_interface_instance = 0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parameterized_delegate =           0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        parameterized_delegate_instance =  0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                            
};
