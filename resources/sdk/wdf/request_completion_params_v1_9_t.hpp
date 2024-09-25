#pragma once
#include <sdkgen/support_library.hpp>
#include "request_type_t.hpp"
#include "../io/status_block_t.hpp"

#include "magic/request_completion_params_v1_9_t.start.hpp"
namespace wdf
{
    struct wdfmemory_t;
    struct usb_request_completion_params_v1_9_t;

    // [struct _WDF_REQUEST_COMPLETION_PARAMS_V1_9]
    // => Windows 10 v1607
    //
    struct request_completion_params_v1_9_t                                                  
    {                                                                                        
        union u0_parameters_t                                                                
        {                                                                                    
            struct u1_write_t                                                                
            {                                                                                
                // Windows 10 v1607                                                          
                //                                                                           
                _m03 struct wdf::wdfmemory_t* buffer;                                          //{ +0x0000    } | .Buffer
                _m04 uint64_t                 length;                                          //{ +0x0008    } | .Length
                _m05 uint64_t                 offset;                                          //{ +0x0010    } | .Offset
                                                                                             
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Write.$", 0x0, false, 0xd10bdd06331bc1da );                         
                SDK_FIXED_SIZE( u1_write_t, 0x18 );                                          
            };                                                                               
                                                                                             
            struct u2_read_t                                                                 
            {                                                                                
                // Windows 10 v1607                                                          
                //                                                                           
                _m07 struct wdf::wdfmemory_t* buffer;                                          //{ +0x0000    } | .Buffer
                _m08 uint64_t                 length;                                          //{ +0x0008    } | .Length
                _m09 uint64_t                 offset;                                          //{ +0x0010    } | .Offset
                                                                                             
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Read.$", 0x0, false, 0xb6556681accd7e70 );                         
                SDK_FIXED_SIZE( u2_read_t, 0x18 );                                           
            };                                                                               
                                                                                             
            struct u3_ioctl_t                                                                
            {                                                                                
                struct u4_input_t                                                            
                {                                                                            
                    // Windows 10 v1607                                                      
                    //                                                                       
                    _m12 struct wdf::wdfmemory_t* buffer;                                      //{ +0x0000    } | .Buffer
                    _m13 uint64_t                 offset;                                      //{ +0x0008    } | .Offset
                                                                                             
                    SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Input.$", 0x0, false, 0xce78ea0b708639f );                                         
                    SDK_FIXED_SIZE( u4_input_t, 0x10 );                                         
                };                                                                           
                                                                                             
                struct u5_output_t                                                           
                {                                                                            
                    // Windows 10 v1607                                                      
                    //                                                                       
                    _m15 struct wdf::wdfmemory_t* buffer;                                      //{ +0x0000    } | .Buffer
                    _m16 uint64_t                 offset;                                      //{ +0x0008    } | .Offset
                    _m17 uint64_t                 length;                                      //{ +0x0010    } | .Length
                                                                                             
                    SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.Output.$", 0x0, false, 0xe351c89329e7b973 );                                         
                    SDK_FIXED_SIZE( u5_output_t, 0x18 );                                         
                };                                                                           
                                                                                             
                // Windows 10 v1607                                                          
                //                                                                           
                _m11 uint32_t                            io_control_code;                      //{ +0x0000    } | .IoControlCode
                _m14 u4_input_t                          input;                                //{ +0x0008    } | .Input
                _m18 u5_output_t                         output;                               //{ +0x0018    } | .Output
                                                                                             
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Ioctl.$", 0x0, false, 0x6f3398fd05aa3eb8 );                                  
                SDK_FIXED_SIZE( u3_ioctl_t, 0x30 );                                          
            };                                                                               
                                                                                             
            struct u6_others_t                                                               
            {                                                                                
                union u7_argument1_t                                                         
                {                                                                            
                    // Windows 10 v1607                                                      
                    //                                                                       
                    _m20 void*    ptr;                                                         //{ +0x0000    } | .Ptr
                    _m21 uint64_t value;                                                       //{ +0x0000    } | .Value
                                                                                             
                    SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument1.$", 0x0, false, 0x74b4a3c69b2c5fc4 );                                  
                    SDK_FIXED_SIZE( u7_argument1_t, 0x8 );                                   
                };                                                                           
                                                                                             
                union u8_argument2_t                                                         
                {                                                                            
                    // Windows 10 v1607                                                      
                    //                                                                       
                    _m23 void*    ptr;                                                         //{ +0x0000    } | .Ptr
                    _m24 uint64_t value;                                                       //{ +0x0000    } | .Value
                                                                                             
                    SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument2.$", 0x0, false, 0xeeb407ae249ead6b );                                  
                    SDK_FIXED_SIZE( u8_argument2_t, 0x8 );                                   
                };                                                                           
                                                                                             
