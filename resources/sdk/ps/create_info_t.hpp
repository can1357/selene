#pragma once
#include <sdkgen/support_library.hpp>
#include "create_state_t.hpp"

#include "magic/create_info_t.start.hpp"
namespace ps
{
    // [struct _PS_CREATE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct create_info_t                                                 
    {                                                                    
        struct u0_init_state_t                                           
        {                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
            //                                                           
            _m02 uint32_t init_flags;                                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .InitFlags
            _m03 uint1_t  write_output_on_exit;                            //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .WriteOutputOnExit
            _m04 uint1_t  detect_manifest;                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .DetectManifest
            _m05 uint1_t  ifeo_do_not_propagate_key_state;                 //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .IFEODoNotPropagateKeyState
            _m06 uint16_t prohibited_image_characteristics;                //{ +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  +0x0002@0  } | .ProhibitedImageCharacteristics
            _m07 uint32_t additional_file_access;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AdditionalFileAccess
                                                                         
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                               
            //                                                           
            _m08 uint1_t  ifeo_skip_debugger;                              //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .IFEOSkipDebugger
                                                                         
            // Windows 11                                                
            //                                                           
            _m09 uint1_t  ifeo_skip_redirects;                             //{ +0x0000@2  } | .IFEOSkipRedirects
                                                                         
            SDK_NONVOL_PROPERTIES( "_PS_CREATE_INFO.InitState.$", 0x8, true, 0x3c27697fdbbd87e7 );                                               
            SDK_FIXED_SIZE( u0_init_state_t, 0x8 );                                               
        };                                                               
                                                                         
        struct u5_fail_section_t                                         
        {                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                                           
            _m11 void* file_handle;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileHandle
                                                                         
            SDK_NONVOL_PROPERTIES( "_PS_CREATE_INFO.FailSection.$", 0x8, true, 0x1f0460826a1056cd );                          
            SDK_FIXED_SIZE( u5_fail_section_t, 0x8 );                          
        };                                                               
                                                                         
        struct u10_exe_format_t                                          
        {                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
            //                                                           
            _m13 uint16_t dll_characteristics;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DllCharacteristics
                                                                         
            SDK_NONVOL_PROPERTIES( "_PS_CREATE_INFO.ExeFormat.$", 0x2, true, 0x39f79cbfed00a368 );                                  
            SDK_FIXED_SIZE( u10_exe_format_t, 0x2 );                                  
        };                                                               
                                                                         
        struct u15_exe_name_t                                            
        {                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
            //                                                           
            _m15 void* ifeo_key;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IFEOKey
                                                                         
            SDK_NONVOL_PROPERTIES( "_PS_CREATE_INFO.ExeName.$", 0x8, true, 0x5ea61b0fc82371bb );                       
            SDK_FIXED_SIZE( u15_exe_name_t, 0x8 );                       
        };                                                               
                                                                         
        struct u20_success_state_t                                       
        {                                                                
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
            //                                                           
            _m17 uint32_t output_flags;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputFlags
            _m18 uint1_t  protected_process;                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .ProtectedProcess
            _m19 uint1_t  address_space_override;                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AddressSpaceOverride
            _m20 uint1_t  dev_override_enabled;                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DevOverrideEnabled
            _m21 uint1_t  manifest_detected;                               //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .ManifestDetected
            _m22 uint1_t  protected_process_light;                         //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .ProtectedProcessLight
            _m23 void*    file_handle;                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileHandle
            _m24 void*    section_handle;                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SectionHandle
            _m25 uint64_t user_process_parameters_native;                  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .UserProcessParametersNative
            _m26 uint32_t user_process_parameters_wow64;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .UserProcessParametersWow64
            _m27 uint32_t current_parameter_flags;                         //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .CurrentParameterFlags
            _m28 uint64_t peb_address_native;                              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .PebAddressNative
            _m29 uint32_t peb_address_wow64;                               //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PebAddressWow64
            _m30 uint64_t manifest_address;                                //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .ManifestAddress
            _m31 uint32_t manifest_size;                                   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ManifestSize
                                                                         
            SDK_NONVOL_PROPERTIES( "_PS_CREATE_INFO.SuccessState.$", 0x48, true, 0x8c3048a940a2fb22 );                                             
            SDK_FIXED_SIZE( u20_success_state_t, 0x48 );                                             
        };                                                               
                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                               
        _m00 uint64_t                                      size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum ps::create_state_t                       state;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .State
        _m10 u0_init_state_t                               init_state;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InitState
        _m12 u5_fail_section_t                             fail_section;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FailSection
        _m14 u10_exe_format_t                              exe_format;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExeFormat
        _m16 u15_exe_name_t                                exe_name;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ExeName
        _m32 u20_success_state_t                           success_state;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SuccessState
                                                                         
        SDK_NONVOL_PROPERTIES( "_PS_CREATE_INFO.$", 0x58, true, 0xe3c932354fe36347 );              
        SDK_FIXED_SIZE( create_info_t, 0x58 );                           
    };                                                                   
};
#include "magic/create_info_t.end.hpp"
SDK_VERIFY( struct ps::create_info_t::u0_init_state_t, 0x8 );
SDK_VERIFY( struct ps::create_info_t::u5_fail_section_t, 0x8 );
SDK_VERIFY( struct ps::create_info_t::u10_exe_format_t, 0x2 );
SDK_VERIFY( struct ps::create_info_t::u15_exe_name_t, 0x8 );
SDK_VERIFY( struct ps::create_info_t::u20_success_state_t, 0x48 );
SDK_VERIFY( struct ps::create_info_t, 0x58 );
