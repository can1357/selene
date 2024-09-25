#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/retpoline_binary_info_t.start.hpp"
namespace rtl
{
    // [struct _RTL_RETPOLINE_BINARY_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct retpoline_binary_info_t                                         
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                 
        _m00 int32_t                         retpoline_stubs_start_rva;      //{ +0x0000    +0x0000    +0x0000    } | .RetpolineStubsStartRva
        _m01 uint32_t                        cfg_dispatch_function_ptr_rva;  //{ +0x0004    +0x0004    +0x0004    } | .CfgDispatchFunctionPtrRva
        _m02 uint32_t                        iat_rva;                        //{ +0x0008    +0x0008    +0x0008    } | .IATRva
        _m03 int32_t*                        import_rvas;                    //{ +0x0010    +0x0010    +0x0010    } | .ImportRvas
        _m04 uint64_t*                       iat;                            //{ +0x0018    +0x0018    +0x0018    } | .IAT
        _m05 void*                           image_base;                     //{ +0x0020    +0x0020    +0x0020    } | .ImageBase
        _m06 sdk::function<uint32_t(void*)>* check_function;                 //{ +0x0028    +0x0028    +0x0028    } | .CheckFunction
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m07 uint32_t                        iat_size;                       //{ +0x000c    } | .IATSize
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_RETPOLINE_BINARY_INFO.$", 0x30, true, 0x34f02eb66fd11ceb );                              
        SDK_FIXED_SIZE( retpoline_binary_info_t, 0x30 );                              
    };                                                                     
};
#include "magic/retpoline_binary_info_t.end.hpp"
SDK_VERIFY( struct rtl::retpoline_binary_info_t, 0x30 );