                union u9_argument3_t                                                         
                {                                                                            
                    // Windows 10 v1607                                                      
                    //                                                                       
                    _m26 void*    ptr;                                                         //{ +0x0000    } | .Ptr
                    _m27 uint64_t value;                                                       //{ +0x0000    } | .Value
                                                                                             
                    SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument3.$", 0x0, false, 0xc18ba64cd6c15664 );                                  
                    SDK_FIXED_SIZE( u9_argument3_t, 0x8 );                                   
                };                                                                           
                                                                                             
                union u10_argument4_t                                                        
                {                                                                            
                    // Windows 10 v1607                                                      
                    //                                                                       
                    _m29 void*    ptr;                                                         //{ +0x0000    } | .Ptr
                    _m30 uint64_t value;                                                       //{ +0x0000    } | .Value
                                                                                             
                    SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.Argument4.$", 0x0, false, 0xb32acae3d82e9113 );                                  
                    SDK_FIXED_SIZE( u10_argument4_t, 0x8 );                                  
                };                                                                           
                                                                                             
                // Windows 10 v1607                                                          
                //                                                                           
                _m22 u7_argument1_t     argument1;                                             //{ +0x0000    } | .Argument1
                _m25 u8_argument2_t     argument2;                                             //{ +0x0008    } | .Argument2
                _m28 u9_argument3_t     argument3;                                             //{ +0x0010    } | .Argument3
                _m31 u10_argument4_t    argument4;                                             //{ +0x0018    } | .Argument4
                                                                                             
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Others.$", 0x0, false, 0x5ab2e326e1b18cbf );                            
                SDK_FIXED_SIZE( u6_others_t, 0x20 );                                         
            };                                                                               
                                                                                             
            struct u11_usb_t                                                                 
            {                                                                                
                using pwdf_usb_request_completion_params_v1_9_t = struct wdf::usb_request_completion_params_v1_9_t*;                             
                                                                                             
                // Windows 10 v1607                                                          
                //                                                                           
                _m33 pwdf_usb_request_completion_params_v1_9_t  completion;                    //{ +0x0000    } | .Completion
                                                                                             
                SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.Usb.$", 0x0, false, 0xac30d89efe161de8 );                             
                SDK_FIXED_SIZE( u11_usb_t, 0x8 );                                            
            };                                                                               
                                                                                             
            // Windows 10 v1607                                                              
            //                                                                               
            _m06 u1_write_t                                                write;              //{ +0x0000    } | .Write
            _m10 u2_read_t                                                 read;               //{ +0x0000    } | .Read
            _m19 u3_ioctl_t                                                ioctl;              //{ +0x0000    } | .Ioctl
            _m32 u6_others_t                                               others;             //{ +0x0000    } | .Others
            _m34 u11_usb_t                                                 usb;                //{ +0x0000    } | .Usb
                                                                                             
            SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.Parameters.$", 0x0, false, 0x4c71dd13e59730b1 );                  
            SDK_FIXED_SIZE( u0_parameters_t, 0x30 );                                         
        };                                                                                   
                                                                                             
        // Windows 10 v1607                                                                  
        //                                                                                   
        _m00 uint32_t                                                             size;        //{ +0x0000    } | .Size
        _m01 enum wdf::request_type_t                                             type;        //{ +0x0004    } | .Type
        _m02 struct io::status_block_t                                            io_status;   //{ +0x0008    } | .IoStatus
        _m35 u0_parameters_t                                                      parameters;  //{ +0x0018    } | .Parameters
                                                                                             
        SDK_MAGIC_PROPERTIES( "_WDF_REQUEST_COMPLETION_PARAMS_V1_9.$", 0x0, false, 0xe4f1066f514d61d8 );           
        SDK_FIXED_SIZE( request_completion_params_v1_9_t, 0x48 );                            
    };                                                                                       
};
#include "magic/request_completion_params_v1_9_t.end.hpp"
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u1_write_t, 0x18 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u2_read_t, 0x18 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u3_ioctl_t::u4_input_t, 0x10 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u3_ioctl_t::u5_output_t, 0x18 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u3_ioctl_t, 0x30 );
SDK_VERIFY( union wdf::request_completion_params_v1_9_t::u0_parameters_t::u6_others_t::u7_argument1_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_v1_9_t::u0_parameters_t::u6_others_t::u8_argument2_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_v1_9_t::u0_parameters_t::u6_others_t::u9_argument3_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_v1_9_t::u0_parameters_t::u6_others_t::u10_argument4_t, 0x8 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u6_others_t, 0x20 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t::u0_parameters_t::u11_usb_t, 0x8 );
SDK_VERIFY( union wdf::request_completion_params_v1_9_t::u0_parameters_t, 0x30 );
SDK_VERIFY( struct wdf::request_completion_params_v1_9_t, 0x48 );
