#pragma once
#include <sdkgen/support_library.hpp>
#include "request_type_t.hpp"
#include "../io/status_block_t.hpp"

#include "magic/request_completion_params_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;
    struct usb_request_completion_params_t;

    // [struct _WDF_REQUEST_COMPLETION_PARAMS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_completion_params_t                                                         
    {                                                                                          
        union u0_parameters_t                                                                  
        {                                                                                      
            struct u5_write_t                                                                  
            {                                                                                  
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
                //                                                                             
                _m03 struct wdf::wdfmemory_t* buffer;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                _m04 uint64_t                 length;                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                _m05 uint64_t                 offset;                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
                                                                                               
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Write.$", 0x18, true, 0xe715afb2e06a9614 );                         
                SDK_FIXED_SIZE( u5_write_t, 0x18 );                                            
            };                                                                                 
                                                                                               
            struct u10_read_t                                                                  
            {                                                                                  
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
                //                                                                             
                _m07 struct wdf::wdfmemory_t* buffer;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                _m08 uint64_t                 length;                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                _m09 uint64_t                 offset;                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
                                                                                               
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Read.$", 0x18, true, 0x4c3d3660aa877142 );                         
                SDK_FIXED_SIZE( u10_read_t, 0x18 );                                            
            };                                                                                 
                                                                                               
            struct u15_ioctl_t                                                                 
            {                                                                                  
                struct u20_input_t                                                             
                {                                                                              
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
                    //                                                                         
                    _m12 struct wdf::wdfmemory_t* buffer;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                    _m13 uint64_t                 offset;                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Offset
                                                                                               
                    SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Input.$", 0x10, true, 0xae27134d7ff9314d );                                         
                    SDK_FIXED_SIZE( u20_input_t, 0x10 );                                         
                };                                                                             
                                                                                               
                struct u25_output_t                                                            
                {                                                                              
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
                    //                                                                         
                    _m15 struct wdf::wdfmemory_t* buffer;                                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Buffer
                    _m16 uint64_t                 offset;                                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Offset
                    _m17 uint64_t                 length;                                        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
                                                                                               
                    SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.Output.$", 0x18, true, 0xb633bc5f7098b225 );                                         
                    SDK_FIXED_SIZE( u25_output_t, 0x18 );                                         
                };                                                                             
                                                                                               
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
                //                                                                             
                _m11 uint32_t                            io_control_code;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .IoControlCode
                _m14 u20_input_t                         input;                                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Input
                _m18 u25_output_t                        output;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Output
                                                                                               
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Ioctl.$", 0x30, true, 0x6088dee572e577d4 );                                  
                SDK_FIXED_SIZE( u15_ioctl_t, 0x30 );                                           
            };                                                                                 
                                                                                               
            struct u30_others_t                                                                
            {                                                                                  
                union u35_argument1_t                                                          
                {                                                                              
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
                    //                                                                         
                    _m20 void*    ptr;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                    _m21 uint64_t value;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                                               
                    SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument1.$", 0x8, true, 0x15d458a512e28cba );                                  
                    SDK_FIXED_SIZE( u35_argument1_t, 0x8 );                                    
                };                                                                             
                                                                                               
                union u40_argument2_t                                                          
                {                                                                              
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
                    //                                                                         
                    _m23 void*    ptr;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                    _m24 uint64_t value;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                                               
                    SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument2.$", 0x8, true, 0x8403b4cab4b80127 );                                  
                    SDK_FIXED_SIZE( u40_argument2_t, 0x8 );                                    
                };                                                                             
                                                                                               
                union u45_argument3_t                                                          
                {                                                                              
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
                    //                                                                         
                    _m26 void*    ptr;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                    _m27 uint64_t value;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                                               
                    SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument3.$", 0x8, true, 0x4727bc9604c59707 );                                  
                    SDK_FIXED_SIZE( u45_argument3_t, 0x8 );                                    
                };                                                                             
                                                                                               
                union u50_argument4_t                                                          
                {                                                                              
                    // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
                    //                                                                         
                    _m29 void*    ptr;                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ptr
                    _m30 uint64_t value;                                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                                                               
                    SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.Argument4.$", 0x8, true, 0xc7a6aad4f678f1c4 );                                  
                    SDK_FIXED_SIZE( u50_argument4_t, 0x8 );                                    
                };                                                                             
                                                                                               
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
                //                                                                             
                _m22 u35_argument1_t    argument1;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Argument1
                _m25 u40_argument2_t    argument2;                                               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Argument2
                _m28 u45_argument3_t    argument3;                                               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Argument3
                _m31 u50_argument4_t    argument4;                                               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Argument4
                                                                                               
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Others.$", 0x20, true, 0xc044956853525c6b );                            
                SDK_FIXED_SIZE( u30_others_t, 0x20 );                                          
            };                                                                                 
                                                                                               
            struct u55_usb_t                                                                   
            {                                                                                  
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
                //                                                                             
                _m33 struct wdf::usb_request_completion_params_t* completion;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Completion
                                                                                               
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.Usb.$", 0x8, true, 0x2a2ffa381639bf44 );                             
                SDK_FIXED_SIZE( u55_usb_t, 0x8 );                                              
            };                                                                                 
                                                                                               
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
            //                                                                                 
            _m06 u5_write_t                                                  write;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m10 u10_read_t                                                  read;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Read
            _m19 u15_ioctl_t                                                 ioctl;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Ioctl
            _m32 u30_others_t                                                others;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Others
            _m34 u55_usb_t                                                   usb;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Usb
                                                                                               
            SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.Parameters.$", 0x30, true, 0xe774abfc944346c8 );                  
            SDK_FIXED_SIZE( u0_parameters_t, 0x30 );                                           
        };                                                                                     
                                                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                                                     
        _m00 uint32_t                                                               size;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum wdf::request_type_t                                               type;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m02 struct io::status_block_t                                              io_status;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .IoStatus
        _m35 u0_parameters_t                                                        parameters;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Parameters
                                                                                               
        SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS.$", 0x48, true, 0x4e6735997a2bd9e4 );           
        SDK_FIXED_SIZE( request_completion_params_t, 0x48 );                                   
    };                                                                                         
};
#include "magic/request_completion_params_t.end.hpp"
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u5_write_t, 0x18 );
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u10_read_t, 0x18 );
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u15_ioctl_t::u20_input_t, 0x10 );
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u15_ioctl_t::u25_output_t, 0x18 );
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u15_ioctl_t, 0x30 );
SDK_VERIFY( union wdf::request_completion_params_t::u0_parameters_t::u30_others_t::u35_argument1_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_t::u0_parameters_t::u30_others_t::u40_argument2_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_t::u0_parameters_t::u30_others_t::u45_argument3_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_t::u0_parameters_t::u30_others_t::u50_argument4_t, 0x8 );
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u30_others_t, 0x20 );
SDK_VERIFY( struct wdf::request_completion_params_t::u0_parameters_t::u55_usb_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_t::u0_parameters_t, 0x30 );
SDK_VERIFY( struct wdf::request_completion_params_t, 0x48 );
