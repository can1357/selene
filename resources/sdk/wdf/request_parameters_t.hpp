#pragma once
#include <sdkgen/support_library.hpp>
#include "request_type_t.hpp"

namespace io { struct security_context_t; }

#include "magic/request_parameters_t.start.hpp"
namespace wdf
{
    // [struct _WDF_REQUEST_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct request_parameters_t                                                                       
    {                                                                                                 
        union u0_parameters_t                                                                         
        {                                                                                             
            struct u5_create_t                                                                        
            {                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
                //                                                                                    
                _m03 struct io::security_context_t* security_context;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SecurityContext
                _m04 uint32_t                       options;                                            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Options
                _m05 uint16_t                       file_attributes;                                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .FileAttributes
                _m06 uint16_t                       share_access;                                       //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .ShareAccess
                _m07 uint32_t                       ea_length;                                          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .EaLength
                                                                                                      
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.Parameters.Create.$", 0x20, true, 0xf5987d8c6a6fddb9 );                                                  
                SDK_FIXED_SIZE( u5_create_t, 0x20 );                                                  
            };                                                                                        
                                                                                                      
            struct u10_read_t                                                                         
            {                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                                                    
                _m09 uint64_t length;                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m10 uint32_t key;                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                _m11 int64_t  device_offset;                                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceOffset
                                                                                                      
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.Parameters.Read.$", 0x18, true, 0x733627c191d6465b );                                               
                SDK_FIXED_SIZE( u10_read_t, 0x18 );                                                   
            };                                                                                        
                                                                                                      
            struct u15_write_t                                                                        
            {                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
                //                                                                                    
                _m13 uint64_t length;                                                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
                _m14 uint32_t key;                                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
                _m15 int64_t  device_offset;                                                            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceOffset
                                                                                                      
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.Parameters.Write.$", 0x18, true, 0x4e61bca39fa5bff8 );                                               
                SDK_FIXED_SIZE( u15_write_t, 0x18 );                                                  
            };                                                                                        
                                                                                                      
            struct u20_device_io_control_t                                                            
            {                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
                //                                                                                    
                _m17 uint64_t output_buffer_length;                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .OutputBufferLength
                _m18 uint64_t input_buffer_length;                                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .InputBufferLength
                _m19 uint32_t io_control_code;                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _m20 void*    type3_input_buffer;                                                       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Type3InputBuffer
                                                                                                      
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.Parameters.DeviceIoControl.$", 0x20, true, 0x2fa6c4661fed2aa1 );                                                      
                SDK_FIXED_SIZE( u20_device_io_control_t, 0x20 );                                                      
            };                                                                                        
                                                                                                      
            struct u25_others_t                                                                       
            {                                                                                         
                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
                //                                                                                    
                _m22 void*    arg1;                                                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Arg1
                _m23 void*    arg2;                                                                     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Arg2
                _m24 uint32_t io_control_code;                                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .IoControlCode
                _m25 void*    arg4;                                                                     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Arg4
                                                                                                      
                SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.Parameters.Others.$", 0x20, true, 0x7bd6bfc35ed3fab7 );                                                 
                SDK_FIXED_SIZE( u25_others_t, 0x20 );                                                 
            };                                                                                        
                                                                                                      
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
            //                                                                                        
            _m08 u5_create_t                                         create;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Create
            _m12 u10_read_t                                          read;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Read
            _m16 u15_write_t                                         write;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Write
            _m21 u20_device_io_control_t                             device_io_control;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceIoControl
            _m26 u25_others_t                                        others;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Others
                                                                                                      
            SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.Parameters.$", 0x20, true, 0xcee368be41d4f575 );                                 
            SDK_FIXED_SIZE( u0_parameters_t, 0x20 );                                                  
        };                                                                                            
                                                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                                            
        _m00 uint16_t                                                                  size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint8_t                                                                   minor_function;  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorFunction
        _m02 enum wdf::request_type_t                                                  type;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Type
        _m27 u0_parameters_t                                                           parameters;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Parameters
                                                                                                      
        SDK_NONVOL_PROPERTIES( "_WDF_REQUEST_PARAMETERS.$", 0x28, true, 0xe5e407da2bfa1fce );               
        SDK_FIXED_SIZE( request_parameters_t, 0x28 );                                                 
    };                                                                                                
};
#include "magic/request_parameters_t.end.hpp"
SDK_VERIFY( struct wdf::request_parameters_t::u0_parameters_t::u5_create_t, 0x20 );
SDK_VERIFY( struct wdf::request_parameters_t::u0_parameters_t::u10_read_t, 0x18 );
SDK_VERIFY( struct wdf::request_parameters_t::u0_parameters_t::u15_write_t, 0x18 );
SDK_VERIFY( struct wdf::request_parameters_t::u0_parameters_t::u20_device_io_control_t, 0x20 );
SDK_VERIFY( struct wdf::request_parameters_t::u0_parameters_t::u25_others_t, 0x20 );
SDK_VERIFY( union wdf::request_parameters_t::u0_parameters_t, 0x20 );
SDK_VERIFY( struct wdf::request_parameters_t, 0x28 );
